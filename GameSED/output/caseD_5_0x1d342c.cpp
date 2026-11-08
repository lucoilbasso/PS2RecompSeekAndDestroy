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

// Function: caseD_5
// Address: 0x1d342c - 0x1d344c
void caseD_5_0x1d342c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1d342c");
#endif

    ctx->pc = 0x1d342cu;

    // 0x1d342c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1d342cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1d3430: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x1d3430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1d3434: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d3434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3438: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x1d3438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d343c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1d343cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1d3440: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x1d3440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1d3444: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x1d3444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x1d3448: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x1d3448u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    ctx->pc = 0x1d344cu;
}
