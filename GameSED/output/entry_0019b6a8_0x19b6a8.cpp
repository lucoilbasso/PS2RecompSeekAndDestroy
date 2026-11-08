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

// Function: entry_0019b6a8
// Address: 0x19b6a8 - 0x19b6b0
void entry_0019b6a8_0x19b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b6a8_0x19b6a8");
#endif

    ctx->pc = 0x19b6a8u;

    // 0x19b6a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19b6a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6ac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19b6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19b6b0u;
}
