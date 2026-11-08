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

// Function: entry_001b0d7c
// Address: 0x1b0d7c - 0x1b0d88
void entry_001b0d7c_0x1b0d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0d7c_0x1b0d7c");
#endif

    ctx->pc = 0x1b0d7cu;

    // 0x1b0d7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b0d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b0d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d84: 0x0  nop
    ctx->pc = 0x1b0d84u;
    // NOP
    ctx->pc = 0x1b0d88u;
}
