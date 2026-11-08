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

// Function: entry_0019b440
// Address: 0x19b440 - 0x19b448
void entry_0019b440_0x19b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b440_0x19b440");
#endif

    ctx->pc = 0x19b440u;

    // 0x19b440: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19b440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19b444: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19b444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x19b448u;
}
