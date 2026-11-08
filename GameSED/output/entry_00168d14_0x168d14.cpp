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

// Function: entry_00168d14
// Address: 0x168d14 - 0x168dac
void entry_00168d14_0x168d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168d14_0x168d14");
#endif

    switch (ctx->pc) {
        case 0x168d58u: goto label_168d58;
        case 0x168da8u: goto label_168da8;
        default: break;
    }

    ctx->pc = 0x168d14u;

    // 0x168d14: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x168d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x168d18: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168d1c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168d1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168d20: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168d20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168d24: 0x4a0002ff  vnop
    ctx->pc = 0x168d24u;
    // NOP operation, no action needed for VU0
    // 0x168d28: 0x4a0002ff  vnop
    ctx->pc = 0x168d28u;
    // NOP operation, no action needed for VU0
    // 0x168d2c: 0x4a0002ff  vnop
    ctx->pc = 0x168d2cu;
    // NOP operation, no action needed for VU0
    // 0x168d30: 0x4a0002ff  vnop
    ctx->pc = 0x168d30u;
    // NOP operation, no action needed for VU0
    // 0x168d34: 0x4a0002ff  vnop
    ctx->pc = 0x168d34u;
    // NOP operation, no action needed for VU0
    // 0x168d38: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168d38u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168d3c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168d40: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168d44: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x168D44u;
    {
        const bool branch_taken_0x168d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d44) {
            ctx->pc = 0x168D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168D44u;
            // 0x168d48: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168DACu;
            return;
        }
    }
    ctx->pc = 0x168D4Cu;
    // 0x168d4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d50: 0xc06164c  jal         func_185930
    ctx->pc = 0x168D50u;
    SET_GPR_U32(ctx, 31, 0x168D58u);
    ctx->pc = 0x168D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D50u;
    // 0x168d54: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168D50u, 0x168D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D58u;
label_168d58:
    // 0x168d58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d5c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168d5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168d60: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x168d60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x168d64: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x168d64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x168d68: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x168d68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168d6c: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x168d6cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168d70: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x168d70u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168d74: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x168d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x168d78: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x168d78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x168d7c: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x168d7cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x168d80: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x168d80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168d84: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x168d84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x168d88: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168d8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d90: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168d94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168d94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168d98: 0x3c4100b  movn        $v0, $fp, $a0
    ctx->pc = 0x168d98u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168d9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168da0: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168DA0u;
    SET_GPR_U32(ctx, 31, 0x168DA8u);
    ctx->pc = 0x168DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168DA0u;
    // 0x168da4: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168DA0u, 0x168DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168DA8u;
label_168da8:
    // 0x168da8: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x168da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x168dacu;
}
