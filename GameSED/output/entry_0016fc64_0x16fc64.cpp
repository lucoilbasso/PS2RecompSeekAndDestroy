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

// Function: entry_0016fc64
// Address: 0x16fc64 - 0x16fc68
void entry_0016fc64_0x16fc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fc64_0x16fc64");
#endif

    ctx->pc = 0x16fc64u;

    // 0x16fc64: 0x8f849154  lw          $a0, -0x6EAC($gp)
    ctx->pc = 0x16fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938964)));
    ctx->pc = 0x16fc68u;
}
