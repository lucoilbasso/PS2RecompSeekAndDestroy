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

// Function: entry_00172240
// Address: 0x172240 - 0x172248
void entry_00172240_0x172240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172240_0x172240");
#endif

    ctx->pc = 0x172240u;

    // 0x172240: 0x8fb20040  lw          $s2, 0x40($sp)
    ctx->pc = 0x172240u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172244: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x172244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    ctx->pc = 0x172248u;
}
