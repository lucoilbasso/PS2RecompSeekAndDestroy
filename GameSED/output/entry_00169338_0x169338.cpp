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

// Function: entry_00169338
// Address: 0x169338 - 0x1693b0
void entry_00169338_0x169338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169338_0x169338");
#endif

    switch (ctx->pc) {
        case 0x169358u: goto label_169358;
        case 0x1693a8u: goto label_1693a8;
        default: break;
    }

    ctx->pc = 0x169338u;

    // 0x169338: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x169338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16933c: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x16933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x169340: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x169340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x169344: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x169344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x169348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16934c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16934cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169350: 0xc06164c  jal         func_185930
    ctx->pc = 0x169350u;
    SET_GPR_U32(ctx, 31, 0x169358u);
    ctx->pc = 0x169354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169350u;
    // 0x169354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169350u, 0x169358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169358u;
label_169358:
    // 0x169358: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x169358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x16935c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16935cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169360: 0x2484d360  addiu       $a0, $a0, -0x2CA0
    ctx->pc = 0x169360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955872));
    // 0x169364: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x169364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x169368: 0xc7808438  lwc1        $f0, -0x7BC8($gp)
    ctx->pc = 0x169368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16936c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16936cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x20D360u));
    // 0x169370: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x169370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x169374: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x169374u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x169378: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x169378u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16937c: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x16937cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x169380: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x169380u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169384: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x169384u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169388: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x169388u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16938c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x16938cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x169390: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x169390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x169394: 0xc78c843c  lwc1        $f12, -0x7BC4($gp)
    ctx->pc = 0x169394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16939c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16939cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1693a0: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1693A0u;
    SET_GPR_U32(ctx, 31, 0x1693A8u);
    ctx->pc = 0x1693A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1693A0u;
    // 0x1693a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1693A0u, 0x1693A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693A8u;
label_1693a8:
    // 0x1693a8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1693A8u;
    {
        const bool branch_taken_0x1693a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693A8u;
        // 0x1693ac: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693a8) {
            ctx->pc = 0x169434u;
            return;
        }
    }
    ctx->pc = 0x1693B0u;
}
