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

// Function: sGet1CtrlFVector__FP11BMotionCtrlP15BsSCDEntControlP9FVector32b
// Address: 0x1085c0 - 0x1086d4
void sGet1CtrlFVector__FP11BMotionCtrlP15BsSCDEntControlP9FVector32b_0x1085c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sGet1CtrlFVector__FP11BMotionCtrlP15BsSCDEntControlP9FVector32b_0x1085c0");
#endif

    switch (ctx->pc) {
        case 0x10864cu: goto label_10864c;
        case 0x108674u: goto label_108674;
        case 0x1086b0u: goto label_1086b0;
        default: break;
    }

    ctx->pc = 0x1085c0u;

    // 0x1085c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1085c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1085c4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1085c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1085c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1085c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1085ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1085d0: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1085D0u;
    {
        const bool branch_taken_0x1085d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1085D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085D0u;
        // 0x1085d4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085d0) {
            ctx->pc = 0x108628u;
            goto label_108628;
        }
    }
    ctx->pc = 0x1085D8u;
    // 0x1085d8: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x1085d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1085dc: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x1085dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
    // 0x1085e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1085E0u;
    {
        const bool branch_taken_0x1085e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1085E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085E0u;
        // 0x1085e4: 0x3c040020  lui         $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085e0) {
            ctx->pc = 0x108610u;
            goto label_108610;
        }
    }
    ctx->pc = 0x1085E8u;
    // 0x1085e8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1085e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1085ec: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x1085ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1085f0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1085f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1085f4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1085f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1085f8: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1085f8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1085fc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1085fcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x108600: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x108600u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x108604: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x108604u;
    {
        const bool branch_taken_0x108604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108604u;
        // 0x108608: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108604) {
            ctx->pc = 0x1086C4u;
            goto label_1086c4;
        }
    }
    ctx->pc = 0x10860Cu;
    // 0x10860c: 0x0  nop
    ctx->pc = 0x10860cu;
    // NOP
label_108610:
    // 0x108610: 0x8c83b830  lw          $v1, -0x47D0($a0)
    ctx->pc = 0x108610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948912)));
    // 0x108614: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x108614u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108618: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x108618u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x10861c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x10861Cu;
    {
        const bool branch_taken_0x10861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10861Cu;
        // 0x108620: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10861c) {
            ctx->pc = 0x1086C4u;
            goto label_1086c4;
        }
    }
    ctx->pc = 0x108624u;
    // 0x108624: 0x0  nop
    ctx->pc = 0x108624u;
    // NOP
label_108628:
    // 0x108628: 0x94840008  lhu         $a0, 0x8($a0)
    ctx->pc = 0x108628u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10862c: 0x38820010  xori        $v0, $a0, 0x10
    ctx->pc = 0x10862cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)16);
    // 0x108630: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x108630u;
    {
        const bool branch_taken_0x108630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108630) {
            ctx->pc = 0x108634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108630u;
            // 0x108634: 0x38820011  xori        $v0, $a0, 0x11 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)17);
            ctx->in_delay_slot = false;
            ctx->pc = 0x108658u;
            goto label_108658;
        }
    }
    ctx->pc = 0x108638u;
    // 0x108638: 0xfa200000  sqc2        $vf0, 0x0($s1)
    ctx->pc = 0x108638u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10863c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x10863cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108640: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108644: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x108644u;
    SET_GPR_U32(ctx, 31, 0x10864Cu);
    ctx->pc = 0x108648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108644u;
    // 0x108648: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x108644u, 0x10864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10864Cu;
label_10864c:
    // 0x10864c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x10864Cu;
    {
        const bool branch_taken_0x10864c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10864Cu;
        // 0x108650: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10864c) {
            ctx->pc = 0x1086C4u;
            goto label_1086c4;
        }
    }
    ctx->pc = 0x108654u;
    // 0x108654: 0x0  nop
    ctx->pc = 0x108654u;
    // NOP
label_108658:
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
            goto label_108690;
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
            goto label_1086c4;
        }
    }
    ctx->pc = 0x10868Cu;
    // 0x10868c: 0x0  nop
    ctx->pc = 0x10868cu;
    // NOP
label_108690:
    // 0x108690: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x108690u;
    {
        const bool branch_taken_0x108690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108690u;
        // 0x108694: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108690) {
            ctx->pc = 0x1086C4u;
            goto label_1086c4;
        }
    }
    ctx->pc = 0x108698u;
    // 0x108698: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x108698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10869c: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x10869cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x1086a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1086a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1086a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086a8: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x1086A8u;
    SET_GPR_U32(ctx, 31, 0x1086B0u);
    ctx->pc = 0x1086ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086A8u;
    // 0x1086ac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x1086A8u, 0x1086B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086B0u;
label_1086b0:
    // 0x1086b0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1086b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1086b4: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1086b4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1086b8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1086b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1086bc: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1086bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1086c0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1086c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1086c4:
    // 0x1086c4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1086c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1086c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1086c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1086cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1086CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1086D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086CCu;
        // 0x1086d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1086CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1086D4u;
}
