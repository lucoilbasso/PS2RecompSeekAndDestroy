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

// Function: ApMotionPartsForwardProc__FP11BMotionCtrlP11BMotionWorki
// Address: 0x139b10 - 0x139c10
void ApMotionPartsForwardProc__FP11BMotionCtrlP11BMotionWorki_0x139b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionPartsForwardProc__FP11BMotionCtrlP11BMotionWorki_0x139b10");
#endif

    switch (ctx->pc) {
        case 0x139b48u: goto label_139b48;
        case 0x139b7cu: goto label_139b7c;
        case 0x139b84u: goto label_139b84;
        case 0x139bb4u: goto label_139bb4;
        case 0x139be0u: goto label_139be0;
        default: break;
    }

    ctx->pc = 0x139b10u;

    // 0x139b10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x139b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x139b14: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x139b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x139b18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x139b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x139b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b20: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x139b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x139b24: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x139b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x139b28: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x139b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x139b2c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x139b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x139b30: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x139b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x139b34: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x139b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x139b38: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x139b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x139b3c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x139b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x139b40: 0xc069236  jal         func_1A48D8
    ctx->pc = 0x139B40u;
    SET_GPR_U32(ctx, 31, 0x139B48u);
    ctx->pc = 0x139B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B40u;
    // 0x139b44: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48D8u, 0x139B40u, 0x139B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B48u;
label_139b48:
    // 0x139b48: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x139b48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x139b4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x139b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b50: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x139b50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x139b54: 0x8e150010  lw          $s5, 0x10($s0)
    ctx->pc = 0x139b54u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x139b58: 0x26340020  addiu       $s4, $s1, 0x20
    ctx->pc = 0x139b58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x139b5c: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x139b5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b60: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x139b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x139b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b68: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x139b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x139b6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139B6Cu;
    {
        const bool branch_taken_0x139b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139B6Cu;
        // 0x139b70: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b6c) {
            ctx->pc = 0x139B7Cu;
            goto label_139b7c;
        }
    }
    ctx->pc = 0x139B74u;
    // 0x139b74: 0xc061920  jal         func_186480
    ctx->pc = 0x139B74u;
    SET_GPR_U32(ctx, 31, 0x139B7Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x139B74u, 0x139B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B7Cu;
label_139b7c:
    // 0x139b7c: 0xc061422  jal         func_185088
    ctx->pc = 0x139B7Cu;
    SET_GPR_U32(ctx, 31, 0x139B84u);
    ctx->pc = 0x139B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139B7Cu;
    // 0x139b80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x139B7Cu, 0x139B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B84u;
label_139b84:
    // 0x139b84: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x139b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x139b88: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x139b88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x139b8c: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x139b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x139b90: 0xc6a00088  lwc1        $f0, 0x88($s5)
    ctx->pc = 0x139b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139b94: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x139b94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x139b98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x139b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x139b9c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x139b9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x139ba0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x139ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139ba4: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x139ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x139ba8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x139ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139bac: 0xc04e4f2  jal         func_1393C8
    ctx->pc = 0x139BACu;
    SET_GPR_U32(ctx, 31, 0x139BB4u);
    ctx->pc = 0x139BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139BACu;
    // 0x139bb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1393C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1393C8u, 0x139BACu, 0x139BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BB4u;
label_139bb4:
    // 0x139bb4: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x139bb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x139bb8: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x139bb8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139bbc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x139bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139bc0: 0xfa420000  sqc2        $vf2, 0x0($s2)
    ctx->pc = 0x139bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139bc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x139bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x139bc8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x139bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139bcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139bd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x139BD0u;
    {
        const bool branch_taken_0x139bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139BD0u;
        // 0x139bd4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139bd0) {
            ctx->pc = 0x139BE4u;
            goto label_139be4;
        }
    }
    ctx->pc = 0x139BD8u;
    // 0x139bd8: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x139BD8u;
    SET_GPR_U32(ctx, 31, 0x139BE0u);
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x139BD8u, 0x139BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BE0u;
label_139be0:
    // 0x139be0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139be4:
    // 0x139be4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x139be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139be8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x139be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139bec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x139becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139bf0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x139bf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139bf4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x139bf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139bf8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x139bf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139bfc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x139bfcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139c00: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x139c00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139c04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x139c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139c08: 0x3e00008  jr          $ra
    ctx->pc = 0x139C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C08u;
        // 0x139c0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139C10u;
}
