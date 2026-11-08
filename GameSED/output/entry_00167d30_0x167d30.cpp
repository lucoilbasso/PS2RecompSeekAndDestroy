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

// Function: entry_00167d30
// Address: 0x167d30 - 0x167dc8
void entry_00167d30_0x167d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167d30_0x167d30");
#endif

    switch (ctx->pc) {
        case 0x167d74u: goto label_167d74;
        case 0x167dc4u: goto label_167dc4;
        default: break;
    }

    ctx->pc = 0x167d30u;

    // 0x167d30: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x167d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x167d34: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167d34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167d38: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x167d38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167d3c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167d3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167d40: 0x4a0002ff  vnop
    ctx->pc = 0x167d40u;
    // NOP operation, no action needed for VU0
    // 0x167d44: 0x4a0002ff  vnop
    ctx->pc = 0x167d44u;
    // NOP operation, no action needed for VU0
    // 0x167d48: 0x4a0002ff  vnop
    ctx->pc = 0x167d48u;
    // NOP operation, no action needed for VU0
    // 0x167d4c: 0x4a0002ff  vnop
    ctx->pc = 0x167d4cu;
    // NOP operation, no action needed for VU0
    // 0x167d50: 0x4a0002ff  vnop
    ctx->pc = 0x167d50u;
    // NOP operation, no action needed for VU0
    // 0x167d54: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167d54u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167d58: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167d5c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167d60: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x167D60u;
    {
        const bool branch_taken_0x167d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167d60) {
            ctx->pc = 0x167D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167D60u;
            // 0x167d64: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167DC8u;
            return;
        }
    }
    ctx->pc = 0x167D68u;
    // 0x167d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d6c: 0xc06164c  jal         func_185930
    ctx->pc = 0x167D6Cu;
    SET_GPR_U32(ctx, 31, 0x167D74u);
    ctx->pc = 0x167D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D6Cu;
    // 0x167d70: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167D6Cu, 0x167D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D74u;
label_167d74:
    // 0x167d74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d78: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x167d78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167d7c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x167d7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167d80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x167d80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x167d84: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167d84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167d88: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x167d88u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167d8c: 0xfae10000  sqc2        $vf1, 0x0($s7)
    ctx->pc = 0x167d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167d90: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x167d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167d94: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x167d94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x167d98: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x167d98u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x167d9c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x167d9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167da0: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x167da0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x167da4: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x167da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x167da8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x167da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167dac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x167dacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167db0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167db4: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x167db4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x167db8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x167db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167dbc: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x167DBCu;
    SET_GPR_U32(ctx, 31, 0x167DC4u);
    ctx->pc = 0x167DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167DBCu;
    // 0x167dc0: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x167DBCu, 0x167DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167DC4u;
label_167dc4:
    // 0x167dc4: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x167dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x167dc8u;
}
