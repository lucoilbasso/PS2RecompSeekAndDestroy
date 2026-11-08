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

// Function: EffectChafCalc__FP16ST_EffectSpecial
// Address: 0x12c390 - 0x12c430
void EffectChafCalc__FP16ST_EffectSpecial_0x12c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectChafCalc__FP16ST_EffectSpecial_0x12c390");
#endif

    switch (ctx->pc) {
        case 0x12c3d4u: goto label_12c3d4;
        default: break;
    }

    ctx->pc = 0x12c390u;

    // 0x12c390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c39c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x12c39cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12c3a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c3a4: 0xc7948114  lwc1        $f20, -0x7EEC($gp)
    ctx->pc = 0x12c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12c3a8: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x12c3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c3ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12c3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c3b0: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x12C3B0u;
    {
        const bool branch_taken_0x12c3b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3B0u;
        // 0x12c3b4: 0x260301b0  addiu       $v1, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3b0) {
            ctx->pc = 0x12C41Cu;
            goto label_12c41c;
        }
    }
    ctx->pc = 0x12C3B8u;
    // 0x12c3b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12c3bc: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x12C3BCu;
    {
        const bool branch_taken_0x12c3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c3bc) {
            ctx->pc = 0x12C3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C3BCu;
            // 0x12c3c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C420u;
            goto label_12c420;
        }
    }
    ctx->pc = 0x12C3C4u;
    // 0x12c3c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c3c8: 0x24041770  addiu       $a0, $zero, 0x1770
    ctx->pc = 0x12c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x12c3cc: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12C3CCu;
    SET_GPR_U32(ctx, 31, 0x12C3D4u);
    ctx->pc = 0x12C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C3CCu;
    // 0x12c3d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12C3CCu, 0x12C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3D4u;
label_12c3d4:
    // 0x12c3d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c3d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3d8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c3d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c3dc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c3dcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c3e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c3e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c3e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12c3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12c3e8: 0xc6020090  lwc1        $f2, 0x90($s0)
    ctx->pc = 0x12c3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12c3ec: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x12c3ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x12c3f0: 0xc7838118  lwc1        $f3, -0x7EE8($gp)
    ctx->pc = 0x12c3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12c3f4: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x12c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x12c3f8: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x12c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12c3fc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12c3fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x12c400: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12c400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x12c404: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x12c404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x12c408: 0xe6020090  swc1        $f2, 0x90($s0)
    ctx->pc = 0x12c408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x12c40c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x12c40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x12c410: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12c410u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12c414: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x12c414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x12c418: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12c418u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_12c41c:
    // 0x12c41c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12c420:
    // 0x12c420: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12c420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c424: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x12c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12c428: 0x3e00008  jr          $ra
    ctx->pc = 0x12C428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C428u;
        // 0x12c42c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C430u;
}
