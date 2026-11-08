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

// Function: entry_0010fc28
// Address: 0x10fc28 - 0x10fc98
void entry_0010fc28_0x10fc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc28_0x10fc28");
#endif

    switch (ctx->pc) {
        case 0x10fc70u: goto label_10fc70;
        default: break;
    }

    ctx->pc = 0x10fc28u;

    // 0x10fc28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x10fc28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10fc2c: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x10fc2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10fc30: 0x4a0002ff  vnop
    ctx->pc = 0x10fc30u;
    // NOP operation, no action needed for VU0
    // 0x10fc34: 0x4a0002ff  vnop
    ctx->pc = 0x10fc34u;
    // NOP operation, no action needed for VU0
    // 0x10fc38: 0x4a0002ff  vnop
    ctx->pc = 0x10fc38u;
    // NOP operation, no action needed for VU0
    // 0x10fc3c: 0x4a0002ff  vnop
    ctx->pc = 0x10fc3cu;
    // NOP operation, no action needed for VU0
    // 0x10fc40: 0x4a0002ff  vnop
    ctx->pc = 0x10fc40u;
    // NOP operation, no action needed for VU0
    // 0x10fc44: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x10fc44u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x10fc48: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x10fc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x10fc4c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x10fc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x10fc50: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x10FC50u;
    {
        const bool branch_taken_0x10fc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC50u;
        // 0x10fc54: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc50) {
            ctx->pc = 0x10FCE8u;
            return;
        }
    }
    ctx->pc = 0x10FC58u;
    // 0x10fc58: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x10fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10fc5c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x10fc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x10fc60: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x10fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x10fc64: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x10fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x10fc68: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x10FC68u;
    SET_GPR_U32(ctx, 31, 0x10FC70u);
    ctx->pc = 0x10FC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC68u;
    // 0x10fc6c: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x10FC68u, 0x10FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FC70u;
label_10fc70:
    // 0x10fc70: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10FC70u;
    {
        const bool branch_taken_0x10fc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC70u;
        // 0x10fc74: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc70) {
            ctx->pc = 0x10FCC4u;
            return;
        }
    }
    ctx->pc = 0x10FC78u;
    // 0x10fc78: 0x8f83911c  lw          $v1, -0x6EE4($gp)
    ctx->pc = 0x10fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
    // 0x10fc7c: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x10fc7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x10fc80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FC80u;
    {
        const bool branch_taken_0x10fc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC80u;
        // 0x10fc84: 0xaf809120  sw          $zero, -0x6EE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc80) {
            ctx->pc = 0x10FC98u;
            return;
        }
    }
    ctx->pc = 0x10FC88u;
    // 0x10fc88: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x10fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10fc8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10fc8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10FC90u;
    {
        const bool branch_taken_0x10fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC90u;
        // 0x10fc94: 0xaf82911c  sw          $v0, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc90) {
            ctx->pc = 0x10FC9Cu;
            return;
        }
    }
    ctx->pc = 0x10FC98u;
}
