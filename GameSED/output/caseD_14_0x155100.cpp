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

// Function: caseD_14
// Address: 0x155100 - 0x155148
void caseD_14_0x155100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x155100");
#endif

    switch (ctx->pc) {
        case 0x155108u: goto label_155108;
        case 0x155114u: goto label_155114;
        default: break;
    }

    ctx->pc = 0x155100u;

    // 0x155100: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x155100u;
    SET_GPR_U32(ctx, 31, 0x155108u);
    ctx->pc = 0x155104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155100u;
    // 0x155104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x155100u, 0x155108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155108u;
label_155108:
    // 0x155108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x155108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15510c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x15510Cu;
    SET_GPR_U32(ctx, 31, 0x155114u);
    ctx->pc = 0x155110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15510Cu;
    // 0x155110: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x15510Cu, 0x155114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155114u;
label_155114:
    // 0x155114: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155118: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15511c: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15511Cu;
    {
        const bool branch_taken_0x15511c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x155120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15511Cu;
        // 0x155120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15511c) {
            ctx->pc = 0x155160u;
            return;
        }
    }
    ctx->pc = 0x155124u;
    // 0x155124: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x155124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x155128: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155128u;
    {
        const bool branch_taken_0x155128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155128u;
        // 0x15512c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155128) {
            ctx->pc = 0x155148u;
            return;
        }
    }
    ctx->pc = 0x155130u;
    // 0x155130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155134: 0x52220010  beql        $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x155134u;
    {
        const bool branch_taken_0x155134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x155134) {
            ctx->pc = 0x155138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155134u;
            // 0x155138: 0x260406dc  addiu       $a0, $s0, 0x6DC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155178u;
            return;
        }
    }
    ctx->pc = 0x15513Cu;
    // 0x15513c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15513Cu;
    {
        const bool branch_taken_0x15513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15513c) {
            ctx->pc = 0x155178u;
            return;
        }
    }
    ctx->pc = 0x155144u;
    // 0x155144: 0x0  nop
    ctx->pc = 0x155144u;
    // NOP
    ctx->pc = 0x155148u;
}
