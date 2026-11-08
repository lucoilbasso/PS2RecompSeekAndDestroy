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

// Function: ApMotionBZTraceProc__FP11BMotionCtrlP11BMotionWorki
// Address: 0x13a5c8 - 0x13a6a0
void ApMotionBZTraceProc__FP11BMotionCtrlP11BMotionWorki_0x13a5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionBZTraceProc__FP11BMotionCtrlP11BMotionWorki_0x13a5c8");
#endif

    switch (ctx->pc) {
        case 0x13a630u: goto label_13a630;
        case 0x13a648u: goto label_13a648;
        case 0x13a660u: goto label_13a660;
        case 0x13a684u: goto label_13a684;
        default: break;
    }

    ctx->pc = 0x13a5c8u;

    // 0x13a5c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a5cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13a5d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13a5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13a5d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13a5dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13a5e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13a5e4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x13a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13a5e8: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x13a5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a5ec: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x13a5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a5f0: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x13a5f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a5f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13a5f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13a5f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13a5f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13a5fc: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x13a5fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13a600: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x13a600u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13a604: 0x48312800  qmfc2.ni    $s1, $vf5
    ctx->pc = 0x13a604u;
    SET_GPR_VEC(ctx, 17, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13a608: 0x118800  sll         $s1, $s1, 0
    ctx->pc = 0x13a608u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 0));
    // 0x13a60c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x13a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13a610: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a614: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x13a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x13a618: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13A618u;
    {
        const bool branch_taken_0x13a618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A618u;
        // 0x13a61c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a618) {
            ctx->pc = 0x13A648u;
            goto label_13a648;
        }
    }
    ctx->pc = 0x13A620u;
    // 0x13a620: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x13a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13a624: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13a624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13a628: 0xc06a6ea  jal         func_1A9BA8
    ctx->pc = 0x13A628u;
    SET_GPR_U32(ctx, 31, 0x13A630u);
    ctx->pc = 0x13A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A628u;
    // 0x13a62c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9BA8u, 0x13A628u, 0x13A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A630u;
label_13a630:
    // 0x13a630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a634: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x13a634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x13a638: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A638u;
    {
        const bool branch_taken_0x13a638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A638u;
        // 0x13a63c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a638) {
            ctx->pc = 0x13A648u;
            goto label_13a648;
        }
    }
    ctx->pc = 0x13A640u;
    // 0x13a640: 0xc0618c2  jal         func_186308
    ctx->pc = 0x13A640u;
    SET_GPR_U32(ctx, 31, 0x13A648u);
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x13A640u, 0x13A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A648u;
label_13a648:
    // 0x13a648: 0x26030130  addiu       $v1, $s0, 0x130
    ctx->pc = 0x13a648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x13a64c: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x13a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x13a650: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13A650u;
    {
        const bool branch_taken_0x13a650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A650u;
        // 0x13a654: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a650) {
            ctx->pc = 0x13A684u;
            goto label_13a684;
        }
    }
    ctx->pc = 0x13A658u;
    // 0x13a658: 0xc06a6ea  jal         func_1A9BA8
    ctx->pc = 0x13A658u;
    SET_GPR_U32(ctx, 31, 0x13A660u);
    ctx->pc = 0x13A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A658u;
    // 0x13a65c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9BA8u, 0x13A658u, 0x13A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A660u;
label_13a660:
    // 0x13a660: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A660u;
    {
        const bool branch_taken_0x13a660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A660u;
        // 0x13a664: 0x26030220  addiu       $v1, $s0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a660) {
            ctx->pc = 0x13A684u;
            goto label_13a684;
        }
    }
    ctx->pc = 0x13A668u;
    // 0x13a668: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x13a668u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a66c: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x13a66cu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a670: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x13a670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13a674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13a678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a67c: 0xc0618da  jal         func_186368
    ctx->pc = 0x13A67Cu;
    SET_GPR_U32(ctx, 31, 0x13A684u);
    ctx->pc = 0x13A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A67Cu;
    // 0x13a680: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x13A67Cu, 0x13A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A684u;
label_13a684:
    // 0x13a684: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a688: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13a688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a68c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13a68cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a690: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13a690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a694: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13a694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a698: 0x3e00008  jr          $ra
    ctx->pc = 0x13A698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A698u;
        // 0x13a69c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A6A0u;
}
