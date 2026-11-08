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

// Function: entry_001a2f90
// Address: 0x1a2f90 - 0x1a2f9c
void entry_001a2f90_0x1a2f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2f90_0x1a2f90");
#endif

    ctx->pc = 0x1a2f90u;

    // 0x1a2f90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a2f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2f98: 0x24462d88  addiu       $a2, $v0, 0x2D88
    ctx->pc = 0x1a2f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11656));
    ctx->pc = 0x1a2f9cu;
}
