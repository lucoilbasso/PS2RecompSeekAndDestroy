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

// Function: entry_001252b8
// Address: 0x1252b8 - 0x1253dc
void entry_001252b8_0x1252b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001252b8_0x1252b8");
#endif

    switch (ctx->pc) {
        case 0x1252c4u: goto label_1252c4;
        case 0x1252d8u: goto label_1252d8;
        case 0x1252e8u: goto label_1252e8;
        case 0x1252fcu: goto label_1252fc;
        case 0x125314u: goto label_125314;
        case 0x125324u: goto label_125324;
        default: break;
    }

    ctx->pc = 0x1252b8u;

    // 0x1252b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1252b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252bc: 0xc06ef40  jal         func_1BBD00
    ctx->pc = 0x1252BCu;
    SET_GPR_U32(ctx, 31, 0x1252C4u);
    ctx->pc = 0x1252C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252BCu;
    // 0x1252c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD00u, 0x1252BCu, 0x1252C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252C4u;
label_1252c4:
    // 0x1252c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1252c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1252c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1252cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1252ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252d0: 0xc06efe6  jal         func_1BBF98
    ctx->pc = 0x1252D0u;
    SET_GPR_U32(ctx, 31, 0x1252D8u);
    ctx->pc = 0x1252D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252D0u;
    // 0x1252d4: 0xe7b500b4  swc1        $f21, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF98u, 0x1252D0u, 0x1252D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252D8u;
label_1252d8:
    // 0x1252d8: 0x26a50120  addiu       $a1, $s5, 0x120
    ctx->pc = 0x1252d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
    // 0x1252dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1252dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252e0: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x1252E0u;
    SET_GPR_U32(ctx, 31, 0x1252E8u);
    ctx->pc = 0x1252E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252E0u;
    // 0x1252e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x1252E0u, 0x1252E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252E8u;
label_1252e8:
    // 0x1252e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1252e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1252ec: 0x2445eb70  addiu       $a1, $v0, -0x1490
    ctx->pc = 0x1252ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x1252f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1252f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252f4: 0xc06ee82  jal         func_1BBA08
    ctx->pc = 0x1252F4u;
    SET_GPR_U32(ctx, 31, 0x1252FCu);
    ctx->pc = 0x1252F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1252F4u;
    // 0x1252f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA08u, 0x1252F4u, 0x1252FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1252FCu;
label_1252fc:
    // 0x1252fc: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x1252fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
    // 0x125300: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x125300u;
    {
        const bool branch_taken_0x125300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125300u;
        // 0x125304: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125300) {
            ctx->pc = 0x125498u;
            return;
        }
    }
    ctx->pc = 0x125308u;
    // 0x125308: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12530c: 0xc06ee76  jal         func_1BB9D8
    ctx->pc = 0x12530Cu;
    SET_GPR_U32(ctx, 31, 0x125314u);
    ctx->pc = 0x125310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12530Cu;
    // 0x125310: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x12530Cu, 0x125314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125314u;
label_125314:
    // 0x125314: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x125314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x125318: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12531c: 0xc06ee76  jal         func_1BB9D8
    ctx->pc = 0x12531Cu;
    SET_GPR_U32(ctx, 31, 0x125324u);
    ctx->pc = 0x125320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12531Cu;
    // 0x125320: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9D8u, 0x12531Cu, 0x125324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125324u;
label_125324:
    // 0x125324: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x125324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125328: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x125328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12532c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x12532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125330: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x125330u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x125334: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x125334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125338: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x125338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12533c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x12533cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125340: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x125340u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x125344: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x125344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x125348: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x125348u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x12534c: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x12534cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x125350: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x125350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x125354: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x125354u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125358: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x125358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12535c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x12535cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x125360: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x125360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x125364: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x125364u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x125368: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x125368u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12536c: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x12536cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x125370: 0x4a0003bf  vwaitq
    ctx->pc = 0x125370u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x125374: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x125374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x125378: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x125378u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12537c: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x12537cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x125380: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x125380u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125384: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x125384u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x125388: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x125388u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x12538c: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x12538cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x125390: 0xfa860000  sqc2        $vf6, 0x0($s4)
    ctx->pc = 0x125390u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x125394: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x125394u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x125398: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x125398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12539c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x12539cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1253a0: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1253a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1253a4: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x1253a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1253a8: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1253a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1253ac: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x1253acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1253b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1253b0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1253b4: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1253b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1253b8: 0xfa860000  sqc2        $vf6, 0x0($s4)
    ctx->pc = 0x1253b8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1253bc: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1253bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1253c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1253c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1253c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1253c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1253c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1253C8u;
    {
        const bool branch_taken_0x1253c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1253CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253C8u;
        // 0x1253cc: 0xc7a000f8  lwc1        $f0, 0xF8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253c8) {
            ctx->pc = 0x1253DCu;
            return;
        }
    }
    ctx->pc = 0x1253D0u;
    // 0x1253d0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x1253d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x1253d4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1253d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1253d8: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1253d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1253dcu;
}
