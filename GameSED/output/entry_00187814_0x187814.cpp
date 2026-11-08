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

// Function: entry_00187814
// Address: 0x187814 - 0x187818
void entry_00187814_0x187814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187814_0x187814");
#endif

    ctx->pc = 0x187814u;

    // 0x187814: 0x8e300160  lw          $s0, 0x160($s1)
    ctx->pc = 0x187814u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->pc = 0x187818u;
}
