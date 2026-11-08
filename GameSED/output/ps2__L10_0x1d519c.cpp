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

// Function: $L10
// Address: 0x1d519c - 0x1d51dc
void ps2__L10_0x1d519c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L10_0x1d519c");
#endif

    ctx->pc = 0x1d519cu;

label_1d519c:
    // 0x1d519c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x1d519cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d51a0: 0x704914c9  pxor        $v0, $v0, $t1
    ctx->pc = 0x1d51a0u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x1d51a4: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x1d51a4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x1d51a8: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x1d51a8u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1d51ac: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x1d51acu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x1d51b0: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x1d51b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1d51b4: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x1d51b4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x1d51b8: 0x70491ba9  pcpyud      $v1, $v0, $t1
    ctx->pc = 0x1d51b8u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x1d51bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d51bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d51c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D51C0u;
    {
        const bool branch_taken_0x1d51c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d51c0) {
            ctx->pc = 0x1D51C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D51C0u;
            // 0x1d51c4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D51DCu;
            return;
        }
    }
    ctx->pc = 0x1D51C8u;
    // 0x1d51c8: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1d51c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x1d51cc: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x1d51ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d51d0: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D51D0u;
    {
        const bool branch_taken_0x1d51d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D0u;
        // 0x1d51d4: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51d0) {
            ctx->pc = 0x1D519Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d519c;
        }
    }
    ctx->pc = 0x1D51D8u;
    // 0x1d51d8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1d51d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d51dcu;
}
