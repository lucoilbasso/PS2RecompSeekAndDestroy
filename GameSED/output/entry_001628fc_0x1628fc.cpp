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

// Function: entry_001628fc
// Address: 0x1628fc - 0x162968
void entry_001628fc_0x1628fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001628fc_0x1628fc");
#endif

    switch (ctx->pc) {
        case 0x162958u: goto label_162958;
        default: break;
    }

    ctx->pc = 0x1628fcu;

    // 0x1628fc: 0xc6201ac8  lwc1        $f0, 0x1AC8($s1)
    ctx->pc = 0x1628fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162900: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x162900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x162904: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x162904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162908: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x162908u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16290c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x16290cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162910: 0x48272800  qmfc2.ni    $a3, $vf5
    ctx->pc = 0x162910u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x162914: 0x73800  sll         $a3, $a3, 0
    ctx->pc = 0x162914u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x162918: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x162918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x16291c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16291cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162920: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x162920u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162924: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x162924u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162928: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x162928u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16292c: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x16292cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x162930: 0x8e261acc  lw          $a2, 0x1ACC($s1)
    ctx->pc = 0x162930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6860)));
    // 0x162934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162938: 0x8e221ad0  lw          $v0, 0x1AD0($s1)
    ctx->pc = 0x162938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6864)));
    // 0x16293c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x16293cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x162940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162944: 0x30c67fff  andi        $a2, $a2, 0x7FFF
    ctx->pc = 0x162944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x162948: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x162948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x16294c: 0xae261acc  sw          $a2, 0x1ACC($s1)
    ctx->pc = 0x16294cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6860), GPR_U32(ctx, 6));
    // 0x162950: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x162950u;
    SET_GPR_U32(ctx, 31, 0x162958u);
    ctx->pc = 0x162954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162950u;
    // 0x162954: 0xae221ad0  sw          $v0, 0x1AD0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 6864), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164AA0u, 0x162950u, 0x162958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162958u;
label_162958:
    // 0x162958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16295c: 0x8e261ad0  lw          $a2, 0x1AD0($s1)
    ctx->pc = 0x16295cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6864)));
    // 0x162960: 0xc0592a8  jal         func_164AA0
    ctx->pc = 0x162960u;
    SET_GPR_U32(ctx, 31, 0x162968u);
    ctx->pc = 0x162964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162960u;
    // 0x162964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164AA0u, 0x162960u, 0x162968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162968u;
}
