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

// Function: entry_00125ff8
// Address: 0x125ff8 - 0x12601c
void entry_00125ff8_0x125ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125ff8_0x125ff8");
#endif

    ctx->pc = 0x125ff8u;

    // 0x125ff8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x125ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ffc: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x125ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x126000: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x126000u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x126004: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x126004u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x126008: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x126008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12600c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x12600cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x126010: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x126010u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x126014: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x126014u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x126018: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x126018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->pc = 0x12601cu;
}
