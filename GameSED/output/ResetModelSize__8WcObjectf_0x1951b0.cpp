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

// Function: ResetModelSize__8WcObjectf
// Address: 0x1951b0 - 0x195224
void ResetModelSize__8WcObjectf_0x1951b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetModelSize__8WcObjectf_0x1951b0");
#endif

    switch (ctx->pc) {
        case 0x195218u: goto label_195218;
        default: break;
    }

    ctx->pc = 0x1951b0u;

label_1951b0:
    // 0x1951b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1951b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1951b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1951b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1951b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1951b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1951bc: 0xc4a00190  lwc1        $f0, 0x190($a1)
    ctx->pc = 0x1951bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1951c0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1951c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1951c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1951C4u;
    {
        const bool branch_taken_0x1951c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1951c4) {
            ctx->pc = 0x1951C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1951C4u;
            // 0x1951c8: 0xe4ac0190  swc1        $f12, 0x190($a1) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 400), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1951CCu;
            goto label_1951cc;
        }
    }
    ctx->pc = 0x1951CCu;
label_1951cc:
    // 0x1951cc: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x1951ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1951d0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1951D0u;
    {
        const bool branch_taken_0x1951d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951D0u;
        // 0x1951d4: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951d0) {
            ctx->pc = 0x195218u;
            goto label_195218;
        }
    }
    ctx->pc = 0x1951D8u;
    // 0x1951d8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1951d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1951dc: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1951DCu;
    {
        const bool branch_taken_0x1951dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1951E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951DCu;
        // 0x1951e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951dc) {
            ctx->pc = 0x19521Cu;
            goto label_19521c;
        }
    }
    ctx->pc = 0x1951E4u;
    // 0x1951e4: 0x24a300d0  addiu       $v1, $a1, 0xD0
    ctx->pc = 0x1951e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x1951e8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1951e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1951ec: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x1951ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1951f0: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1951f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1951f4: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1951f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1951f8: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1951f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1951fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1951fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x195200: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x195200u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x195204: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x195204u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x195208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19520c: 0xc4ac0190  lwc1        $f12, 0x190($a1)
    ctx->pc = 0x19520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x195210: 0xc06546c  jal         func_1951B0
    ctx->pc = 0x195210u;
    SET_GPR_U32(ctx, 31, 0x195218u);
    ctx->pc = 0x195214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195210u;
    // 0x195214: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1951B0u;
    goto label_1951b0;
    ctx->pc = 0x195218u;
label_195218:
    // 0x195218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19521c:
    // 0x19521c: 0x3e00008  jr          $ra
    ctx->pc = 0x19521Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19521Cu;
        // 0x195220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19521Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195224u;
}
