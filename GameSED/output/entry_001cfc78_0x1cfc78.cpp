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

// Function: entry_001cfc78
// Address: 0x1cfc78 - 0x1cfc88
void entry_001cfc78_0x1cfc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfc78_0x1cfc78");
#endif

    ctx->pc = 0x1cfc78u;

    // 0x1cfc78: 0x244de1b8  addiu       $t5, $v0, -0x1E48
    ctx->pc = 0x1cfc78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959544));
    // 0x1cfc7c: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1cfc7cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc80: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x1cfc80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc84: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x1cfc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    ctx->pc = 0x1cfc88u;
}
