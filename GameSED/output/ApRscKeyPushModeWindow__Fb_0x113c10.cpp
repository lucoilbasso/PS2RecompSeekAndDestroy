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

// Function: ApRscKeyPushModeWindow__Fb
// Address: 0x113c10 - 0x113ce0
void ApRscKeyPushModeWindow__Fb_0x113c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRscKeyPushModeWindow__Fb_0x113c10");
#endif

    switch (ctx->pc) {
        case 0x113c50u: goto label_113c50;
        case 0x113c84u: goto label_113c84;
        default: break;
    }

    ctx->pc = 0x113c10u;

    // 0x113c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113c14: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x113c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113c18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x113c1c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x113c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x113c20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x113c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x113c24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x113c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113c2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x113c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x113c30: 0x8f839124  lw          $v1, -0x6EDC($gp)
    ctx->pc = 0x113c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x113c34: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x113c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x113c38: 0x14650012  bne         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x113C38u;
    {
        const bool branch_taken_0x113c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x113C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C38u;
        // 0x113c3c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c38) {
            ctx->pc = 0x113C84u;
            goto label_113c84;
        }
    }
    ctx->pc = 0x113C40u;
    // 0x113c40: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x113c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x113c44: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x113c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x113c48: 0x24430730  addiu       $v1, $v0, 0x730
    ctx->pc = 0x113c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
    // 0x113c4c: 0x0  nop
    ctx->pc = 0x113c4cu;
    // NOP
label_113c50:
    // 0x113c50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x113c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113c54: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x113c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x113c58: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x113c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x113c5c: 0x0  nop
    ctx->pc = 0x113c5cu;
    // NOP
    // 0x113c60: 0x0  nop
    ctx->pc = 0x113c60u;
    // NOP
    // 0x113c64: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113C64u;
    {
        const bool branch_taken_0x113c64 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x113C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C64u;
        // 0x113c68: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c64) {
            ctx->pc = 0x113C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113c50;
        }
    }
    ctx->pc = 0x113C6Cu;
    // 0x113c6c: 0x8f829124  lw          $v0, -0x6EDC($gp)
    ctx->pc = 0x113c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x113c70: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x113c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x113c74: 0x24844248  addiu       $a0, $a0, 0x4248
    ctx->pc = 0x113c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16968));
    // 0x113c78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x113c7c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x113C7Cu;
    SET_GPR_U32(ctx, 31, 0x113C84u);
    ctx->pc = 0x113C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C7Cu;
    // 0x113c80: 0xaf829124  sw          $v0, -0x6EDC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x113C7Cu, 0x113C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C84u;
label_113c84:
    // 0x113c84: 0x8f829124  lw          $v0, -0x6EDC($gp)
    ctx->pc = 0x113c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x113c88: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x113c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x113c8c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x113c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x113c90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113c94: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x113c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x113c98: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x113c98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x113c9c: 0xac230730  sw          $v1, 0x730($at)
    ctx->pc = 0x113c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1840), GPR_U32(ctx, 3));
    // 0x113ca0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x113CA0u;
    {
        const bool branch_taken_0x113ca0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CA0u;
        // 0x113ca4: 0xaf849124  sw          $a0, -0x6EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ca0) {
            ctx->pc = 0x113CBCu;
            goto label_113cbc;
        }
    }
    ctx->pc = 0x113CA8u;
    // 0x113ca8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x113ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x113cac: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x113cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x113cb0: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x113cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x113cb4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x113cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x113cb8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x113cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_113cbc:
    // 0x113cbc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x113cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x113cc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113cc4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x113cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x113cc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x113cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113ccc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x113cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x113cd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x113cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113cd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x113CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CD8u;
        // 0x113cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113CE0u;
}
