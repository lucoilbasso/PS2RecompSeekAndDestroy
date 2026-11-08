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

// Function: FrameExec__8WcSndStd
// Address: 0x17ad18 - 0x17ada0
void FrameExec__8WcSndStd_0x17ad18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FrameExec__8WcSndStd_0x17ad18");
#endif

    switch (ctx->pc) {
        case 0x17ad38u: goto label_17ad38;
        case 0x17ad44u: goto label_17ad44;
        case 0x17ad58u: goto label_17ad58;
        case 0x17ad70u: goto label_17ad70;
        case 0x17ad7cu: goto label_17ad7c;
        default: break;
    }

    ctx->pc = 0x17ad18u;

    // 0x17ad18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ad18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ad1c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17ad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x17ad20: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17ad20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17ad24: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17ad24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17ad28: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x17ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17ad2c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17ad2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17ad30: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x17ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17ad34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17ad34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ad38:
    // 0x17ad38: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x17ad38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17ad3c: 0xc06bd34  jal         func_1AF4D0
    ctx->pc = 0x17AD3Cu;
    SET_GPR_U32(ctx, 31, 0x17AD44u);
    ctx->pc = 0x17AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD3Cu;
    // 0x17ad40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4D0u, 0x17AD3Cu, 0x17AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD44u;
label_17ad44:
    // 0x17ad44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ad48: 0x1052000c  beq         $v0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x17AD48u;
    {
        const bool branch_taken_0x17ad48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x17AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD48u;
        // 0x17ad4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad48) {
            ctx->pc = 0x17AD7Cu;
            goto label_17ad7c;
        }
    }
    ctx->pc = 0x17AD50u;
    // 0x17ad50: 0xc05ea22  jal         func_17A888
    ctx->pc = 0x17AD50u;
    SET_GPR_U32(ctx, 31, 0x17AD58u);
    ctx->pc = 0x17A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A888u, 0x17AD50u, 0x17AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD58u;
label_17ad58:
    // 0x17ad58: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x17ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x17ad5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17AD5Cu;
    {
        const bool branch_taken_0x17ad5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD5Cu;
        // 0x17ad60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad5c) {
            ctx->pc = 0x17AD74u;
            goto label_17ad74;
        }
    }
    ctx->pc = 0x17AD64u;
    // 0x17ad64: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17ad68: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17AD68u;
    SET_GPR_U32(ctx, 31, 0x17AD70u);
    ctx->pc = 0x17AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD68u;
    // 0x17ad6c: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17AD68u, 0x17AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD70u;
label_17ad70:
    // 0x17ad70: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17ad70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_17ad74:
    // 0x17ad74: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17AD74u;
    SET_GPR_U32(ctx, 31, 0x17AD7Cu);
    ctx->pc = 0x17AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD74u;
    // 0x17ad78: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17AD74u, 0x17AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD7Cu;
label_17ad7c:
    // 0x17ad7c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17ad7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17ad80: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17AD80u;
    {
        const bool branch_taken_0x17ad80 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD80u;
        // 0x17ad84: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad80) {
            ctx->pc = 0x17AD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ad38;
        }
    }
    ctx->pc = 0x17AD88u;
    // 0x17ad88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17ad88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ad8c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17ad8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ad90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17ad90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ad94: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17ad94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17ad98: 0x3e00008  jr          $ra
    ctx->pc = 0x17AD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD98u;
        // 0x17ad9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ADA0u;
}
