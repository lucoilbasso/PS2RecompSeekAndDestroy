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

// Function: ApShadowJobProc__FP9ApcShadowP10WcSequence
// Address: 0x16b420 - 0x16b548
void ApShadowJobProc__FP9ApcShadowP10WcSequence_0x16b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApShadowJobProc__FP9ApcShadowP10WcSequence_0x16b420");
#endif

    switch (ctx->pc) {
        case 0x16b4c8u: goto label_16b4c8;
        case 0x16b4d8u: goto label_16b4d8;
        case 0x16b4e8u: goto label_16b4e8;
        case 0x16b4f8u: goto label_16b4f8;
        case 0x16b508u: goto label_16b508;
        case 0x16b51cu: goto label_16b51c;
        case 0x16b538u: goto label_16b538;
        default: break;
    }

    ctx->pc = 0x16b420u;

    // 0x16b420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16b424: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x16b424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x16b428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b42c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x16b42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16b430: 0x8e0301e8  lw          $v1, 0x1E8($s0)
    ctx->pc = 0x16b430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x16b434: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x16b434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16b438: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16b438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16b43c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x16B43Cu;
    {
        const bool branch_taken_0x16b43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B43Cu;
        // 0x16b440: 0x30630002  andi        $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b43c) {
            ctx->pc = 0x16B528u;
            goto label_16b528;
        }
    }
    ctx->pc = 0x16B444u;
    // 0x16b444: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x16b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x16b448: 0x24051118  addiu       $a1, $zero, 0x1118
    ctx->pc = 0x16b448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x16b44c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x16b44cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b450: 0x244705b0  addiu       $a3, $v0, 0x5B0
    ctx->pc = 0x16b450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
    // 0x16b454: 0x14650038  bne         $v1, $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x16B454u;
    {
        const bool branch_taken_0x16b454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x16B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B454u;
        // 0x16b458: 0x244605f0  addiu       $a2, $v0, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b454) {
            ctx->pc = 0x16B538u;
            goto label_16b538;
        }
    }
    ctx->pc = 0x16B45Cu;
    // 0x16b45c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x16b45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x16b460: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16b460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b464: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x16b464u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16b468: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16b468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16b46c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16b46cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16b470: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x16b470u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16b474: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x16b474u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x16b478: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x16b478u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x16b47c: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x16b47cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x16b480: 0x4bc1212c  vsub.xyz    $vf4, $vf4, $vf1
    ctx->pc = 0x16b480u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16b484: 0x4bc1296c  vsub.xyz    $vf5, $vf5, $vf1
    ctx->pc = 0x16b484u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b488: 0x4bc131ac  vsub.xyz    $vf6, $vf6, $vf1
    ctx->pc = 0x16b488u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b48c: 0x4bc139ec  vsub.xyz    $vf7, $vf7, $vf1
    ctx->pc = 0x16b48cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16b490: 0x4b422118  vmulx.xz    $vf4, $vf4, $vf2x
    ctx->pc = 0x16b490u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16b494: 0x4b422958  vmulx.xz    $vf5, $vf5, $vf2x
    ctx->pc = 0x16b494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b498: 0x4b423198  vmulx.xz    $vf6, $vf6, $vf2x
    ctx->pc = 0x16b498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b49c: 0x4b4239d8  vmulx.xz    $vf7, $vf7, $vf2x
    ctx->pc = 0x16b49cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16b4a0: 0x4bc12128  vadd.xyz    $vf4, $vf4, $vf1
    ctx->pc = 0x16b4a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16b4a4: 0x4bc12968  vadd.xyz    $vf5, $vf5, $vf1
    ctx->pc = 0x16b4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16b4a8: 0x4bc131a8  vadd.xyz    $vf6, $vf6, $vf1
    ctx->pc = 0x16b4a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16b4ac: 0x4bc139e8  vadd.xyz    $vf7, $vf7, $vf1
    ctx->pc = 0x16b4acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16b4b0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x16b4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16b4b4: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x16b4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16b4b8: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x16b4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16b4bc: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x16b4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x16b4c0: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B4C0u;
    SET_GPR_U32(ctx, 31, 0x16B4C8u);
    ctx->pc = 0x16B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4C0u;
    // 0x16b4c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B4C0u, 0x16B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B4C8u;
label_16b4c8:
    // 0x16b4c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16b4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4d0: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B4D0u;
    SET_GPR_U32(ctx, 31, 0x16B4D8u);
    ctx->pc = 0x16B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4D0u;
    // 0x16b4d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B4D0u, 0x16B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B4D8u;
label_16b4d8:
    // 0x16b4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4dc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x16b4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b4e0: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B4E0u;
    SET_GPR_U32(ctx, 31, 0x16B4E8u);
    ctx->pc = 0x16B4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4E0u;
    // 0x16b4e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B4E0u, 0x16B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B4E8u;
label_16b4e8:
    // 0x16b4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4ec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16b4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16b4f0: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B4F0u;
    SET_GPR_U32(ctx, 31, 0x16B4F8u);
    ctx->pc = 0x16B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B4F0u;
    // 0x16b4f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B4F0u, 0x16B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B4F8u;
label_16b4f8:
    // 0x16b4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16b4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16b500: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B500u;
    SET_GPR_U32(ctx, 31, 0x16B508u);
    ctx->pc = 0x16B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B500u;
    // 0x16b504: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B500u, 0x16B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B508u;
label_16b508:
    // 0x16b508: 0x8e0601c8  lw          $a2, 0x1C8($s0)
    ctx->pc = 0x16b508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x16b50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b510: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16b510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16b514: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B514u;
    SET_GPR_U32(ctx, 31, 0x16B51Cu);
    ctx->pc = 0x16B518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B514u;
    // 0x16b518: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B514u, 0x16B51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B51Cu;
label_16b51c:
    // 0x16b51c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16B51Cu;
    {
        const bool branch_taken_0x16b51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B51Cu;
        // 0x16b520: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b51c) {
            ctx->pc = 0x16B53Cu;
            goto label_16b53c;
        }
    }
    ctx->pc = 0x16B524u;
    // 0x16b524: 0x0  nop
    ctx->pc = 0x16b524u;
    // NOP
label_16b528:
    // 0x16b528: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B528u;
    {
        const bool branch_taken_0x16b528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b528) {
            ctx->pc = 0x16B52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B528u;
            // 0x16b52c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B53Cu;
            goto label_16b53c;
        }
    }
    ctx->pc = 0x16B530u;
    // 0x16b530: 0xc05acbc  jal         func_16B2F0
    ctx->pc = 0x16B530u;
    SET_GPR_U32(ctx, 31, 0x16B538u);
    ctx->pc = 0x16B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B530u;
    // 0x16b534: 0x8e0501e0  lw          $a1, 0x1E0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B2F0u, 0x16B530u, 0x16B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B538u;
label_16b538:
    // 0x16b538: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x16b538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16b53c:
    // 0x16b53c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x16b53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16b540: 0x3e00008  jr          $ra
    ctx->pc = 0x16B540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B540u;
        // 0x16b544: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B548u;
}
