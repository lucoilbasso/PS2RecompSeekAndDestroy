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

// Function: entry_00168c68
// Address: 0x168c68 - 0x168d14
void entry_00168c68_0x168c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168c68_0x168c68");
#endif

    switch (ctx->pc) {
        case 0x168cdcu: goto label_168cdc;
        case 0x168d10u: goto label_168d10;
        default: break;
    }

    ctx->pc = 0x168c68u;

    // 0x168c68: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x168c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x168c6c: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x168c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x168c70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168c74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168c78: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x168C78u;
    {
        const bool branch_taken_0x168c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C78u;
        // 0x168c7c: 0x8fa30224  lw          $v1, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c78) {
            ctx->pc = 0x168E24u;
            return;
        }
    }
    ctx->pc = 0x168C80u;
    // 0x168c80: 0x8fa70220  lw          $a3, 0x220($sp)
    ctx->pc = 0x168c80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x168c84: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x168c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168c88: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x168c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x168c8c: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x168c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x168c90: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x168c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x168c94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168c98: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x168c98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168c9c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168c9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168ca0: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x168ca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168ca4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168ca4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168ca8: 0x4a0002ff  vnop
    ctx->pc = 0x168ca8u;
    // NOP operation, no action needed for VU0
    // 0x168cac: 0x4a0002ff  vnop
    ctx->pc = 0x168cacu;
    // NOP operation, no action needed for VU0
    // 0x168cb0: 0x4a0002ff  vnop
    ctx->pc = 0x168cb0u;
    // NOP operation, no action needed for VU0
    // 0x168cb4: 0x4a0002ff  vnop
    ctx->pc = 0x168cb4u;
    // NOP operation, no action needed for VU0
    // 0x168cb8: 0x4a0002ff  vnop
    ctx->pc = 0x168cb8u;
    // NOP operation, no action needed for VU0
    // 0x168cbc: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168cbcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168cc0: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168cc4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168cc8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x168CC8u;
    {
        const bool branch_taken_0x168cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CC8u;
        // 0x168ccc: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cc8) {
            ctx->pc = 0x168D14u;
            return;
        }
    }
    ctx->pc = 0x168CD0u;
    // 0x168cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cd4: 0xc06164c  jal         func_185930
    ctx->pc = 0x168CD4u;
    SET_GPR_U32(ctx, 31, 0x168CDCu);
    ctx->pc = 0x168CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168CD4u;
    // 0x168cd8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168CD4u, 0x168CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168CDCu;
label_168cdc:
    // 0x168cdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ce0: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x168ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x168ce4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168ce4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168ce8: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168ce8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168cec: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168cecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168cf0: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168cf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168cf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cf8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x168cfc: 0x3c3100b  movn        $v0, $fp, $v1
    ctx->pc = 0x168cfcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168d00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168d04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168d08: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168D08u;
    SET_GPR_U32(ctx, 31, 0x168D10u);
    ctx->pc = 0x168D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168D08u;
    // 0x168d0c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168D08u, 0x168D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168D10u;
label_168d10:
    // 0x168d10: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x168d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x168d14u;
}
