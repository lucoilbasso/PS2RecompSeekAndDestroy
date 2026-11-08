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

// Function: entry_001bcbec
// Address: 0x1bcbec - 0x1bcc48
void entry_001bcbec_0x1bcbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcbec_0x1bcbec");
#endif

    switch (ctx->pc) {
        case 0x1bcbf4u: goto label_1bcbf4;
        case 0x1bcc08u: goto label_1bcc08;
        case 0x1bcc1cu: goto label_1bcc1c;
        default: break;
    }

    ctx->pc = 0x1bcbecu;

    // 0x1bcbec: 0xc07100a  jal         func_1C4028
    ctx->pc = 0x1BCBECu;
    SET_GPR_U32(ctx, 31, 0x1BCBF4u);
    ctx->pc = 0x1BCBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCBECu;
    // 0x1bcbf0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4028u, 0x1BCBECu, 0x1BCBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCBF4u;
label_1bcbf4:
    // 0x1bcbf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bcbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcbf8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BCBF8u;
    {
        const bool branch_taken_0x1bcbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BCBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCBF8u;
        // 0x1bcbfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcbf8) {
            ctx->pc = 0x1BCC48u;
            return;
        }
    }
    ctx->pc = 0x1BCC00u;
    // 0x1bcc00: 0xc07100a  jal         func_1C4028
    ctx->pc = 0x1BCC00u;
    SET_GPR_U32(ctx, 31, 0x1BCC08u);
    ctx->pc = 0x1BCC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC00u;
    // 0x1bcc04: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4028u, 0x1BCC00u, 0x1BCC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC08u;
label_1bcc08:
    // 0x1bcc08: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1bcc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1bcc0c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BCC0Cu;
    {
        const bool branch_taken_0x1bcc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BCC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC0Cu;
        // 0x1bcc10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc0c) {
            ctx->pc = 0x1BCC48u;
            return;
        }
    }
    ctx->pc = 0x1BCC14u;
    // 0x1bcc14: 0xc07100a  jal         func_1C4028
    ctx->pc = 0x1BCC14u;
    SET_GPR_U32(ctx, 31, 0x1BCC1Cu);
    ctx->pc = 0x1BCC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC14u;
    // 0x1bcc18: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4028u, 0x1BCC14u, 0x1BCC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC1Cu;
label_1bcc1c:
    // 0x1bcc1c: 0x240301b9  addiu       $v1, $zero, 0x1B9
    ctx->pc = 0x1bcc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
    // 0x1bcc20: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BCC20u;
    {
        const bool branch_taken_0x1bcc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BCC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC20u;
        // 0x1bcc24: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc20) {
            ctx->pc = 0x1BCC48u;
            return;
        }
    }
    ctx->pc = 0x1BCC28u;
    // 0x1bcc28: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x1bcc28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1bcc2c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1bcc2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1bcc30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BCC30u;
    {
        const bool branch_taken_0x1bcc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC30u;
        // 0x1bcc34: 0x2c3102b  sltu        $v0, $s6, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc30) {
            ctx->pc = 0x1BCC50u;
            return;
        }
    }
    ctx->pc = 0x1BCC38u;
    // 0x1bcc38: 0x16a0ffb3  bnez        $s5, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1BCC38u;
    {
        const bool branch_taken_0x1bcc38 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC38u;
        // 0x1bcc3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcc38) {
            ctx->pc = 0x1BCB08u;
            return;
        }
    }
    ctx->pc = 0x1BCC40u;
    // 0x1bcc40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCC40u;
    {
        const bool branch_taken_0x1bcc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc40) {
            ctx->pc = 0x1BCC50u;
            return;
        }
    }
    ctx->pc = 0x1BCC48u;
}
