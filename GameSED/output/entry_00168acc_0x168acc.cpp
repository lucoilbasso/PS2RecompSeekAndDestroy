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

// Function: entry_00168acc
// Address: 0x168acc - 0x168b64
void entry_00168acc_0x168acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168acc_0x168acc");
#endif

    switch (ctx->pc) {
        case 0x168b10u: goto label_168b10;
        case 0x168b60u: goto label_168b60;
        default: break;
    }

    ctx->pc = 0x168accu;

    // 0x168acc: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x168accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x168ad0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168ad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168ad4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168ad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168ad8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168ad8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168adc: 0x4a0002ff  vnop
    ctx->pc = 0x168adcu;
    // NOP operation, no action needed for VU0
    // 0x168ae0: 0x4a0002ff  vnop
    ctx->pc = 0x168ae0u;
    // NOP operation, no action needed for VU0
    // 0x168ae4: 0x4a0002ff  vnop
    ctx->pc = 0x168ae4u;
    // NOP operation, no action needed for VU0
    // 0x168ae8: 0x4a0002ff  vnop
    ctx->pc = 0x168ae8u;
    // NOP operation, no action needed for VU0
    // 0x168aec: 0x4a0002ff  vnop
    ctx->pc = 0x168aecu;
    // NOP operation, no action needed for VU0
    // 0x168af0: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168af0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168af4: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168af8: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168afc: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x168AFCu;
    {
        const bool branch_taken_0x168afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168afc) {
            ctx->pc = 0x168B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168AFCu;
            // 0x168b00: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168B64u;
            return;
        }
    }
    ctx->pc = 0x168B04u;
    // 0x168b04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b08: 0xc06164c  jal         func_185930
    ctx->pc = 0x168B08u;
    SET_GPR_U32(ctx, 31, 0x168B10u);
    ctx->pc = 0x168B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B08u;
    // 0x168b0c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168B08u, 0x168B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B10u;
label_168b10:
    // 0x168b10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b14: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168b14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168b18: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x168b18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x168b1c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x168b1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x168b20: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x168b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168b24: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x168b24u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168b28: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x168b28u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168b2c: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x168b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x168b30: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x168b30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x168b34: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x168b34u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x168b38: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x168b38u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168b3c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x168b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x168b40: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168b44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b48: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168b4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168b4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168b50: 0x3c4100b  movn        $v0, $fp, $a0
    ctx->pc = 0x168b50u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b58: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168B58u;
    SET_GPR_U32(ctx, 31, 0x168B60u);
    ctx->pc = 0x168B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B58u;
    // 0x168b5c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168B58u, 0x168B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B60u;
label_168b60:
    // 0x168b60: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x168b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x168b64u;
}
