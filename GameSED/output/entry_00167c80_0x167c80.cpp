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

// Function: entry_00167c80
// Address: 0x167c80 - 0x167d30
void entry_00167c80_0x167c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167c80_0x167c80");
#endif

    switch (ctx->pc) {
        case 0x167cf8u: goto label_167cf8;
        case 0x167d2cu: goto label_167d2c;
        default: break;
    }

    ctx->pc = 0x167c80u;

    // 0x167c80: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x167c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x167c84: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x167c88: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x167c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167c8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x167c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167c90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x167c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167c94: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x167C94u;
    {
        const bool branch_taken_0x167c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C94u;
        // 0x167c98: 0x8fa701e8  lw          $a3, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c94) {
            ctx->pc = 0x167E40u;
            return;
        }
    }
    ctx->pc = 0x167C9Cu;
    // 0x167c9c: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x167c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x167ca0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x167ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x167ca4: 0x8c4301b4  lw          $v1, 0x1B4($v0)
    ctx->pc = 0x167ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
    // 0x167ca8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x167ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x167cac: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x167cb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167cb4: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x167cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167cb8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x167cb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167cbc: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x167cbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x167cc0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167cc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167cc4: 0x4a0002ff  vnop
    ctx->pc = 0x167cc4u;
    // NOP operation, no action needed for VU0
    // 0x167cc8: 0x4a0002ff  vnop
    ctx->pc = 0x167cc8u;
    // NOP operation, no action needed for VU0
    // 0x167ccc: 0x4a0002ff  vnop
    ctx->pc = 0x167cccu;
    // NOP operation, no action needed for VU0
    // 0x167cd0: 0x4a0002ff  vnop
    ctx->pc = 0x167cd0u;
    // NOP operation, no action needed for VU0
    // 0x167cd4: 0x4a0002ff  vnop
    ctx->pc = 0x167cd4u;
    // NOP operation, no action needed for VU0
    // 0x167cd8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167cd8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167cdc: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167ce0: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167ce4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x167CE4u;
    {
        const bool branch_taken_0x167ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CE4u;
        // 0x167ce8: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ce4) {
            ctx->pc = 0x167D30u;
            return;
        }
    }
    ctx->pc = 0x167CECu;
    // 0x167cec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167cf0: 0xc06164c  jal         func_185930
    ctx->pc = 0x167CF0u;
    SET_GPR_U32(ctx, 31, 0x167CF8u);
    ctx->pc = 0x167CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CF0u;
    // 0x167cf4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167CF0u, 0x167CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CF8u;
label_167cf8:
    // 0x167cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167cfc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167d00: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x167d00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167d04: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x167d04u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167d08: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x167d08u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167d0c: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x167d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x167d10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x167d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167d14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x167d14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d18: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x167d18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x167d1c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x167d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167d20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167d24: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x167D24u;
    SET_GPR_U32(ctx, 31, 0x167D2Cu);
    ctx->pc = 0x167D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167D24u;
    // 0x167d28: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x167D24u, 0x167D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D2Cu;
label_167d2c:
    // 0x167d2c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x167d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x167d30u;
}
