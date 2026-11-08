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

// Function: StdCommandSystemMute__8WcSndStdb
// Address: 0x17b008 - 0x17b0b4
void StdCommandSystemMute__8WcSndStdb_0x17b008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StdCommandSystemMute__8WcSndStdb_0x17b008");
#endif

    switch (ctx->pc) {
        case 0x17b050u: goto label_17b050;
        case 0x17b064u: goto label_17b064;
        default: break;
    }

    ctx->pc = 0x17b008u;

    // 0x17b008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b00c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17b010: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17b014: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17b014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17b01c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b020: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x17b020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17b024: 0x3401c034  ori         $at, $zero, 0xC034
    ctx->pc = 0x17b024u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49204);
    // 0x17b028: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x17b028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x17b02c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b030: 0x1051001b  beq         $v0, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x17B030u;
    {
        const bool branch_taken_0x17b030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x17B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B030u;
        // 0x17b034: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b030) {
            ctx->pc = 0x17B0A0u;
            goto label_17b0a0;
        }
    }
    ctx->pc = 0x17B038u;
    // 0x17b038: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x17b038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x17b03c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x17b03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17b040: 0x24440250  addiu       $a0, $v0, 0x250
    ctx->pc = 0x17b040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x17b044: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b048: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17b048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b04c: 0x0  nop
    ctx->pc = 0x17b04cu;
    // NOP
label_17b050:
    // 0x17b050: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b054: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17B054u;
    {
        const bool branch_taken_0x17b054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B054u;
        // 0x17b058: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b054) {
            ctx->pc = 0x17B070u;
            goto label_17b070;
        }
    }
    ctx->pc = 0x17B05Cu;
    // 0x17b05c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17B05Cu;
    SET_GPR_U32(ctx, 31, 0x17B064u);
    ctx->pc = 0x17B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B05Cu;
    // 0x17b060: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17B05Cu, 0x17B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B064u;
label_17b064:
    // 0x17b064: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17B064u;
    {
        const bool branch_taken_0x17b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B064u;
        // 0x17b068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b064) {
            ctx->pc = 0x17B084u;
            goto label_17b084;
        }
    }
    ctx->pc = 0x17B06Cu;
    // 0x17b06c: 0x0  nop
    ctx->pc = 0x17b06cu;
    // NOP
label_17b070:
    // 0x17b070: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17b070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17b074: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x17b074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17b078: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17B078u;
    {
        const bool branch_taken_0x17b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B078u;
        // 0x17b07c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b078) {
            ctx->pc = 0x17B050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b050;
        }
    }
    ctx->pc = 0x17B080u;
    // 0x17b080: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b084:
    // 0x17b084: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17b088: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17b088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b08c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x17b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x17b090: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x17b090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x17b094: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x17b094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x17b098: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x17b098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x17b09c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_17b0a0:
    // 0x17b0a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b0a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b0a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17b0a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x17B0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0ACu;
        // 0x17b0b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B0B4u;
}
