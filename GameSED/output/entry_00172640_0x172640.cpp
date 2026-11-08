#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00172640
// Address: 0x172640 - 0x172650
void entry_00172640_0x172640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172640_0x172640");
#endif

    ctx->pc = 0x172640u;

    // 0x172640: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172644: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x172644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x172648: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x172648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x17264c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x17264cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x172650u;
}
