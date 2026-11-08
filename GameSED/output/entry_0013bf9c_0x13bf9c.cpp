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

// Function: entry_0013bf9c
// Address: 0x13bf9c - 0x13bfa4
void entry_0013bf9c_0x13bf9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bf9c_0x13bf9c");
#endif

    ctx->pc = 0x13bf9cu;

    // 0x13bf9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13bf9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfa0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13bfa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13bfa4u;
}
