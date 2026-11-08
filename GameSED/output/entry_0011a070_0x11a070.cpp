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

// Function: entry_0011a070
// Address: 0x11a070 - 0x11a07c
void entry_0011a070_0x11a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a070_0x11a070");
#endif

    ctx->pc = 0x11a070u;

    // 0x11a070: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11a070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11a074: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11a074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a078: 0x8463e1b0  lh          $v1, -0x1E50($v1)
    ctx->pc = 0x11a078u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294959536)));
    ctx->pc = 0x11a07cu;
}
