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

// Function: entry_0017e09c
// Address: 0x17e09c - 0x17e0a0
void entry_0017e09c_0x17e09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e09c_0x17e09c");
#endif

    ctx->pc = 0x17e09cu;

    // 0x17e09c: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x17e09cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17e0a0u;
}
