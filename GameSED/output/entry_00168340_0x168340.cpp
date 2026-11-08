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

// Function: entry_00168340
// Address: 0x168340 - 0x1683ec
void entry_00168340_0x168340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168340_0x168340");
#endif

    switch (ctx->pc) {
        case 0x1683b4u: goto label_1683b4;
        case 0x1683e8u: goto label_1683e8;
        default: break;
    }

    ctx->pc = 0x168340u;

    // 0x168340: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x168340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x168344: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x168344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x168348: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16834c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168350: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x168350u;
    {
        const bool branch_taken_0x168350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168350u;
        // 0x168354: 0x8fa30204  lw          $v1, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168350) {
            ctx->pc = 0x1684FCu;
            return;
        }
    }
    ctx->pc = 0x168358u;
    // 0x168358: 0x8fa70200  lw          $a3, 0x200($sp)
    ctx->pc = 0x168358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x16835c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168360: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x168360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x168364: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x168364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x168368: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x168368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16836c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16836cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168370: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x168370u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168374: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168374u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168378: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x168378u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16837c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x16837cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168380: 0x4a0002ff  vnop
    ctx->pc = 0x168380u;
    // NOP operation, no action needed for VU0
    // 0x168384: 0x4a0002ff  vnop
    ctx->pc = 0x168384u;
    // NOP operation, no action needed for VU0
    // 0x168388: 0x4a0002ff  vnop
    ctx->pc = 0x168388u;
    // NOP operation, no action needed for VU0
    // 0x16838c: 0x4a0002ff  vnop
    ctx->pc = 0x16838cu;
    // NOP operation, no action needed for VU0
    // 0x168390: 0x4a0002ff  vnop
    ctx->pc = 0x168390u;
    // NOP operation, no action needed for VU0
    // 0x168394: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168394u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168398: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x16839c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x16839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1683a0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1683A0u;
    {
        const bool branch_taken_0x1683a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1683A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683A0u;
        // 0x1683a4: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683a0) {
            ctx->pc = 0x1683ECu;
            return;
        }
    }
    ctx->pc = 0x1683A8u;
    // 0x1683a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1683a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683ac: 0xc06164c  jal         func_185930
    ctx->pc = 0x1683ACu;
    SET_GPR_U32(ctx, 31, 0x1683B4u);
    ctx->pc = 0x1683B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1683ACu;
    // 0x1683b0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1683ACu, 0x1683B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683B4u;
label_1683b4:
    // 0x1683b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1683b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683b8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1683b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1683bc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1683bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1683c0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1683c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1683c4: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1683c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1683c8: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x1683c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x1683cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1683ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683d0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1683d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1683d4: 0x3c3100b  movn        $v0, $fp, $v1
    ctx->pc = 0x1683d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x1683d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1683d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1683dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1683e0: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1683E0u;
    SET_GPR_U32(ctx, 31, 0x1683E8u);
    ctx->pc = 0x1683E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1683E0u;
    // 0x1683e4: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1683E0u, 0x1683E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1683E8u;
label_1683e8:
    // 0x1683e8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1683e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x1683ecu;
}
