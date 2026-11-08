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

// Function: entry_0010a0d8
// Address: 0x10a0d8 - 0x10a1cc
void entry_0010a0d8_0x10a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a0d8_0x10a0d8");
#endif

    switch (ctx->pc) {
        case 0x10a0e8u: goto label_10a0e8;
        case 0x10a0fcu: goto label_10a0fc;
        default: break;
    }

    ctx->pc = 0x10a0d8u;

    // 0x10a0d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a0dc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10a0e0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10A0E0u;
    SET_GPR_U32(ctx, 31, 0x10A0E8u);
    ctx->pc = 0x10A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0E0u;
    // 0x10a0e4: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10A0E0u, 0x10A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0E8u;
label_10a0e8:
    // 0x10a0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10a0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10a0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a0f4: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x10A0F4u;
    SET_GPR_U32(ctx, 31, 0x10A0FCu);
    ctx->pc = 0x10A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0F4u;
    // 0x10a0f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x10A0F4u, 0x10A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0FCu;
label_10a0fc:
    // 0x10a0fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a100: 0x26260150  addiu       $a2, $s1, 0x150
    ctx->pc = 0x10a100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x10a104: 0x96220204  lhu         $v0, 0x204($s1)
    ctx->pc = 0x10a104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x10a108: 0x96240206  lhu         $a0, 0x206($s1)
    ctx->pc = 0x10a108u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 518)));
    // 0x10a10c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10a110: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x10a110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10a114: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x10a114u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x10a118: 0x862a01a6  lh          $t2, 0x1A6($s1)
    ctx->pc = 0x10a118u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 422)));
    // 0x10a11c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x10a11cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x10a120: 0x862801a4  lh          $t0, 0x1A4($s1)
    ctx->pc = 0x10a120u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x10a124: 0x94c90008  lhu         $t1, 0x8($a2)
    ctx->pc = 0x10a124u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x10a128: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x10a128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x10a12c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x10a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x10a130: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x10a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x10a134: 0xa4c20050  sh          $v0, 0x50($a2)
    ctx->pc = 0x10a134u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x10a138: 0x1231807  srav        $v1, $v1, $t1
    ctx->pc = 0x10a138u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 9) & 0x1F));
    // 0x10a13c: 0xa4c40052  sh          $a0, 0x52($a2)
    ctx->pc = 0x10a13cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 82), (uint16_t)GPR_U32(ctx, 4));
    // 0x10a140: 0xa4c80054  sh          $t0, 0x54($a2)
    ctx->pc = 0x10a140u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 8));
    // 0x10a144: 0xa4ca0056  sh          $t2, 0x56($a2)
    ctx->pc = 0x10a144u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 10));
    // 0x10a148: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10a148u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10a14c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10a14cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a150: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a150u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a158: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x10a158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x10a15c: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x10a15cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x10a160: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x10a160u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x10a164: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x10a164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
    // 0x10a168: 0x41bc0  sll         $v1, $a0, 15
    ctx->pc = 0x10a168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x10a16c: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x10a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x10a170: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x10a170u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x10a174: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10a174u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10a178: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10a178u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a17c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a17cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a184: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x10a184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10a188: 0xe4c00064  swc1        $f0, 0x64($a2)
    ctx->pc = 0x10a188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
    // 0x10a18c: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x10a18cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x10a190: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x10a190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
    // 0x10a194: 0x1252807  srav        $a1, $a1, $t1
    ctx->pc = 0x10a194u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 9) & 0x1F));
    // 0x10a198: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x10a198u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x10a19c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10a19cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a1a0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a1a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a1a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a1a8: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x10a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x10a1ac: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x10a1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
    // 0x10a1b0: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x10a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x10a1b4: 0x2484c000  addiu       $a0, $a0, -0x4000
    ctx->pc = 0x10a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
    // 0x10a1b8: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x10a1b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x10a1bc: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x10a1bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x10a1c0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10a1c0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10a1c4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10a1c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10a1c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10a1c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x10a1ccu;
}
