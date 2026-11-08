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

// Function: entry_001687d8
// Address: 0x1687d8 - 0x168884
void entry_001687d8_0x1687d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001687d8_0x1687d8");
#endif

    switch (ctx->pc) {
        case 0x16884cu: goto label_16884c;
        case 0x168880u: goto label_168880;
        default: break;
    }

    ctx->pc = 0x1687d8u;

    // 0x1687d8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1687d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1687dc: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x1687dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1687e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1687e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1687e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1687e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1687e8: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x1687E8u;
    {
        const bool branch_taken_0x1687e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1687ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687E8u;
        // 0x1687ec: 0x8fa30214  lw          $v1, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687e8) {
            ctx->pc = 0x168994u;
            return;
        }
    }
    ctx->pc = 0x1687F0u;
    // 0x1687f0: 0x8fa70210  lw          $a3, 0x210($sp)
    ctx->pc = 0x1687f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1687f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1687f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1687f8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1687f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1687fc: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x1687fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x168800: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x168800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x168804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168808: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x168808u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16880c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x16880cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168810: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x168810u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168814: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168814u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168818: 0x4a0002ff  vnop
    ctx->pc = 0x168818u;
    // NOP operation, no action needed for VU0
    // 0x16881c: 0x4a0002ff  vnop
    ctx->pc = 0x16881cu;
    // NOP operation, no action needed for VU0
    // 0x168820: 0x4a0002ff  vnop
    ctx->pc = 0x168820u;
    // NOP operation, no action needed for VU0
    // 0x168824: 0x4a0002ff  vnop
    ctx->pc = 0x168824u;
    // NOP operation, no action needed for VU0
    // 0x168828: 0x4a0002ff  vnop
    ctx->pc = 0x168828u;
    // NOP operation, no action needed for VU0
    // 0x16882c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x16882cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168830: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168834: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168838: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x168838u;
    {
        const bool branch_taken_0x168838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168838u;
        // 0x16883c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168838) {
            ctx->pc = 0x168884u;
            return;
        }
    }
    ctx->pc = 0x168840u;
    // 0x168840: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168844: 0xc06164c  jal         func_185930
    ctx->pc = 0x168844u;
    SET_GPR_U32(ctx, 31, 0x16884Cu);
    ctx->pc = 0x168848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168844u;
    // 0x168848: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168844u, 0x16884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16884Cu;
label_16884c:
    // 0x16884c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16884cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168850: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x168850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x168854: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168858: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168858u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x16885c: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x16885cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168860: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168864: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168868: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x168868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16886c: 0x3c3100b  movn        $v0, $fp, $v1
    ctx->pc = 0x16886cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x168870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168874: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168874u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168878: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x168878u;
    SET_GPR_U32(ctx, 31, 0x168880u);
    ctx->pc = 0x16887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168878u;
    // 0x16887c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x168878u, 0x168880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168880u;
label_168880:
    // 0x168880: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x168880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x168884u;
}
