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

// Function: WpadHardThreadProgram__FP8BcThread
// Address: 0x177bb0 - 0x177c44
void WpadHardThreadProgram__FP8BcThread_0x177bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WpadHardThreadProgram__FP8BcThread_0x177bb0");
#endif

    switch (ctx->pc) {
        case 0x177be0u: goto label_177be0;
        case 0x177be8u: goto label_177be8;
        case 0x177c08u: goto label_177c08;
        case 0x177c20u: goto label_177c20;
        default: break;
    }

    ctx->pc = 0x177bb0u;

    // 0x177bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177bb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177bb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177bbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177bc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x177bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x177bc4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x177bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x177bc8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x177bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x177bcc: 0x49000  sll         $s2, $a0, 0
    ctx->pc = 0x177bccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x177bd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x177bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bd8: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x177bd8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x177bdc: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x177bdcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
label_177be0:
    // 0x177be0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x177BE0u;
    SET_GPR_U32(ctx, 31, 0x177BE8u);
    ctx->pc = 0x177BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177BE0u;
    // 0x177be4: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x177BE0u, 0x177BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177BE8u;
label_177be8:
    // 0x177be8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x177be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177bf0: 0x2686e820  addiu       $a2, $s4, -0x17E0
    ctx->pc = 0x177bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961184));
    // 0x177bf4: 0xaf808cb0  sw          $zero, -0x7350($gp)
    ctx->pc = 0x177bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 0));
    // 0x177bf8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x177BF8u;
    {
        const bool branch_taken_0x177bf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x177bf8) {
            ctx->pc = 0x177C0Cu;
            goto label_177c0c;
        }
    }
    ctx->pc = 0x177C00u;
    // 0x177c00: 0xc05dd52  jal         func_177548
    ctx->pc = 0x177C00u;
    SET_GPR_U32(ctx, 31, 0x177C08u);
    ctx->pc = 0x177548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177548u, 0x177C00u, 0x177C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C08u;
label_177c08:
    // 0x177c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177c0c:
    // 0x177c0c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x177C0Cu;
    {
        const bool branch_taken_0x177c0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x177C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C0Cu;
        // 0x177c10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c0c) {
            ctx->pc = 0x177C24u;
            goto label_177c24;
        }
    }
    ctx->pc = 0x177C14u;
    // 0x177c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c18: 0xc05dd52  jal         func_177548
    ctx->pc = 0x177C18u;
    SET_GPR_U32(ctx, 31, 0x177C20u);
    ctx->pc = 0x177C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177C18u;
    // 0x177c1c: 0x2666e87c  addiu       $a2, $s3, -0x1784 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177548u, 0x177C18u, 0x177C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177C20u;
label_177c20:
    // 0x177c20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x177c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177c24:
    // 0x177c24: 0x1611ffee  bne         $s0, $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x177C24u;
    {
        const bool branch_taken_0x177c24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x177C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C24u;
        // 0x177c28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c24) {
            ctx->pc = 0x177BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177be0;
        }
    }
    ctx->pc = 0x177C2Cu;
    // 0x177c2c: 0x1602ffec  bne         $s0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x177C2Cu;
    {
        const bool branch_taken_0x177c2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x177c2c) {
            ctx->pc = 0x177BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177be0;
        }
    }
    ctx->pc = 0x177C34u;
    // 0x177c34: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x177c34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
    // 0x177c38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x177c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c3c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x177C3Cu;
    {
        const bool branch_taken_0x177c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C3Cu;
        // 0x177c40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c3c) {
            ctx->pc = 0x177BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177be0;
        }
    }
    ctx->pc = 0x177C44u;
}
