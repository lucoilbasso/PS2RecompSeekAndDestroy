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

// Function: entry_0016de78
// Address: 0x16de78 - 0x16df3c
void entry_0016de78_0x16de78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016de78_0x16de78");
#endif

    switch (ctx->pc) {
        case 0x16dee4u: goto label_16dee4;
        case 0x16df10u: goto label_16df10;
        default: break;
    }

    ctx->pc = 0x16de78u;

    // 0x16de78: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x16de78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x16de7c: 0xe64002e0  swc1        $f0, 0x2E0($s2)
    ctx->pc = 0x16de7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 736), bits); }
    // 0x16de80: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x16de80u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x16de84: 0xc65402f0  lwc1        $f20, 0x2F0($s2)
    ctx->pc = 0x16de84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16de88: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x16de88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16de8c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x16de8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x16de90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16de90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16de94: 0x244202e0  addiu       $v0, $v0, 0x2E0
    ctx->pc = 0x16de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x16de98: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x16de98u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x16de9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x16de9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x16dea0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16dea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16dea4: 0x8e840690  lw          $a0, 0x690($s4)
    ctx->pc = 0x16dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x16dea8: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x16dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x16deac: 0xe64002f0  swc1        $f0, 0x2F0($s2)
    ctx->pc = 0x16deacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
    // 0x16deb0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x16deb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16deb4: 0xe64002e0  swc1        $f0, 0x2E0($s2)
    ctx->pc = 0x16deb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 736), bits); }
    // 0x16deb8: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x16deb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x16debc: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x16debcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x16dec0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x16dec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dec4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x16dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16dec8: 0xc4b50004  lwc1        $f21, 0x4($a1)
    ctx->pc = 0x16dec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16decc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x16deccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x16ded0: 0x4615a542  mul.s       $f21, $f20, $f21
    ctx->pc = 0x16ded0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x16ded4: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x16ded4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x16ded8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16ded8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16dedc: 0xc0618bc  jal         func_1862F0
    ctx->pc = 0x16DEDCu;
    SET_GPR_U32(ctx, 31, 0x16DEE4u);
    ctx->pc = 0x16DEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DEDCu;
    // 0x16dee0: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1862F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1862F0u, 0x16DEDCu, 0x16DEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DEE4u;
label_16dee4:
    // 0x16dee4: 0x8e840690  lw          $a0, 0x690($s4)
    ctx->pc = 0x16dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x16dee8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16dee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16deec: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x16deecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16def0: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x16def0u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16def4: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x16def4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16def8: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x16def8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x16defc: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x16defcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16df00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16df00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16df04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16df08: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16DF08u;
    SET_GPR_U32(ctx, 31, 0x16DF10u);
    ctx->pc = 0x16DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF08u;
    // 0x16df0c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16DF08u, 0x16DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF10u;
label_16df10:
    // 0x16df10: 0x8e840690  lw          $a0, 0x690($s4)
    ctx->pc = 0x16df10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x16df14: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x16df14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16df18: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x16df18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16df1c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x16df1cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16df20: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x16df20u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16df24: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x16df24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x16df28: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x16df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16df2c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x16df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16df30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16df30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16df34: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16DF34u;
    SET_GPR_U32(ctx, 31, 0x16DF3Cu);
    ctx->pc = 0x16DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF34u;
    // 0x16df38: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16DF34u, 0x16DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF3Cu;
}
