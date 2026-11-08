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

// Function: entry_00167b14
// Address: 0x167b14 - 0x167b88
void entry_00167b14_0x167b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167b14_0x167b14");
#endif

    switch (ctx->pc) {
        case 0x167b84u: goto label_167b84;
        default: break;
    }

    ctx->pc = 0x167b14u;

    // 0x167b14: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x167b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x167b18: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x167b18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167b1c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x167b1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167b20: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167b20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167b24: 0x4a0002ff  vnop
    ctx->pc = 0x167b24u;
    // NOP operation, no action needed for VU0
    // 0x167b28: 0x4a0002ff  vnop
    ctx->pc = 0x167b28u;
    // NOP operation, no action needed for VU0
    // 0x167b2c: 0x4a0002ff  vnop
    ctx->pc = 0x167b2cu;
    // NOP operation, no action needed for VU0
    // 0x167b30: 0x4a0002ff  vnop
    ctx->pc = 0x167b30u;
    // NOP operation, no action needed for VU0
    // 0x167b34: 0x4a0002ff  vnop
    ctx->pc = 0x167b34u;
    // NOP operation, no action needed for VU0
    // 0x167b38: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167b38u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167b3c: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167b40: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167b44: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x167B44u;
    {
        const bool branch_taken_0x167b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B44u;
        // 0x167b48: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b44) {
            ctx->pc = 0x167B88u;
            return;
        }
    }
    ctx->pc = 0x167B4Cu;
    // 0x167b4c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x167b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167b50: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x167b50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x167b54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x167b54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x167b58: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x167b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167b5c: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x167b5cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167b60: 0xfae10000  sqc2        $vf1, 0x0($s7)
    ctx->pc = 0x167b60u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b68: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x167b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x167b6c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x167b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167b70: 0x8ec201b4  lw          $v0, 0x1B4($s6)
    ctx->pc = 0x167b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x167b74: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x167b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x167b78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167b7c: 0xc0618da  jal         func_186368
    ctx->pc = 0x167B7Cu;
    SET_GPR_U32(ctx, 31, 0x167B84u);
    ctx->pc = 0x167B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B7Cu;
    // 0x167b80: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x167B7Cu, 0x167B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B84u;
label_167b84:
    // 0x167b84: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x167b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x167b88u;
}
