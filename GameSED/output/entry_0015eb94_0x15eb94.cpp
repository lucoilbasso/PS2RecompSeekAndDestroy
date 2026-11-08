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

// Function: entry_0015eb94
// Address: 0x15eb94 - 0x15eba8
void entry_0015eb94_0x15eb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eb94_0x15eb94");
#endif

    ctx->pc = 0x15eb94u;

    // 0x15eb94: 0x1812  mflo        $v1
    ctx->pc = 0x15eb94u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x15eb98: 0x70002012  mflo1       $a0
    ctx->pc = 0x15eb98u;
    SET_GPR_U64(ctx, 4, ctx->lo1);
    // 0x15eb9c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x15eb9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eba0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15eba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eba4: 0x8e220204  lw          $v0, 0x204($s1)
    ctx->pc = 0x15eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    ctx->pc = 0x15eba8u;
}
