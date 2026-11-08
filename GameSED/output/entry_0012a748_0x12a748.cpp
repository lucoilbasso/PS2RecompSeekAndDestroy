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

// Function: entry_0012a748
// Address: 0x12a748 - 0x12a814
void entry_0012a748_0x12a748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a748_0x12a748");
#endif

    switch (ctx->pc) {
        case 0x12a760u: goto label_12a760;
        case 0x12a7d4u: goto label_12a7d4;
        default: break;
    }

    ctx->pc = 0x12a748u;

    // 0x12a748: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12a74c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12a74cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a750: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12a754: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x12a754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x12a758: 0xc04844a  jal         func_121128
    ctx->pc = 0x12A758u;
    SET_GPR_U32(ctx, 31, 0x12A760u);
    ctx->pc = 0x12A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A758u;
    // 0x12a75c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12A758u, 0x12A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A760u;
label_12a760:
    // 0x12a760: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12a760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a764: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x12a764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12a768: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12a768u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a76c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12a76cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a770: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12a770u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a778: 0xe62001b0  swc1        $f0, 0x1B0($s1)
    ctx->pc = 0x12a778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 432), bits); }
    // 0x12a77c: 0xa62001b4  sh          $zero, 0x1B4($s1)
    ctx->pc = 0x12a77cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 436), (uint16_t)GPR_U32(ctx, 0));
    // 0x12a780: 0xa62001f6  sh          $zero, 0x1F6($s1)
    ctx->pc = 0x12a780u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 0));
    // 0x12a784: 0xae2001f0  sw          $zero, 0x1F0($s1)
    ctx->pc = 0x12a784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
    // 0x12a788: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x12a788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12a78c: 0xa62201f4  sh          $v0, 0x1F4($s1)
    ctx->pc = 0x12a78cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 500), (uint16_t)GPR_U32(ctx, 2));
    // 0x12a790: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x12a790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12a794: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12a794u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a798: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12a798u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a79c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12a79cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a7a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a7a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a7a4: 0xe62001c4  swc1        $f0, 0x1C4($s1)
    ctx->pc = 0x12a7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
    // 0x12a7a8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x12a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12a7ac: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12a7acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a7b0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12a7b0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a7b4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12a7b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a7b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a7bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a7c0: 0xe62001c8  swc1        $f0, 0x1C8($s1)
    ctx->pc = 0x12a7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 456), bits); }
    // 0x12a7c4: 0xa62401b6  sh          $a0, 0x1B6($s1)
    ctx->pc = 0x12a7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 438), (uint16_t)GPR_U32(ctx, 4));
    // 0x12a7c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12a7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12a7cc: 0xc04844a  jal         func_121128
    ctx->pc = 0x12A7CCu;
    SET_GPR_U32(ctx, 31, 0x12A7D4u);
    ctx->pc = 0x12A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A7CCu;
    // 0x12a7d0: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12A7CCu, 0x12A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7D4u;
label_12a7d4:
    // 0x12a7d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a7d8: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12A7D8u;
    {
        const bool branch_taken_0x12a7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a7d8) {
            ctx->pc = 0x12A7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A7D8u;
            // 0x12a7dc: 0x9642001c  lhu         $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A814u;
            return;
        }
    }
    ctx->pc = 0x12A7E0u;
    // 0x12a7e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12a7e4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12a7e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a7e8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12a7e8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a7ec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12a7ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a7f4: 0xe62001cc  swc1        $f0, 0x1CC($s1)
    ctx->pc = 0x12a7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
    // 0x12a7f8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12a7fc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12a7fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a800: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12a800u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a804: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12a804u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a80c: 0xe62001d0  swc1        $f0, 0x1D0($s1)
    ctx->pc = 0x12a80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 464), bits); }
    // 0x12a810: 0x9642001c  lhu         $v0, 0x1C($s2)
    ctx->pc = 0x12a810u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x12a814u;
}
