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

// Function: entry_001279f8
// Address: 0x1279f8 - 0x127abc
void entry_001279f8_0x1279f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001279f8_0x1279f8");
#endif

    switch (ctx->pc) {
        case 0x127a08u: goto label_127a08;
        case 0x127a80u: goto label_127a80;
        default: break;
    }

    ctx->pc = 0x1279f8u;

    // 0x1279f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1279f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1279fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1279fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x127a00: 0xc04844a  jal         func_121128
    ctx->pc = 0x127A00u;
    SET_GPR_U32(ctx, 31, 0x127A08u);
    ctx->pc = 0x127A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A00u;
    // 0x127a04: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x127A00u, 0x127A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A08u;
label_127a08:
    // 0x127a08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x127a08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a0c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x127a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x127a10: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x127a10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x127a14: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x127a14u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x127a18: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x127a18u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x127a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127a20: 0xe62001b0  swc1        $f0, 0x1B0($s1)
    ctx->pc = 0x127a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 432), bits); }
    // 0x127a24: 0xa62001b4  sh          $zero, 0x1B4($s1)
    ctx->pc = 0x127a24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 436), (uint16_t)GPR_U32(ctx, 0));
    // 0x127a28: 0xa62001c0  sh          $zero, 0x1C0($s1)
    ctx->pc = 0x127a28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 448), (uint16_t)GPR_U32(ctx, 0));
    // 0x127a2c: 0x96620008  lhu         $v0, 0x8($s3)
    ctx->pc = 0x127a2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x127a30: 0xa62201c2  sh          $v0, 0x1C2($s1)
    ctx->pc = 0x127a30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 450), (uint16_t)GPR_U32(ctx, 2));
    // 0x127a34: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x127a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x127a38: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x127a38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x127a3c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x127a3cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x127a40: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x127a40u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x127a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127a48: 0xe62001c4  swc1        $f0, 0x1C4($s1)
    ctx->pc = 0x127a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
    // 0x127a4c: 0x263201e0  addiu       $s2, $s1, 0x1E0
    ctx->pc = 0x127a4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x127a50: 0xfa400000  sqc2        $vf0, 0x0($s2)
    ctx->pc = 0x127a50u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x127a54: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x127a54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127a58: 0xae2001f0  sw          $zero, 0x1F0($s1)
    ctx->pc = 0x127a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
    // 0x127a5c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x127a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127a60: 0x96620010  lhu         $v0, 0x10($s3)
    ctx->pc = 0x127a60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x127a64: 0xa62201f4  sh          $v0, 0x1F4($s1)
    ctx->pc = 0x127a64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 500), (uint16_t)GPR_U32(ctx, 2));
    // 0x127a68: 0x96630014  lhu         $v1, 0x14($s3)
    ctx->pc = 0x127a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x127a6c: 0xa63401b6  sh          $s4, 0x1B6($s1)
    ctx->pc = 0x127a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 438), (uint16_t)GPR_U32(ctx, 20));
    // 0x127a70: 0xa62301f6  sh          $v1, 0x1F6($s1)
    ctx->pc = 0x127a70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 3));
    // 0x127a74: 0xa62001ba  sh          $zero, 0x1BA($s1)
    ctx->pc = 0x127a74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 442), (uint16_t)GPR_U32(ctx, 0));
    // 0x127a78: 0xc04844a  jal         func_121128
    ctx->pc = 0x127A78u;
    SET_GPR_U32(ctx, 31, 0x127A80u);
    ctx->pc = 0x127A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127A78u;
    // 0x127a7c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x127A78u, 0x127A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127A80u;
label_127a80:
    // 0x127a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x127a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a84: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x127A84u;
    {
        const bool branch_taken_0x127a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127A84u;
        // 0x127a88: 0xae2001d0  sw          $zero, 0x1D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a84) {
            ctx->pc = 0x127ABCu;
            return;
        }
    }
    ctx->pc = 0x127A8Cu;
    // 0x127a8c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x127a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x127a90: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x127a90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x127a94: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x127a94u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x127a98: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x127a98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x127a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127aa0: 0xe62001c8  swc1        $f0, 0x1C8($s1)
    ctx->pc = 0x127aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 456), bits); }
    // 0x127aa4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x127aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x127aa8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x127aa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x127aac: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x127aacu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x127ab0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x127ab0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x127ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127ab8: 0xe62001cc  swc1        $f0, 0x1CC($s1)
    ctx->pc = 0x127ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 460), bits); }
    ctx->pc = 0x127abcu;
}
