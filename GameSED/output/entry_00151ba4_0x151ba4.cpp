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

// Function: entry_00151ba4
// Address: 0x151ba4 - 0x151cb0
void entry_00151ba4_0x151ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151ba4_0x151ba4");
#endif

    switch (ctx->pc) {
        case 0x151c14u: goto label_151c14;
        case 0x151c3cu: goto label_151c3c;
        case 0x151c60u: goto label_151c60;
        case 0x151cacu: goto label_151cac;
        default: break;
    }

    ctx->pc = 0x151ba4u;

    // 0x151ba4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x151ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151ba8: 0xc6420644  lwc1        $f2, 0x644($s2)
    ctx->pc = 0x151ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151bac: 0xc7808298  lwc1        $f0, -0x7D68($gp)
    ctx->pc = 0x151bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151bb0: 0x460010a9  min.s       $f2, $f2, $f0
    ctx->pc = 0x151bb0u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
    // 0x151bb4: 0xe6420644  swc1        $f2, 0x644($s2)
    ctx->pc = 0x151bb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1604), bits); }
    // 0x151bb8: 0xc780829c  lwc1        $f0, -0x7D64($gp)
    ctx->pc = 0x151bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151bbc: 0x460010a8  max.s       $f2, $f2, $f0
    ctx->pc = 0x151bbcu;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[0]);
    // 0x151bc0: 0xe6420644  swc1        $f2, 0x644($s2)
    ctx->pc = 0x151bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1604), bits); }
    // 0x151bc4: 0xc6400640  lwc1        $f0, 0x640($s2)
    ctx->pc = 0x151bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151bc8: 0xc78182a0  lwc1        $f1, -0x7D60($gp)
    ctx->pc = 0x151bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151bcc: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x151bccu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x151bd0: 0xe6400640  swc1        $f0, 0x640($s2)
    ctx->pc = 0x151bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1600), bits); }
    // 0x151bd4: 0xc78182a4  lwc1        $f1, -0x7D5C($gp)
    ctx->pc = 0x151bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151bd8: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x151bd8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x151bdc: 0xe6400640  swc1        $f0, 0x640($s2)
    ctx->pc = 0x151bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1600), bits); }
    // 0x151be0: 0xc6410648  lwc1        $f1, 0x648($s2)
    ctx->pc = 0x151be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151be4: 0xc78082a8  lwc1        $f0, -0x7D58($gp)
    ctx->pc = 0x151be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151be8: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x151be8u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x151bec: 0xe6410648  swc1        $f1, 0x648($s2)
    ctx->pc = 0x151becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1608), bits); }
    // 0x151bf0: 0xc78082ac  lwc1        $f0, -0x7D54($gp)
    ctx->pc = 0x151bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151bf4: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x151bf4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x151bf8: 0xe6410648  swc1        $f1, 0x648($s2)
    ctx->pc = 0x151bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1608), bits); }
    // 0x151bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151c00: 0x8e420690  lw          $v0, 0x690($s2)
    ctx->pc = 0x151c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x151c04: 0xc4401a34  lwc1        $f0, 0x1A34($v0)
    ctx->pc = 0x151c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151c08: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x151c08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x151c0c: 0xc0618bc  jal         func_1862F0
    ctx->pc = 0x151C0Cu;
    SET_GPR_U32(ctx, 31, 0x151C14u);
    ctx->pc = 0x151C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C0Cu;
    // 0x151c10: 0xe62200d4  swc1        $f2, 0xD4($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1862F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1862F0u, 0x151C0Cu, 0x151C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C14u;
label_151c14:
    // 0x151c14: 0xc6400640  lwc1        $f0, 0x640($s2)
    ctx->pc = 0x151c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151c18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x151c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151c1c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x151c1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x151c20: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x151c20u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x151c24: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x151c24u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x151c28: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x151c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x151c2c: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x151c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x151c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151c34: 0xc0618d4  jal         func_186350
    ctx->pc = 0x151C34u;
    SET_GPR_U32(ctx, 31, 0x151C3Cu);
    ctx->pc = 0x151C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C34u;
    // 0x151c38: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x151C34u, 0x151C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C3Cu;
label_151c3c:
    // 0x151c3c: 0xc6400648  lwc1        $f0, 0x648($s2)
    ctx->pc = 0x151c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151c40: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x151c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151c44: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x151c44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x151c48: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x151c48u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x151c4c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x151c4cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x151c50: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x151c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x151c54: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x151c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x151c58: 0xc0618d4  jal         func_186350
    ctx->pc = 0x151C58u;
    SET_GPR_U32(ctx, 31, 0x151C60u);
    ctx->pc = 0x151C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151C58u;
    // 0x151c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x151C58u, 0x151C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C60u;
label_151c60:
    // 0x151c60: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x151c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x151c64: 0x24849cc0  addiu       $a0, $a0, -0x6340
    ctx->pc = 0x151c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941888));
    // 0x151c68: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x151c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x151c6c: 0x26430640  addiu       $v1, $s2, 0x640
    ctx->pc = 0x151c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1600));
    // 0x151c70: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x151c70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151c74: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x151c74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x209CC0u));
    // 0x151c78: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x151c78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151c7c: 0xf8a40000  sqc2        $vf4, 0x0($a1)
    ctx->pc = 0x151c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x151c80: 0x26420650  addiu       $v0, $s2, 0x650
    ctx->pc = 0x151c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1616));
    // 0x151c84: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x151c84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151c88: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x151c88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151c8c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151c8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151c90: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x151c90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151c94: 0x8e430180  lw          $v1, 0x180($s2)
    ctx->pc = 0x151c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x151c98: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x151c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x151c9c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x151C9Cu;
    {
        const bool branch_taken_0x151c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151c9c) {
            ctx->pc = 0x151CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151C9Cu;
            // 0x151ca0: 0x8e420264  lw          $v0, 0x264($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151CB0u;
            return;
        }
    }
    ctx->pc = 0x151CA4u;
    // 0x151ca4: 0xc058988  jal         func_162620
    ctx->pc = 0x151CA4u;
    SET_GPR_U32(ctx, 31, 0x151CACu);
    ctx->pc = 0x151CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151CA4u;
    // 0x151ca8: 0x8e440690  lw          $a0, 0x690($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162620u, 0x151CA4u, 0x151CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CACu;
label_151cac:
    // 0x151cac: 0x8e420264  lw          $v0, 0x264($s2)
    ctx->pc = 0x151cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
    ctx->pc = 0x151cb0u;
}
