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

// Function: WSpriteSetAnimationCell__FP8WcSpritei
// Address: 0x18a4a8 - 0x18a5c8
void WSpriteSetAnimationCell__FP8WcSpritei_0x18a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpriteSetAnimationCell__FP8WcSpritei_0x18a4a8");
#endif

    switch (ctx->pc) {
        case 0x18a4d0u: goto label_18a4d0;
        default: break;
    }

    ctx->pc = 0x18a4a8u;

    // 0x18a4a8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x18a4a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18a4acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18a4b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4b4: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18A4B4u;
    {
        const bool branch_taken_0x18a4b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4B4u;
        // 0x18a4b8: 0x84e901d4  lh          $t1, 0x1D4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4b4) {
            ctx->pc = 0x18A4F8u;
            goto label_18a4f8;
        }
    }
    ctx->pc = 0x18A4BCu;
    // 0x18a4bc: 0x84e401a4  lh          $a0, 0x1A4($a3)
    ctx->pc = 0x18a4bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x18a4c0: 0x24e601a6  addiu       $a2, $a3, 0x1A6
    ctx->pc = 0x18a4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 422));
    // 0x18a4c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18a4c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a4cc: 0x0  nop
    ctx->pc = 0x18a4ccu;
    // NOP
label_18a4d0:
    // 0x18a4d0: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x18a4d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18a4d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A4D4u;
    {
        const bool branch_taken_0x18a4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4D4u;
        // 0x18a4d8: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4d4) {
            ctx->pc = 0x18A4ECu;
            goto label_18a4ec;
        }
    }
    ctx->pc = 0x18A4DCu;
    // 0x18a4dc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x18a4dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18a4e0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18a4e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18a4e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4e8: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x18a4e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_18a4ec:
    // 0x18a4ec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x18a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x18a4f0: 0x54a0fff7  bnel        $a1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18A4F0u;
    {
        const bool branch_taken_0x18a4f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a4f0) {
            ctx->pc = 0x18A4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A4F0u;
            // 0x18a4f4: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a4d0;
        }
    }
    ctx->pc = 0x18A4F8u;
label_18a4f8:
    // 0x18a4f8: 0x94e20204  lhu         $v0, 0x204($a3)
    ctx->pc = 0x18a4f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 516)));
    // 0x18a4fc: 0x24e60150  addiu       $a2, $a3, 0x150
    ctx->pc = 0x18a4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
    // 0x18a500: 0x94e40206  lhu         $a0, 0x206($a3)
    ctx->pc = 0x18a500u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 518)));
    // 0x18a504: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x18a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18a508: 0x84e801a4  lh          $t0, 0x1A4($a3)
    ctx->pc = 0x18a508u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x18a50c: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x18a50cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x18a510: 0x84ea01a6  lh          $t2, 0x1A6($a3)
    ctx->pc = 0x18a510u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 422)));
    // 0x18a514: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x18a514u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x18a518: 0x94c90008  lhu         $t1, 0x8($a2)
    ctx->pc = 0x18a518u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x18a51c: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x18a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x18a520: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x18a520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x18a524: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x18a524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x18a528: 0xa4c20050  sh          $v0, 0x50($a2)
    ctx->pc = 0x18a528u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a52c: 0xa4c40052  sh          $a0, 0x52($a2)
    ctx->pc = 0x18a52cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 82), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a530: 0x1231807  srav        $v1, $v1, $t1
    ctx->pc = 0x18a530u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 9) & 0x1F));
    // 0x18a534: 0xa4c80054  sh          $t0, 0x54($a2)
    ctx->pc = 0x18a534u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 8));
    // 0x18a538: 0xa4ca0056  sh          $t2, 0x56($a2)
    ctx->pc = 0x18a538u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 10));
    // 0x18a53c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x18a53cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18a540: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18a540u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a544: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18a544u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a54c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x18a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x18a550: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x18a550u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x18a554: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x18a554u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x18a558: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x18a558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
    // 0x18a55c: 0x41bc0  sll         $v1, $a0, 15
    ctx->pc = 0x18a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x18a560: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x18a560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x18a564: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x18a564u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x18a568: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x18a568u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x18a56c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18a56cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a570: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18a570u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a578: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x18a578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x18a57c: 0xe4c00064  swc1        $f0, 0x64($a2)
    ctx->pc = 0x18a57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
    // 0x18a580: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x18a580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x18a584: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x18a584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
    // 0x18a588: 0x1252807  srav        $a1, $a1, $t1
    ctx->pc = 0x18a588u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 9) & 0x1F));
    // 0x18a58c: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x18a58cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x18a590: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18a590u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a594: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18a594u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a59c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x18a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x18a5a0: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x18a5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
    // 0x18a5a4: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x18a5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x18a5a8: 0x2484c000  addiu       $a0, $a0, -0x4000
    ctx->pc = 0x18a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
    // 0x18a5ac: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x18a5acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x18a5b0: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x18a5b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x18a5b4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x18a5b4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18a5b8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x18a5b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x18a5bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5C0u;
        // 0x18a5c4: 0xe4c0006c  swc1        $f0, 0x6C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A5C8u;
}
