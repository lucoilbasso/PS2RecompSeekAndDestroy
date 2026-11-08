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

// Function: entry_001a0828
// Address: 0x1a0828 - 0x1a0850
void entry_001a0828_0x1a0828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0828_0x1a0828");
#endif

    switch (ctx->pc) {
        case 0x1a0848u: goto label_1a0848;
        default: break;
    }

    ctx->pc = 0x1a0828u;

    // 0x1a0828: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0828u;
    {
        const bool branch_taken_0x1a0828 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0828) {
            ctx->pc = 0x1A082Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0828u;
            // 0x1a082c: 0x2a020035  slti        $v0, $s0, 0x35 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)53) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0850u;
            return;
        }
    }
    ctx->pc = 0x1A0830u;
    // 0x1a0830: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x1a0830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1a0834: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a0834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a0838: 0x24a59058  addiu       $a1, $a1, -0x6FA8
    ctx->pc = 0x1a0838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938712));
    // 0x1a083c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a083cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0840: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x1A0840u;
    SET_GPR_U32(ctx, 31, 0x1A0848u);
    ctx->pc = 0x1A0844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0840u;
    // 0x1a0844: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x1A0840u, 0x1A0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0848u;
label_1a0848:
    // 0x1a0848: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A0848u;
    {
        const bool branch_taken_0x1a0848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0848u;
        // 0x1a084c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0848) {
            ctx->pc = 0x1A0874u;
            return;
        }
    }
    ctx->pc = 0x1A0850u;
}
