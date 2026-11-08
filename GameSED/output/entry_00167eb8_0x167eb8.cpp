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

// Function: entry_00167eb8
// Address: 0x167eb8 - 0x167f64
void entry_00167eb8_0x167eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167eb8_0x167eb8");
#endif

    switch (ctx->pc) {
        case 0x167f2cu: goto label_167f2c;
        case 0x167f60u: goto label_167f60;
        default: break;
    }

    ctx->pc = 0x167eb8u;

    // 0x167eb8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x167eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x167ebc: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x167ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x167ec0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x167ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167ec4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x167ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167ec8: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x167EC8u;
    {
        const bool branch_taken_0x167ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EC8u;
        // 0x167ecc: 0x8fa201f4  lw          $v0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ec8) {
            ctx->pc = 0x168074u;
            return;
        }
    }
    ctx->pc = 0x167ED0u;
    // 0x167ed0: 0x8fa701f0  lw          $a3, 0x1F0($sp)
    ctx->pc = 0x167ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x167ed4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x167ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x167ed8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x167ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x167edc: 0x8ce301b4  lw          $v1, 0x1B4($a3)
    ctx->pc = 0x167edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x167ee0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x167ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x167ee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167ee8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x167ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167eec: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x167eecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167ef0: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x167ef0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x167ef4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x167ef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x167ef8: 0x4a0002ff  vnop
    ctx->pc = 0x167ef8u;
    // NOP operation, no action needed for VU0
    // 0x167efc: 0x4a0002ff  vnop
    ctx->pc = 0x167efcu;
    // NOP operation, no action needed for VU0
    // 0x167f00: 0x4a0002ff  vnop
    ctx->pc = 0x167f00u;
    // NOP operation, no action needed for VU0
    // 0x167f04: 0x4a0002ff  vnop
    ctx->pc = 0x167f04u;
    // NOP operation, no action needed for VU0
    // 0x167f08: 0x4a0002ff  vnop
    ctx->pc = 0x167f08u;
    // NOP operation, no action needed for VU0
    // 0x167f0c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x167f0cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x167f10: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x167f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x167f14: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x167f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x167f18: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x167F18u;
    {
        const bool branch_taken_0x167f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F18u;
        // 0x167f1c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f18) {
            ctx->pc = 0x167F64u;
            return;
        }
    }
    ctx->pc = 0x167F20u;
    // 0x167f20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f24: 0xc06164c  jal         func_185930
    ctx->pc = 0x167F24u;
    SET_GPR_U32(ctx, 31, 0x167F2Cu);
    ctx->pc = 0x167F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F24u;
    // 0x167f28: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x167F24u, 0x167F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F2Cu;
label_167f2c:
    // 0x167f2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f30: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x167f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167f34: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x167f34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167f38: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x167f38u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x167f3c: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x167f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x167f40: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x167f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x167f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167f48: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x167f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x167f4c: 0x3c3100b  movn        $v0, $fp, $v1
    ctx->pc = 0x167f4cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
    // 0x167f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x167f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167f54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x167f58: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x167F58u;
    SET_GPR_U32(ctx, 31, 0x167F60u);
    ctx->pc = 0x167F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F58u;
    // 0x167f5c: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x167F58u, 0x167F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F60u;
label_167f60:
    // 0x167f60: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x167f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x167f64u;
}
