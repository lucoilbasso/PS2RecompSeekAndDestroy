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

// Function: SHitpolyCheckClipXYZ__FP13WHitpolyParamP9FVector32ff
// Address: 0x1829b8 - 0x182a50
void SHitpolyCheckClipXYZ__FP13WHitpolyParamP9FVector32ff_0x1829b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SHitpolyCheckClipXYZ__FP13WHitpolyParamP9FVector32ff_0x1829b8");
#endif

    ctx->pc = 0x1829b8u;

    // 0x1829b8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1829b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1829bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1829bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1829c0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1829c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1829c4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1829c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1829c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1829c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1829cc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1829ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1829d0: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1829D0u;
    {
        const bool branch_taken_0x1829d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1829D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1829D0u;
        // 0x1829d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829d0) {
            ctx->pc = 0x182A48u;
            goto label_182a48;
        }
    }
    ctx->pc = 0x1829D8u;
    // 0x1829d8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1829d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1829dc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1829dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1829e0: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1829e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1829e4: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x1829e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1829e8: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1829e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1829ec: 0x0  nop
    ctx->pc = 0x1829ecu;
    // NOP
    // 0x1829f0: 0x4b440844  vsubx.xz    $vf1, $vf1, $vf4x
    ctx->pc = 0x1829f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1829f4: 0x4b441080  vaddx.xz    $vf2, $vf2, $vf4x
    ctx->pc = 0x1829f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1829f8: 0x4a0002ff  vnop
    ctx->pc = 0x1829f8u;
    // NOP operation, no action needed for VU0
    // 0x1829fc: 0x4a0002ff  vnop
    ctx->pc = 0x1829fcu;
    // NOP operation, no action needed for VU0
    // 0x182a00: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x182a00u;
    ctx->vu0_status = static_cast<uint16_t>(GPR_U32(ctx, 0) & 0xFFFFu);
    // 0x182a04: 0x4b41196c  vsub.xz     $vf5, $vf3, $vf1
    ctx->pc = 0x182a04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x182a08: 0x4b4311ac  vsub.xz     $vf6, $vf2, $vf3
    ctx->pc = 0x182a08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x182a0c: 0x4a0002ff  vnop
    ctx->pc = 0x182a0cu;
    // NOP operation, no action needed for VU0
    // 0x182a10: 0x4a0002ff  vnop
    ctx->pc = 0x182a10u;
    // NOP operation, no action needed for VU0
    // 0x182a14: 0x4a0002ff  vnop
    ctx->pc = 0x182a14u;
    // NOP operation, no action needed for VU0
    // 0x182a18: 0x4a0002ff  vnop
    ctx->pc = 0x182a18u;
    // NOP operation, no action needed for VU0
    // 0x182a1c: 0x4a0002ff  vnop
    ctx->pc = 0x182a1cu;
    // NOP operation, no action needed for VU0
    // 0x182a20: 0x48438000  cfc2.ni     $v1, $vi16
    ctx->pc = 0x182a20u;
    SET_GPR_U32(ctx, 3, ctx->vu0_status);
    // 0x182a24: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x182a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x182a28: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x182A28u;
    {
        const bool branch_taken_0x182a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A28u;
        // 0x182a2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a28) {
            ctx->pc = 0x182A48u;
            goto label_182a48;
        }
    }
    ctx->pc = 0x182A30u;
    // 0x182a30: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x182a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182a34: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x182a34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x182a38: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x182a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182a3c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x182A3Cu;
    {
        const bool branch_taken_0x182a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A3Cu;
        // 0x182a40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a3c) {
            ctx->pc = 0x182A48u;
            goto label_182a48;
        }
    }
    ctx->pc = 0x182A44u;
    // 0x182a44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182a48:
    // 0x182a48: 0x3e00008  jr          $ra
    ctx->pc = 0x182A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182A50u;
}
