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

// Function: entry_0011b630
// Address: 0x11b630 - 0x11b638
void entry_0011b630_0x11b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b630_0x11b630");
#endif

    ctx->pc = 0x11b630u;

    // 0x11b630: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11b634: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x11b634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    ctx->pc = 0x11b638u;
}
