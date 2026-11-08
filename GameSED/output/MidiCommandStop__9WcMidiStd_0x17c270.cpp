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

// Function: MidiCommandStop__9WcMidiStd
// Address: 0x17c270 - 0x17c304
void MidiCommandStop__9WcMidiStd_0x17c270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MidiCommandStop__9WcMidiStd_0x17c270");
#endif

    switch (ctx->pc) {
        case 0x17c290u: goto label_17c290;
        case 0x17c2a4u: goto label_17c2a4;
        default: break;
    }

    ctx->pc = 0x17c270u;

    // 0x17c270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17c270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c274: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17c274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c278: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17c27c: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x17c27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x17c280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c284: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17c284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17c288: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x17c288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17c28c: 0x0  nop
    ctx->pc = 0x17c28cu;
    // NOP
label_17c290:
    // 0x17c290: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c294: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C294u;
    {
        const bool branch_taken_0x17c294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C294u;
        // 0x17c298: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c294) {
            ctx->pc = 0x17C2B0u;
            goto label_17c2b0;
        }
    }
    ctx->pc = 0x17C29Cu;
    // 0x17c29c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C29Cu;
    SET_GPR_U32(ctx, 31, 0x17C2A4u);
    ctx->pc = 0x17C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C29Cu;
    // 0x17c2a0: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C29Cu, 0x17C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C2A4u;
label_17c2a4:
    // 0x17c2a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C2A4u;
    {
        const bool branch_taken_0x17c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2A4u;
        // 0x17c2a8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2a4) {
            ctx->pc = 0x17C2C4u;
            goto label_17c2c4;
        }
    }
    ctx->pc = 0x17C2ACu;
    // 0x17c2ac: 0x0  nop
    ctx->pc = 0x17c2acu;
    // NOP
label_17c2b0:
    // 0x17c2b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17c2b4: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x17c2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17c2b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17C2B8u;
    {
        const bool branch_taken_0x17c2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2B8u;
        // 0x17c2bc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c2b8) {
            ctx->pc = 0x17C290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c290;
        }
    }
    ctx->pc = 0x17C2C0u;
    // 0x17c2c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17c2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c2c4:
    // 0x17c2c4: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x17c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17c2c8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x17c2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17c2cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c2ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c2d0: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x17c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x17c2d4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x17c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x17c2d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17c2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c2dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17c2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c2e0: 0xace20040  sw          $v0, 0x40($a3)
    ctx->pc = 0x17c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 2));
    // 0x17c2e4: 0xace5004c  sw          $a1, 0x4C($a3)
    ctx->pc = 0x17c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 5));
    // 0x17c2e8: 0xace00044  sw          $zero, 0x44($a3)
    ctx->pc = 0x17c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 0));
    // 0x17c2ec: 0xace00050  sw          $zero, 0x50($a3)
    ctx->pc = 0x17c2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 0));
    // 0x17c2f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17c2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17c2f4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x17c2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x17c2f8: 0xac26c05c  sw          $a2, -0x3FA4($at)
    ctx->pc = 0x17c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294951004), GPR_U32(ctx, 6));
    // 0x17c2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17C2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C2FCu;
        // 0x17c300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C304u;
}
