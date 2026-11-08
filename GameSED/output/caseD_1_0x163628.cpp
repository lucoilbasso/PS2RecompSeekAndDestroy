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

// Function: caseD_1
// Address: 0x163628 - 0x163658
void caseD_1_0x163628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x163628");
#endif

    switch (ctx->pc) {
        case 0x163630u: goto label_163630;
        case 0x16363cu: goto label_16363c;
        default: break;
    }

    ctx->pc = 0x163628u;

    // 0x163628: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x163628u;
    SET_GPR_U32(ctx, 31, 0x163630u);
    ctx->pc = 0x16362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163628u;
    // 0x16362c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x163628u, 0x163630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163630u;
label_163630:
    // 0x163630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163634: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x163634u;
    SET_GPR_U32(ctx, 31, 0x16363Cu);
    ctx->pc = 0x163638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163634u;
    // 0x163638: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x163634u, 0x16363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16363Cu;
label_16363c:
    // 0x16363c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16363cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163640: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x163640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x163644: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x163644u;
    {
        const bool branch_taken_0x163644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163644) {
            ctx->pc = 0x163648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163644u;
            // 0x163648: 0xae320044  sw          $s2, 0x44($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163658u;
            return;
        }
    }
    ctx->pc = 0x16364Cu;
    // 0x16364c: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x16364cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x163650: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x163650u;
    {
        const bool branch_taken_0x163650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163650u;
        // 0x163654: 0xae320040  sw          $s2, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163650) {
            ctx->pc = 0x1638CCu;
            return;
        }
    }
    ctx->pc = 0x163658u;
}
