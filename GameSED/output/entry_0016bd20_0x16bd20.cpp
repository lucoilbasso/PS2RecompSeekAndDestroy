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

// Function: entry_0016bd20
// Address: 0x16bd20 - 0x16bde8
void entry_0016bd20_0x16bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bd20_0x16bd20");
#endif

    switch (ctx->pc) {
        case 0x16bda8u: goto label_16bda8;
        case 0x16bdb8u: goto label_16bdb8;
        case 0x16bdc8u: goto label_16bdc8;
        case 0x16bdd8u: goto label_16bdd8;
        default: break;
    }

    ctx->pc = 0x16bd20u;

    // 0x16bd20: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x16bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x16bd24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16bd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd28: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x16bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16bd2c: 0x24a705b0  addiu       $a3, $a1, 0x5B0
    ctx->pc = 0x16bd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1456));
    // 0x16bd30: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x16bd30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bd34: 0x14430031  bne         $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x16BD34u;
    {
        const bool branch_taken_0x16bd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD34u;
        // 0x16bd38: 0x24a605f0  addiu       $a2, $a1, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd34) {
            ctx->pc = 0x16BDFCu;
            return;
        }
    }
    ctx->pc = 0x16BD3Cu;
    // 0x16bd3c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x16bd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x16bd40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16bd40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16bd44: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x16bd44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16bd48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16bd48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16bd4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16bd4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16bd50: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x16bd50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16bd54: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x16bd54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x16bd58: 0xd8e60020  lqc2        $vf6, 0x20($a3)
    ctx->pc = 0x16bd58u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x16bd5c: 0xd8e70030  lqc2        $vf7, 0x30($a3)
    ctx->pc = 0x16bd5cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x16bd60: 0x4bc1212c  vsub.xyz    $vf4, $vf4, $vf1
    ctx->pc = 0x16bd60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16bd64: 0x4bc1296c  vsub.xyz    $vf5, $vf5, $vf1
    ctx->pc = 0x16bd64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16bd68: 0x4bc131ac  vsub.xyz    $vf6, $vf6, $vf1
    ctx->pc = 0x16bd68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16bd6c: 0x4bc139ec  vsub.xyz    $vf7, $vf7, $vf1
    ctx->pc = 0x16bd6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16bd70: 0x4b422118  vmulx.xz    $vf4, $vf4, $vf2x
    ctx->pc = 0x16bd70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16bd74: 0x4b422958  vmulx.xz    $vf5, $vf5, $vf2x
    ctx->pc = 0x16bd74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16bd78: 0x4b423198  vmulx.xz    $vf6, $vf6, $vf2x
    ctx->pc = 0x16bd78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16bd7c: 0x4b4239d8  vmulx.xz    $vf7, $vf7, $vf2x
    ctx->pc = 0x16bd7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16bd80: 0x4bc12128  vadd.xyz    $vf4, $vf4, $vf1
    ctx->pc = 0x16bd80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16bd84: 0x4bc12968  vadd.xyz    $vf5, $vf5, $vf1
    ctx->pc = 0x16bd84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16bd88: 0x4bc131a8  vadd.xyz    $vf6, $vf6, $vf1
    ctx->pc = 0x16bd88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x16bd8c: 0x4bc139e8  vadd.xyz    $vf7, $vf7, $vf1
    ctx->pc = 0x16bd8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16bd90: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x16bd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16bd94: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x16bd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16bd98: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x16bd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x16bd9c: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x16bd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x16bda0: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16BDA0u;
    SET_GPR_U32(ctx, 31, 0x16BDA8u);
    ctx->pc = 0x16BDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BDA0u;
    // 0x16bda4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16BDA0u, 0x16BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDA8u;
label_16bda8:
    // 0x16bda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16bdacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdb0: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16BDB0u;
    SET_GPR_U32(ctx, 31, 0x16BDB8u);
    ctx->pc = 0x16BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BDB0u;
    // 0x16bdb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16BDB0u, 0x16BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDB8u;
label_16bdb8:
    // 0x16bdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdbc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x16bdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16bdc0: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16BDC0u;
    SET_GPR_U32(ctx, 31, 0x16BDC8u);
    ctx->pc = 0x16BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BDC0u;
    // 0x16bdc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16BDC0u, 0x16BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDC8u;
label_16bdc8:
    // 0x16bdc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdcc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16bdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16bdd0: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16BDD0u;
    SET_GPR_U32(ctx, 31, 0x16BDD8u);
    ctx->pc = 0x16BDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BDD0u;
    // 0x16bdd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16BDD0u, 0x16BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDD8u;
label_16bdd8:
    // 0x16bdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bddc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bde0: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16BDE0u;
    SET_GPR_U32(ctx, 31, 0x16BDE8u);
    ctx->pc = 0x16BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BDE0u;
    // 0x16bde4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16BDE0u, 0x16BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDE8u;
}
