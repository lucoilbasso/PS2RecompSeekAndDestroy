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

// Function: entry_0013bb1c
// Address: 0x13bb1c - 0x13bb20
void entry_0013bb1c_0x13bb1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bb1c_0x13bb1c");
#endif

    ctx->pc = 0x13bb1cu;

    // 0x13bb1c: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x13bb1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13bb20u;
}
