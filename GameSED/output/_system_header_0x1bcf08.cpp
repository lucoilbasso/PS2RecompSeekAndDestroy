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

// Function: _system_header
// Address: 0x1bcf08 - 0x1bcf74
void _system_header_0x1bcf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_system_header_0x1bcf08");
#endif

    switch (ctx->pc) {
        case 0x1bcf24u: goto label_1bcf24;
        case 0x1bcf34u: goto label_1bcf34;
        case 0x1bcf40u: goto label_1bcf40;
        case 0x1bcf4cu: goto label_1bcf4c;
        case 0x1bcf58u: goto label_1bcf58;
        default: break;
    }

    ctx->pc = 0x1bcf08u;

    // 0x1bcf08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bcf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bcf0c: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1bcf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1bcf10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bcf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bcf14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1bcf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1bcf18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bcf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bcf1c: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCF1Cu;
    SET_GPR_U32(ctx, 31, 0x1BCF24u);
    ctx->pc = 0x1BCF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF1Cu;
    // 0x1bcf20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCF1Cu, 0x1BCF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF24u;
label_1bcf24:
    // 0x1bcf24: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bcf24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcf28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf2c: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCF2Cu;
    SET_GPR_U32(ctx, 31, 0x1BCF34u);
    ctx->pc = 0x1BCF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF2Cu;
    // 0x1bcf30: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCF2Cu, 0x1BCF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF34u;
label_1bcf34:
    // 0x1bcf34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCF34u;
    {
        const bool branch_taken_0x1bcf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF34u;
        // 0x1bcf38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf34) {
            ctx->pc = 0x1BCF50u;
            goto label_1bcf50;
        }
    }
    ctx->pc = 0x1BCF3Cu;
    // 0x1bcf3c: 0x0  nop
    ctx->pc = 0x1bcf3cu;
    // NOP
label_1bcf40:
    // 0x1bcf40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf44: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BCF44u;
    SET_GPR_U32(ctx, 31, 0x1BCF4Cu);
    ctx->pc = 0x1BCF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF44u;
    // 0x1bcf48: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BCF44u, 0x1BCF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF4Cu;
label_1bcf4c:
    // 0x1bcf4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bcf50:
    // 0x1bcf50: 0xc07100a  jal         func_1C4028
    ctx->pc = 0x1BCF50u;
    SET_GPR_U32(ctx, 31, 0x1BCF58u);
    ctx->pc = 0x1BCF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF50u;
    // 0x1bcf54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4028u, 0x1BCF50u, 0x1BCF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF58u;
label_1bcf58:
    // 0x1bcf58: 0x1051fff9  beq         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BCF58u;
    {
        const bool branch_taken_0x1bcf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1BCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF58u;
        // 0x1bcf5c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf58) {
            ctx->pc = 0x1BCF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcf40;
        }
    }
    ctx->pc = 0x1BCF60u;
    // 0x1bcf60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcf64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1bcf64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcf68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bcf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF6Cu;
        // 0x1bcf70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCF74u;
}
