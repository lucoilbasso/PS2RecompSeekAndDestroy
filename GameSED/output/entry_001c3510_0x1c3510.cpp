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

// Function: entry_001c3510
// Address: 0x1c3510 - 0x1c3518
void entry_001c3510_0x1c3510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3510_0x1c3510");
#endif

    ctx->pc = 0x1c3510u;

    // 0x1c3510: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x1c3510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3514: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1c3514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c3518u;
}
