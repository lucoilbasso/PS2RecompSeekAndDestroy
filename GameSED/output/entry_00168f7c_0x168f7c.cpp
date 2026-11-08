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

// Function: entry_00168f7c
// Address: 0x168f7c - 0x169014
void entry_00168f7c_0x168f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168f7c_0x168f7c");
#endif

    switch (ctx->pc) {
        case 0x168fc0u: goto label_168fc0;
        case 0x169010u: goto label_169010;
        default: break;
    }

    ctx->pc = 0x168f7cu;

    // 0x168f7c: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x168f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x168f80: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168f84: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168f84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168f88: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168f88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168f8c: 0x4a0002ff  vnop
    ctx->pc = 0x168f8cu;
    // NOP operation, no action needed for VU0
    // 0x168f90: 0x4a0002ff  vnop
    ctx->pc = 0x168f90u;
    // NOP operation, no action needed for VU0
    // 0x168f94: 0x4a0002ff  vnop
    ctx->pc = 0x168f94u;
    // NOP operation, no action needed for VU0
    // 0x168f98: 0x4a0002ff  vnop
    ctx->pc = 0x168f98u;
    // NOP operation, no action needed for VU0
    // 0x168f9c: 0x4a0002ff  vnop
    ctx->pc = 0x168f9cu;
    // NOP operation, no action needed for VU0
    // 0x168fa0: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168fa0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168fa4: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168fa8: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168fac: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x168FACu;
    {
        const bool branch_taken_0x168fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168fac) {
            ctx->pc = 0x168FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168FACu;
            // 0x168fb0: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169014u;
            return;
        }
    }
    ctx->pc = 0x168FB4u;
    // 0x168fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fb8: 0xc06164c  jal         func_185930
    ctx->pc = 0x168FB8u;
    SET_GPR_U32(ctx, 31, 0x168FC0u);
    ctx->pc = 0x168FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168FB8u;
    // 0x168fbc: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168FB8u, 0x168FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168FC0u;
label_168fc0:
    // 0x168fc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fc4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168fc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168fc8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x168fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x168fcc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x168fccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x168fd0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x168fd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168fd4: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x168fd4u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168fd8: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x168fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168fdc: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x168fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x168fe0: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x168fe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x168fe4: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x168fe4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x168fe8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x168fe8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168fec: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x168fecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x168ff0: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168ff4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x168ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168ff8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169000: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x169000u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x169004: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x169004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169008: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x169008u;
    SET_GPR_U32(ctx, 31, 0x169010u);
    ctx->pc = 0x16900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169008u;
    // 0x16900c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x169008u, 0x169010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169010u;
label_169010:
    // 0x169010: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x169010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x169014u;
}
