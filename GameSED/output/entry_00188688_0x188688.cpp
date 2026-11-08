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

// Function: entry_00188688
// Address: 0x188688 - 0x1886b8
void entry_00188688_0x188688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188688_0x188688");
#endif

    ctx->pc = 0x188688u;

    // 0x188688: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x188688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x18868c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18868cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188690: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x188690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188694: 0x248301e0  addiu       $v1, $a0, 0x1E0
    ctx->pc = 0x188694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x188698: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x188698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x18869c: 0x79820000  lq          $v0, 0x0($t4)
    ctx->pc = 0x18869cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1886a0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1886a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1886a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1886a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1886a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1886ac: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1886acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886b0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x1886b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x1886b4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1886b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1886b8u;
}
