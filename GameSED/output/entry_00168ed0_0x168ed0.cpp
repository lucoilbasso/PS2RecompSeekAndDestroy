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

// Function: entry_00168ed0
// Address: 0x168ed0 - 0x168f7c
void entry_00168ed0_0x168ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168ed0_0x168ed0");
#endif

    switch (ctx->pc) {
        case 0x168f44u: goto label_168f44;
        case 0x168f78u: goto label_168f78;
        default: break;
    }

    ctx->pc = 0x168ed0u;

    // 0x168ed0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x168ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x168ed4: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x168ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x168ed8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x168ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168edc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168ee0: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x168EE0u;
    {
        const bool branch_taken_0x168ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EE0u;
        // 0x168ee4: 0x8fa3022c  lw          $v1, 0x22C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ee0) {
            ctx->pc = 0x16908Cu;
            return;
        }
    }
    ctx->pc = 0x168EE8u;
    // 0x168ee8: 0x8fa70228  lw          $a3, 0x228($sp)
    ctx->pc = 0x168ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x168eec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x168eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168ef0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x168ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x168ef4: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x168ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x168ef8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x168ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x168efc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168f00: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x168f00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168f04: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168f04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168f08: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x168f08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168f0c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168f0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168f10: 0x4a0002ff  vnop
    ctx->pc = 0x168f10u;
    // NOP operation, no action needed for VU0
    // 0x168f14: 0x4a0002ff  vnop
    ctx->pc = 0x168f14u;
    // NOP operation, no action needed for VU0
    // 0x168f18: 0x4a0002ff  vnop
    ctx->pc = 0x168f18u;
    // NOP operation, no action needed for VU0
    // 0x168f1c: 0x4a0002ff  vnop
    ctx->pc = 0x168f1cu;
    // NOP operation, no action needed for VU0
    // 0x168f20: 0x4a0002ff  vnop
    ctx->pc = 0x168f20u;
    // NOP operation, no action needed for VU0
    // 0x168f24: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168f24u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168f28: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168f2c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x168f30: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x168F30u;
    {
        const bool branch_taken_0x168f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F30u;
        // 0x168f34: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f30) {
            ctx->pc = 0x168F7Cu;
            return;
        }
    }
    ctx->pc = 0x168F38u;
    // 0x168f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f3c: 0xc06164c  jal         func_185930
    ctx->pc = 0x168F3Cu;
    SET_GPR_U32(ctx, 31, 0x168F44u);
    ctx->pc = 0x168F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F3Cu;
    // 0x168f40: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168F3Cu, 0x168F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F44u;
label_168f44:
    // 0x168f44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f48: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x168f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x168f4c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168f4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168f50: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x168f50u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168f54: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x168f54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168f58: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x168f5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x168f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168f60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168f60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f64: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x168f64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x168f68: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x168f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f70: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x168F70u;
    SET_GPR_U32(ctx, 31, 0x168F78u);
    ctx->pc = 0x168F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F70u;
    // 0x168f74: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x168F70u, 0x168F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F78u;
label_168f78:
    // 0x168f78: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x168f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x168f7cu;
}
