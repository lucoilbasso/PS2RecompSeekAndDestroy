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

// Function: entry_0019b7a0
// Address: 0x19b7a0 - 0x19b7a8
void entry_0019b7a0_0x19b7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b7a0_0x19b7a0");
#endif

    ctx->pc = 0x19b7a0u;

    // 0x19b7a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19b7a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b7a4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x19b7a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19b7a8u;
}
