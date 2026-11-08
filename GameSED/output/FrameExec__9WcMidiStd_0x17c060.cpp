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

// Function: FrameExec__9WcMidiStd
// Address: 0x17c060 - 0x17c0e8
void FrameExec__9WcMidiStd_0x17c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FrameExec__9WcMidiStd_0x17c060");
#endif

    switch (ctx->pc) {
        case 0x17c080u: goto label_17c080;
        case 0x17c08cu: goto label_17c08c;
        case 0x17c0a0u: goto label_17c0a0;
        case 0x17c0b8u: goto label_17c0b8;
        case 0x17c0c4u: goto label_17c0c4;
        default: break;
    }

    ctx->pc = 0x17c060u;

    // 0x17c060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17c064: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x17c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x17c068: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x17c068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17c06c: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17c06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17c070: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x17c070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x17c074: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17c074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17c078: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x17c078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17c07c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17c07cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c080:
    // 0x17c080: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x17c080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17c084: 0xc06bd34  jal         func_1AF4D0
    ctx->pc = 0x17C084u;
    SET_GPR_U32(ctx, 31, 0x17C08Cu);
    ctx->pc = 0x17C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C084u;
    // 0x17c088: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4D0u, 0x17C084u, 0x17C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C08Cu;
label_17c08c:
    // 0x17c08c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c090: 0x1052000c  beq         $v0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x17C090u;
    {
        const bool branch_taken_0x17c090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x17C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C090u;
        // 0x17c094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c090) {
            ctx->pc = 0x17C0C4u;
            goto label_17c0c4;
        }
    }
    ctx->pc = 0x17C098u;
    // 0x17c098: 0xc05ea22  jal         func_17A888
    ctx->pc = 0x17C098u;
    SET_GPR_U32(ctx, 31, 0x17C0A0u);
    ctx->pc = 0x17A888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A888u, 0x17C098u, 0x17C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0A0u;
label_17c0a0:
    // 0x17c0a0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x17c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x17c0a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C0A4u;
    {
        const bool branch_taken_0x17c0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0A4u;
        // 0x17c0a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0a4) {
            ctx->pc = 0x17C0BCu;
            goto label_17c0bc;
        }
    }
    ctx->pc = 0x17C0ACu;
    // 0x17c0ac: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17c0b0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17C0B0u;
    SET_GPR_U32(ctx, 31, 0x17C0B8u);
    ctx->pc = 0x17C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0B0u;
    // 0x17c0b4: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17C0B0u, 0x17C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0B8u;
label_17c0b8:
    // 0x17c0b8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_17c0bc:
    // 0x17c0bc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17C0BCu;
    SET_GPR_U32(ctx, 31, 0x17C0C4u);
    ctx->pc = 0x17C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C0BCu;
    // 0x17c0c0: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17C0BCu, 0x17C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C0C4u;
label_17c0c4:
    // 0x17c0c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17c0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17c0c8: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17C0C8u;
    {
        const bool branch_taken_0x17c0c8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0C8u;
        // 0x17c0cc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c0c8) {
            ctx->pc = 0x17C080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c080;
        }
    }
    ctx->pc = 0x17C0D0u;
    // 0x17c0d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17c0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c0d4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17c0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c0d8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x17c0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c0dc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x17c0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17c0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x17C0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C0E0u;
        // 0x17c0e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C0E8u;
}
