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

// Function: entry_0011e428
// Address: 0x11e428 - 0x11e4d0
void entry_0011e428_0x11e428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e428_0x11e428");
#endif

    switch (ctx->pc) {
        case 0x11e46cu: goto label_11e46c;
        case 0x11e494u: goto label_11e494;
        default: break;
    }

    ctx->pc = 0x11e428u;

    // 0x11e428: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11e428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e42c: 0x52000028  beql        $s0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x11E42Cu;
    {
        const bool branch_taken_0x11e42c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e42c) {
            ctx->pc = 0x11E430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E42Cu;
            // 0x11e430: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E4D0u;
            return;
        }
    }
    ctx->pc = 0x11E434u;
    // 0x11e434: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11e434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11e438: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x11e438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11e43c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x11e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x11e440: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x11e440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11e444: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x11e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11e448: 0xa623001c  sh          $v1, 0x1C($s1)
    ctx->pc = 0x11e448u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x11e44c: 0xae240020  sw          $a0, 0x20($s1)
    ctx->pc = 0x11e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
    // 0x11e450: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x11e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x11e454: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x11e454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x11e458: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x11e458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e45c: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x11e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x11e460: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x11e460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11e464: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11E464u;
    SET_GPR_U32(ctx, 31, 0x11E46Cu);
    ctx->pc = 0x11E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E464u;
    // 0x11e468: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11E464u, 0x11E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E46Cu;
label_11e46c:
    // 0x11e46c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x11e46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11e470: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x11e470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11e474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11e474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e478: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11e478u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e47c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11e47cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11e480: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11e480u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11e484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11e484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e488: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x11e488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x11e48c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11E48Cu;
    SET_GPR_U32(ctx, 31, 0x11E494u);
    ctx->pc = 0x11E490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E48Cu;
    // 0x11e490: 0xe6200050  swc1        $f0, 0x50($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11E48Cu, 0x11E494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E494u;
label_11e494:
    // 0x11e494: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x11e494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x11e498: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x11e498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11e49c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11e4a0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11e4a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e4a4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11e4a4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11e4a8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11e4a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11e4ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11e4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e4b0: 0x9224004b  lbu         $a0, 0x4B($s1)
    ctx->pc = 0x11e4b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 75)));
    // 0x11e4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e4b8: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x11e4b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x11e4bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x11e4bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e4c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11e4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11e4c4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x11e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x11e4c8: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x11E4C8u;
    {
        const bool branch_taken_0x11e4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E4C8u;
        // 0x11e4cc: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4c8) {
            ctx->pc = 0x11E850u;
            return;
        }
    }
    ctx->pc = 0x11E4D0u;
}
