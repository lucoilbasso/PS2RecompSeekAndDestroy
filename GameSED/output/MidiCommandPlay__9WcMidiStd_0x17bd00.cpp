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

// Function: MidiCommandPlay__9WcMidiStd
// Address: 0x17bd00 - 0x17bda8
void MidiCommandPlay__9WcMidiStd_0x17bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MidiCommandPlay__9WcMidiStd_0x17bd00");
#endif

    switch (ctx->pc) {
        case 0x17bd40u: goto label_17bd40;
        case 0x17bd54u: goto label_17bd54;
        default: break;
    }

    ctx->pc = 0x17bd00u;

    // 0x17bd00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bd04: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17bd08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17bd0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bd10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bd14: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x17bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17bd18: 0x3411c034  ori         $s1, $zero, 0xC034
    ctx->pc = 0x17bd18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x17bd1c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x17bd1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x17bd20: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x17bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x17bd24: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17BD24u;
    {
        const bool branch_taken_0x17bd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD24u;
        // 0x17bd28: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd24) {
            ctx->pc = 0x17BD94u;
            goto label_17bd94;
        }
    }
    ctx->pc = 0x17BD2Cu;
    // 0x17bd2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17bd2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd30: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17bd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17bd34: 0x24440250  addiu       $a0, $v0, 0x250
    ctx->pc = 0x17bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x17bd38: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x17bd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x17bd3c: 0x0  nop
    ctx->pc = 0x17bd3cu;
    // NOP
label_17bd40:
    // 0x17bd40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17bd44: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BD44u;
    {
        const bool branch_taken_0x17bd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD44u;
        // 0x17bd48: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd44) {
            ctx->pc = 0x17BD60u;
            goto label_17bd60;
        }
    }
    ctx->pc = 0x17BD4Cu;
    // 0x17bd4c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17BD4Cu;
    SET_GPR_U32(ctx, 31, 0x17BD54u);
    ctx->pc = 0x17BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD4Cu;
    // 0x17bd50: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17BD4Cu, 0x17BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD54u;
label_17bd54:
    // 0x17bd54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BD54u;
    {
        const bool branch_taken_0x17bd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD54u;
        // 0x17bd58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd54) {
            ctx->pc = 0x17BD74u;
            goto label_17bd74;
        }
    }
    ctx->pc = 0x17BD5Cu;
    // 0x17bd5c: 0x0  nop
    ctx->pc = 0x17bd5cu;
    // NOP
label_17bd60:
    // 0x17bd60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17bd64: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x17bd64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17bd68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17BD68u;
    {
        const bool branch_taken_0x17bd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD68u;
        // 0x17bd6c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd68) {
            ctx->pc = 0x17BD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bd40;
        }
    }
    ctx->pc = 0x17BD70u;
    // 0x17bd70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bd74:
    // 0x17bd74: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17bd78: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x17bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x17bd7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bd80: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x17bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x17bd84: 0xaca2004c  sw          $v0, 0x4C($a1)
    ctx->pc = 0x17bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
    // 0x17bd88: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x17bd88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x17bd8c: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x17bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x17bd90: 0xae240028  sw          $a0, 0x28($s1)
    ctx->pc = 0x17bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 4));
label_17bd94:
    // 0x17bd94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17bd94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17bd98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bd9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bda0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BDA0u;
        // 0x17bda4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BDA8u;
}
