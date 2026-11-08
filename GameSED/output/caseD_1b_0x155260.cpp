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

// Function: caseD_1b
// Address: 0x155260 - 0x155298
void caseD_1b_0x155260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1b_0x155260");
#endif

    switch (ctx->pc) {
        case 0x155268u: goto label_155268;
        default: break;
    }

    ctx->pc = 0x155260u;

    // 0x155260: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x155260u;
    SET_GPR_U32(ctx, 31, 0x155268u);
    ctx->pc = 0x155264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155260u;
    // 0x155264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x155260u, 0x155268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155268u;
label_155268:
    // 0x155268: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x155268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15526c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155270: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x155270u;
    {
        const bool branch_taken_0x155270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155270u;
        // 0x155274: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155270) {
            ctx->pc = 0x1552A8u;
            return;
        }
    }
    ctx->pc = 0x155278u;
    // 0x155278: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x155278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15527c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15527Cu;
    {
        const bool branch_taken_0x15527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15527Cu;
        // 0x155280: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15527c) {
            ctx->pc = 0x155298u;
            return;
        }
    }
    ctx->pc = 0x155284u;
    // 0x155284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155288: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x155288u;
    {
        const bool branch_taken_0x155288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155288) {
            ctx->pc = 0x15528Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155288u;
            // 0x15528c: 0x260406dc  addiu       $a0, $s0, 0x6DC (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1552ACu;
            return;
        }
    }
    ctx->pc = 0x155290u;
    // 0x155290: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155290u;
    {
        const bool branch_taken_0x155290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155290) {
            ctx->pc = 0x1552ACu;
            return;
        }
    }
    ctx->pc = 0x155298u;
}
