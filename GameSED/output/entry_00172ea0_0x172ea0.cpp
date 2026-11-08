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

// Function: entry_00172ea0
// Address: 0x172ea0 - 0x172eb0
void entry_00172ea0_0x172ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172ea0_0x172ea0");
#endif

    ctx->pc = 0x172ea0u;

    // 0x172ea0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x172ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x172ea4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x172ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x172ea8: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x172ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x172eac: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x172eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->pc = 0x172eb0u;
}
