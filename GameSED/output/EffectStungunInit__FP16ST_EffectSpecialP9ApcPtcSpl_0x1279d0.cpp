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

// Function: EffectStungunInit__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x1279d0 - 0x127bb8
void EffectStungunInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x1279d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectStungunInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x1279d0");
#endif

    switch (ctx->pc) {
        case 0x127a08u: goto label_127a08;
        case 0x127a80u: goto label_127a80;
        case 0x127b20u: goto label_127b20;
        case 0x127b68u: goto label_127b68;
        default: break;
    }

    ctx->pc = 0x1279d0u;

    // 0x1279d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1279d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1279d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1279d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1279d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1279d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1279dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1279dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1279e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1279e4: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1279e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1279e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1279e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1279ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1279ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1279f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1279f4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1279f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
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
            goto label_127abc;
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
label_127abc:
    // 0x127abc: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x127abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x127ac0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x127AC0u;
    {
        const bool branch_taken_0x127ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AC0u;
        // 0x127ac4: 0x244300e8  addiu       $v1, $v0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ac0) {
            ctx->pc = 0x127AF0u;
            goto label_127af0;
        }
    }
    ctx->pc = 0x127AC8u;
    // 0x127ac8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x127ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x127acc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x127ACCu;
    {
        const bool branch_taken_0x127acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127acc) {
            ctx->pc = 0x127AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127ACCu;
            // 0x127ad0: 0x962201c2  lhu         $v0, 0x1C2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127AF4u;
            goto label_127af4;
        }
    }
    ctx->pc = 0x127AD4u;
    // 0x127ad4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x127ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127ad8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x127ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x127adc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x127adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127ae0: 0xe62101e4  swc1        $f1, 0x1E4($s1)
    ctx->pc = 0x127ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 484), bits); }
    // 0x127ae4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x127ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127ae8: 0xa63401ba  sh          $s4, 0x1BA($s1)
    ctx->pc = 0x127ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 442), (uint16_t)GPR_U32(ctx, 20));
    // 0x127aec: 0xe62001e8  swc1        $f0, 0x1E8($s1)
    ctx->pc = 0x127aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 488), bits); }
label_127af0:
    // 0x127af0: 0x962201c2  lhu         $v0, 0x1C2($s1)
    ctx->pc = 0x127af0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 450)));
label_127af4:
    // 0x127af4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x127AF4u;
    {
        const bool branch_taken_0x127af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127AF4u;
        // 0x127af8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127af4) {
            ctx->pc = 0x127B40u;
            goto label_127b40;
        }
    }
    ctx->pc = 0x127AFCu;
    // 0x127afc: 0x278489e8  addiu       $a0, $gp, -0x7618
    ctx->pc = 0x127afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937064));
    // 0x127b00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x127b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127b04: 0xa62201b8  sh          $v0, 0x1B8($s1)
    ctx->pc = 0x127b04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x127b08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x127b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x127b0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x127b0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b10: 0x1465000c  bne         $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x127B10u;
    {
        const bool branch_taken_0x127b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x127B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B10u;
        // 0x127b14: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b10) {
            ctx->pc = 0x127B44u;
            goto label_127b44;
        }
    }
    ctx->pc = 0x127B18u;
    // 0x127b18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x127B18u;
    {
        const bool branch_taken_0x127b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B18u;
        // 0x127b1c: 0xaf8089e8  sw          $zero, -0x7618($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b18) {
            ctx->pc = 0x127B44u;
            goto label_127b44;
        }
    }
    ctx->pc = 0x127B20u;
label_127b20:
    // 0x127b20: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x127b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x127b24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127b28: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x127b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127b2c: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x127b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x127b30: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x127b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x127b34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x127B34u;
    {
        const bool branch_taken_0x127b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B34u;
        // 0x127b38: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b34) {
            ctx->pc = 0x127B90u;
            goto label_127b90;
        }
    }
    ctx->pc = 0x127B3Cu;
    // 0x127b3c: 0x0  nop
    ctx->pc = 0x127b3cu;
    // NOP
label_127b40:
    // 0x127b40: 0xa62001b8  sh          $zero, 0x1B8($s1)
    ctx->pc = 0x127b40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 440), (uint16_t)GPR_U32(ctx, 0));
label_127b44:
    // 0x127b44: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x127b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x127b48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x127b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x127b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b50: 0x24a305f4  addiu       $v1, $a1, 0x5F4
    ctx->pc = 0x127b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1524));
    // 0x127b54: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x127b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x127b58: 0x24a605f0  addiu       $a2, $a1, 0x5F0
    ctx->pc = 0x127b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1520));
    // 0x127b5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b60: 0xae2201a4  sw          $v0, 0x1A4($s1)
    ctx->pc = 0x127b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 2));
    // 0x127b64: 0x0  nop
    ctx->pc = 0x127b64u;
    // NOP
label_127b68:
    // 0x127b68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127b6c: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x127B6Cu;
    {
        const bool branch_taken_0x127b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B6Cu;
        // 0x127b70: 0x24630490  addiu       $v1, $v1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b6c) {
            ctx->pc = 0x127B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127b20;
        }
    }
    ctx->pc = 0x127B74u;
    // 0x127b74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x127b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x127b78: 0x24c60490  addiu       $a2, $a2, 0x490
    ctx->pc = 0x127b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1168));
    // 0x127b7c: 0x28e20032  slti        $v0, $a3, 0x32
    ctx->pc = 0x127b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x127b80: 0x0  nop
    ctx->pc = 0x127b80u;
    // NOP
    // 0x127b84: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x127B84u;
    {
        const bool branch_taken_0x127b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B84u;
        // 0x127b88: 0x24840490  addiu       $a0, $a0, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b84) {
            ctx->pc = 0x127B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127b68;
        }
    }
    ctx->pc = 0x127B8Cu;
    // 0x127b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127b90:
    // 0x127b90: 0xae2201f8  sw          $v0, 0x1F8($s1)
    ctx->pc = 0x127b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
    // 0x127b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127b9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x127b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127ba0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x127ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127ba4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x127ba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127ba8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x127ba8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x127bac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x127bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x127BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BB0u;
        // 0x127bb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127BB8u;
}
