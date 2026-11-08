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

// Function: entry_0017186c
// Address: 0x17186c - 0x171878
void entry_0017186c_0x17186c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017186c_0x17186c");
#endif

    ctx->pc = 0x17186cu;

    // 0x17186c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17186cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171870: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x171870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x171874: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x171874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x171878u;
}
