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

// Function: entry_00168a20
// Address: 0x168a20 - 0x168acc
void entry_00168a20_0x168a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168a20_0x168a20");
#endif

    switch (ctx->pc) {
        case 0x168a94u: goto label_168a94;
        case 0x168ac8u: goto label_168ac8;
        default: break;
    }

    ctx->pc = 0x168a20u;

    // 0x168a20: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x168a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x168a24: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x168a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x168a28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168a2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168a30: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x168A30u;
    {
        const bool branch_taken_0x168a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A30u;
        // 0x168a34: 0x8fa3021c  lw          $v1, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a30) {
            ctx->pc = 0x168BDCu;
            return;
        }
    }
    ctx->pc = 0x168A38u;
    // 0x168a38: 0x8fa70218  lw          $a3, 0x218($sp)
    ctx->pc = 0x168a38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x168a3c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x168a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168a40: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x168a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x168a44: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x168a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x168a48: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x168a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x168a4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168a50: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x168a50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168a54: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168a54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168a58: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x168a58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168a5c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168a5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168a60: 0x4a0002ff  vnop
    ctx->pc = 0x168a60u;
    // NOP operation, no action needed for VU0
    // 0x168a64: 0x4a0002ff  vnop
    ctx->pc = 0x168a64u;
    // NOP operation, no action needed for VU0
    // 0x168a68: 0x4a0002ff  vnop
    ctx->pc = 0x168a68u;
    // NOP operation, no action needed for VU0
    // 0x168a6c: 0x4a0002ff  vnop
    ctx->pc = 0x168a6cu;
    // NOP operation, no action needed for VU0
    // 0x168a70: 0x4a0002ff  vnop
    ctx->pc = 0x168a70u;
    // NOP operation, no action needed for VU0
    // 0x168a74: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168a74u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168a78: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168a7c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168a80: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x168A80u;
    {
        const bool branch_taken_0x168a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168A80u;
        // 0x168a84: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a80) {
            ctx->pc = 0x168ACCu;
            return;
        }
    }
    ctx->pc = 0x168A88u;
    // 0x168a88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a8c: 0xc06164c  jal         func_185930
    ctx->pc = 0x168A8Cu;
    SET_GPR_U32(ctx, 31, 0x168A94u);
    ctx->pc = 0x168A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168A8Cu;
    // 0x168a90: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168A8Cu, 0x168A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168A94u;
label_168a94:
    // 0x168a94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a98: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x168a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x168a9c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168a9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168aa0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168aa0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168aa4: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168aa8: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168aac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168aacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ab0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168ab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168ab4: 0x3c3100b  movn        $v0, $fp, $v1
    ctx->pc = 0x168ab4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168abc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168abcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168ac0: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168AC0u;
    SET_GPR_U32(ctx, 31, 0x168AC8u);
    ctx->pc = 0x168AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AC0u;
    // 0x168ac4: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168AC0u, 0x168AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AC8u;
label_168ac8:
    // 0x168ac8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x168ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x168accu;
}
