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

// Function: entry_0013f0f8
// Address: 0x13f0f8 - 0x13f11c
void entry_0013f0f8_0x13f0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f0f8_0x13f0f8");
#endif

    ctx->pc = 0x13f0f8u;

    // 0x13f0f8: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x13f0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x13f0fc: 0x266300d0  addiu       $v1, $s3, 0xD0
    ctx->pc = 0x13f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x13f100: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13f100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f104: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13f104u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x13f108: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x13f108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x13f10c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x13f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x13f110: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x13f110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13f114: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13f114u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13f118: 0x8e8300d4  lw          $v1, 0xD4($s4)
    ctx->pc = 0x13f118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    ctx->pc = 0x13f11cu;
}
