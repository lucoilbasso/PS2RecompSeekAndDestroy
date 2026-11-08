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

// Function: entry_00108658
// Address: 0x108658 - 0x108690
void entry_00108658_0x108658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108658_0x108658");
#endif

    switch (ctx->pc) {
        case 0x108674u: goto label_108674;
        default: break;
    }

    ctx->pc = 0x108658u;

    // 0x108658: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x108658u;
    {
        const bool branch_taken_0x108658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108658) {
            ctx->pc = 0x10865Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108658u;
            // 0x10865c: 0x38820012  xori        $v0, $a0, 0x12 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)18);
            ctx->in_delay_slot = false;
            ctx->pc = 0x108690u;
            return;
        }
    }
    ctx->pc = 0x108660u;
    // 0x108660: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x108660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x108664: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x108664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108668: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10866c: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x10866Cu;
    SET_GPR_U32(ctx, 31, 0x108674u);
    ctx->pc = 0x108670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10866Cu;
    // 0x108670: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x10866Cu, 0x108674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108674u;
label_108674:
    // 0x108674: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x108674u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108678: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x108678u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10867c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x10867cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x108680: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x108680u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x108684: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x108684u;
    {
        const bool branch_taken_0x108684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108684u;
        // 0x108688: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108684) {
            ctx->pc = 0x1086C4u;
            return;
        }
    }
    ctx->pc = 0x10868Cu;
    // 0x10868c: 0x0  nop
    ctx->pc = 0x10868cu;
    // NOP
    ctx->pc = 0x108690u;
}
