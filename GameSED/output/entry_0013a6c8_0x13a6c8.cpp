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

// Function: entry_0013a6c8
// Address: 0x13a6c8 - 0x13a6cc
void entry_0013a6c8_0x13a6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a6c8_0x13a6c8");
#endif

    ctx->pc = 0x13a6c8u;

    // 0x13a6c8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13a6c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13a6ccu;
}
