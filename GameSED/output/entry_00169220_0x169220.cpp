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

// Function: entry_00169220
// Address: 0x169220 - 0x1692b0
void entry_00169220_0x169220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169220_0x169220");
#endif

    switch (ctx->pc) {
        case 0x169250u: goto label_169250;
        case 0x1692a0u: goto label_1692a0;
        default: break;
    }

    ctx->pc = 0x169220u;

    // 0x169220: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x169220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x169224: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x169224u;
    {
        const bool branch_taken_0x169224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169224) {
            ctx->pc = 0x169228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169224u;
            // 0x169228: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1693B8u;
            return;
        }
    }
    ctx->pc = 0x16922Cu;
    // 0x16922c: 0x10800084  beqz        $a0, . + 4 + (0x84 << 2)
    ctx->pc = 0x16922Cu;
    {
        const bool branch_taken_0x16922c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16922Cu;
        // 0x169230: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16922c) {
            ctx->pc = 0x169440u;
            return;
        }
    }
    ctx->pc = 0x169234u;
    // 0x169234: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x169234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x169238: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x169238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x16923c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x16923cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x169240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169244: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x169244u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169248: 0xc06164c  jal         func_185930
    ctx->pc = 0x169248u;
    SET_GPR_U32(ctx, 31, 0x169250u);
    ctx->pc = 0x16924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169248u;
    // 0x16924c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169248u, 0x169250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169250u;
label_169250:
    // 0x169250: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x169250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x169254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169258: 0x2484d350  addiu       $a0, $a0, -0x2CB0
    ctx->pc = 0x169258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955856));
    // 0x16925c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x16925cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x169260: 0xc7808424  lwc1        $f0, -0x7BDC($gp)
    ctx->pc = 0x169260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169264: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x169264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x20D350u));
    // 0x169268: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x169268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16926c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16926cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x169270: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x169270u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x169274: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x169274u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x169278: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x169278u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16927c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x16927cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169280: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x169280u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x169284: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x169284u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x169288: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x169288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16928c: 0xc78c8428  lwc1        $f12, -0x7BD8($gp)
    ctx->pc = 0x16928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169294: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x169294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x169298: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x169298u;
    SET_GPR_U32(ctx, 31, 0x1692A0u);
    ctx->pc = 0x16929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169298u;
    // 0x16929c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x169298u, 0x1692A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692A0u;
label_1692a0:
    // 0x1692a0: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x1692a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    // 0x1692a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1692a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1692a8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1692A8u;
    {
        const bool branch_taken_0x1692a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1692ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692A8u;
        // 0x1692ac: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692a8) {
            ctx->pc = 0x16943Cu;
            return;
        }
    }
    ctx->pc = 0x1692B0u;
}
