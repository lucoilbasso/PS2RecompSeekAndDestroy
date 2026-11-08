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

// Function: entry_00168108
// Address: 0x168108 - 0x1681b4
void entry_00168108_0x168108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168108_0x168108");
#endif

    switch (ctx->pc) {
        case 0x16817cu: goto label_16817c;
        case 0x1681b0u: goto label_1681b0;
        default: break;
    }

    ctx->pc = 0x168108u;

    // 0x168108: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x168108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x16810c: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x16810cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x168110: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168114: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168118: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x168118u;
    {
        const bool branch_taken_0x168118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168118u;
        // 0x16811c: 0x8fa201fc  lw          $v0, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168118) {
            ctx->pc = 0x1682C4u;
            return;
        }
    }
    ctx->pc = 0x168120u;
    // 0x168120: 0x8fa701f8  lw          $a3, 0x1F8($sp)
    ctx->pc = 0x168120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x168124: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x168124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168128: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x168128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16812c: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x16812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x168130: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x168130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x168134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168138: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x168138u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16813c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x16813cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168140: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x168140u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168144: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168144u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168148: 0x4a0002ff  vnop
    ctx->pc = 0x168148u;
    // NOP operation, no action needed for VU0
    // 0x16814c: 0x4a0002ff  vnop
    ctx->pc = 0x16814cu;
    // NOP operation, no action needed for VU0
    // 0x168150: 0x4a0002ff  vnop
    ctx->pc = 0x168150u;
    // NOP operation, no action needed for VU0
    // 0x168154: 0x4a0002ff  vnop
    ctx->pc = 0x168154u;
    // NOP operation, no action needed for VU0
    // 0x168158: 0x4a0002ff  vnop
    ctx->pc = 0x168158u;
    // NOP operation, no action needed for VU0
    // 0x16815c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x16815cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168160: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168164: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168168: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x168168u;
    {
        const bool branch_taken_0x168168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168168u;
        // 0x16816c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168168) {
            ctx->pc = 0x1681B4u;
            return;
        }
    }
    ctx->pc = 0x168170u;
    // 0x168170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168174: 0xc06164c  jal         func_185930
    ctx->pc = 0x168174u;
    SET_GPR_U32(ctx, 31, 0x16817Cu);
    ctx->pc = 0x168178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168174u;
    // 0x168178: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168174u, 0x16817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16817Cu;
label_16817c:
    // 0x16817c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16817cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168180: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x168180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x168184: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168184u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168188: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168188u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16818c: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x16818cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168190: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168194: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x168194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168198: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168198u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16819c: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x16819cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1681a0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1681a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1681a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681a8: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x1681A8u;
    SET_GPR_U32(ctx, 31, 0x1681B0u);
    ctx->pc = 0x1681ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1681A8u;
    // 0x1681ac: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x1681A8u, 0x1681B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681B0u;
label_1681b0:
    // 0x1681b0: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1681b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x1681b4u;
}
