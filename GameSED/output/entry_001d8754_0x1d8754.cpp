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

// Function: entry_001d8754
// Address: 0x1d8754 - 0x1d876c
void entry_001d8754_0x1d8754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8754_0x1d8754");
#endif

    ctx->pc = 0x1d8754u;

    // 0x1d8754: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d8754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d8758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d875c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d875cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8760: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1d8760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1d8764: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d8764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8768: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d8768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x1d876cu;
}
