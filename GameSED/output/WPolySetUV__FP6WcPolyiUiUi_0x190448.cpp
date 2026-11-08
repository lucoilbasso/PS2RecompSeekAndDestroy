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

// Function: WPolySetUV__FP6WcPolyiUiUi
// Address: 0x190448 - 0x1904cc
void WPolySetUV__FP6WcPolyiUiUi_0x190448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPolySetUV__FP6WcPolyiUiUi_0x190448");
#endif

    ctx->pc = 0x190448u;

    // 0x190448: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x190448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19044c: 0x633c0  sll         $a2, $a2, 15
    ctx->pc = 0x19044cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x190450: 0x95020158  lhu         $v0, 0x158($t0)
    ctx->pc = 0x190450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 344)));
    // 0x190454: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190458: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x190458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x19045c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x19045Cu;
    {
        const bool branch_taken_0x19045c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19045Cu;
        // 0x190460: 0x24c64000  addiu       $a2, $a2, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19045c) {
            ctx->pc = 0x1904C4u;
            goto label_1904c4;
        }
    }
    ctx->pc = 0x190464u;
    // 0x190464: 0x950301a0  lhu         $v1, 0x1A0($t0)
    ctx->pc = 0x190464u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 416)));
    // 0x190468: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x190468u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x19046c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x19046cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x190470: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x190470u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190474: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x190474u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19047c: 0x723c0  sll         $a0, $a3, 15
    ctx->pc = 0x19047cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
    // 0x190480: 0x950301a2  lhu         $v1, 0x1A2($t0)
    ctx->pc = 0x190480u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 418)));
    // 0x190484: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x190484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x190488: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x190488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19048c: 0x642007  srav        $a0, $a0, $v1
    ctx->pc = 0x19048cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x190490: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x190490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x190494: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x190494u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190498: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x190498u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19049c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19049cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1904a0: 0x9502015a  lhu         $v0, 0x15A($t0)
    ctx->pc = 0x1904a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 346)));
    // 0x1904a4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1904a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1904a8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1904a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1904ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1904ACu;
    {
        const bool branch_taken_0x1904ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1904B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904ACu;
        // 0x1904b0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904ac) {
            ctx->pc = 0x1904C4u;
            goto label_1904c4;
        }
    }
    ctx->pc = 0x1904B4u;
    // 0x1904b4: 0x8d0201d0  lw          $v0, 0x1D0($t0)
    ctx->pc = 0x1904b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 464)));
    // 0x1904b8: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x1904b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1904bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1904bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1904c0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1904c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_1904c4:
    // 0x1904c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1904C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1904C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904C4u;
        // 0x1904c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1904C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1904CCu;
}
