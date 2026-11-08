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

// Function: entry_0011bea0
// Address: 0x11bea0 - 0x11bea4
void entry_0011bea0_0x11bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bea0_0x11bea0");
#endif

    ctx->pc = 0x11bea0u;

    // 0x11bea0: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x11bea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->pc = 0x11bea4u;
}
