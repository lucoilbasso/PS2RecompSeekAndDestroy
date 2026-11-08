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

// Function: ApMotionShipForwardProc__FP11BMotionCtrlP11BMotionWorki
// Address: 0x139940 - 0x139a68
void ApMotionShipForwardProc__FP11BMotionCtrlP11BMotionWorki_0x139940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionShipForwardProc__FP11BMotionCtrlP11BMotionWorki_0x139940");
#endif

    switch (ctx->pc) {
        case 0x13997cu: goto label_13997c;
        case 0x1399c0u: goto label_1399c0;
        case 0x1399c8u: goto label_1399c8;
        case 0x139a08u: goto label_139a08;
        case 0x139a34u: goto label_139a34;
        default: break;
    }

    ctx->pc = 0x139940u;

    // 0x139940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x139940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x139944: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x139944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x139948: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x139948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13994c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13994cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139950: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x139950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x139954: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x139954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x139958: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x139958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x13995c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x13995cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x139960: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x139960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x139964: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x139964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x139968: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x139968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x13996c: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x13996cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x139970: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x139970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x139974: 0xc069236  jal         func_1A48D8
    ctx->pc = 0x139974u;
    SET_GPR_U32(ctx, 31, 0x13997Cu);
    ctx->pc = 0x139978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139974u;
    // 0x139978: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48D8u, 0x139974u, 0x13997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13997Cu;
label_13997c:
    // 0x13997c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13997cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139980: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x139980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x139984: 0x8e160014  lw          $s6, 0x14($s0)
    ctx->pc = 0x139984u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x139988: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x139988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13998c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13998cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139990: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x139990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x139994: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x139994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x139998: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x139998u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13999c: 0xc6540088  lwc1        $f20, 0x88($s2)
    ctx->pc = 0x13999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1399a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1399a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1399a4: 0x26130020  addiu       $s3, $s0, 0x20
    ctx->pc = 0x1399a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1399a8: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x1399a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1399ac: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1399acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1399b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1399B0u;
    {
        const bool branch_taken_0x1399b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1399B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399B0u;
        // 0x1399b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399b0) {
            ctx->pc = 0x1399C0u;
            goto label_1399c0;
        }
    }
    ctx->pc = 0x1399B8u;
    // 0x1399b8: 0xc061920  jal         func_186480
    ctx->pc = 0x1399B8u;
    SET_GPR_U32(ctx, 31, 0x1399C0u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1399B8u, 0x1399C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399C0u;
label_1399c0:
    // 0x1399c0: 0xc061422  jal         func_185088
    ctx->pc = 0x1399C0u;
    SET_GPR_U32(ctx, 31, 0x1399C8u);
    ctx->pc = 0x1399C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1399C0u;
    // 0x1399c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1399C0u, 0x1399C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399C8u;
label_1399c8:
    // 0x1399c8: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x1399c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1399cc: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1399ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1399d0: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x1399d0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x1399d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1399d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1399d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1399d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1399dc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1399dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1399e0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1399E0u;
    {
        const bool branch_taken_0x1399e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1399E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399E0u;
        // 0x1399e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399e0) {
            ctx->pc = 0x139A00u;
            goto label_139a00;
        }
    }
    ctx->pc = 0x1399E8u;
    // 0x1399e8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1399e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1399ec: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1399ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1399f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1399f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1399f4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1399f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1399f8: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1399f8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1399fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1399fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_139a00:
    // 0x139a00: 0xc04e4f2  jal         func_1393C8
    ctx->pc = 0x139A00u;
    SET_GPR_U32(ctx, 31, 0x139A08u);
    ctx->pc = 0x139A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139A00u;
    // 0x139a04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1393C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1393C8u, 0x139A00u, 0x139A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A08u;
label_139a08:
    // 0x139a08: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x139a08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139a0c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x139a0cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139a10: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x139a10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139a14: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x139a14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139a18: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x139a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x139a1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x139a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x139A24u;
    {
        const bool branch_taken_0x139a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A24u;
        // 0x139a28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a24) {
            ctx->pc = 0x139A38u;
            goto label_139a38;
        }
    }
    ctx->pc = 0x139A2Cu;
    // 0x139a2c: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x139A2Cu;
    SET_GPR_U32(ctx, 31, 0x139A34u);
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x139A2Cu, 0x139A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A34u;
label_139a34:
    // 0x139a34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_139a38:
    // 0x139a38: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x139a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139a3c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x139a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x139a40: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x139a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139a44: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x139a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139a48: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x139a48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139a4c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x139a4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139a50: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x139a50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139a54: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x139a54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139a58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x139a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139a5c: 0xc7b40068  lwc1        $f20, 0x68($sp)
    ctx->pc = 0x139a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x139a60: 0x3e00008  jr          $ra
    ctx->pc = 0x139A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139A60u;
        // 0x139a64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139A68u;
}
