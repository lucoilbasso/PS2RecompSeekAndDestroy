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

// Function: entry_00170400
// Address: 0x170400 - 0x170420
void entry_00170400_0x170400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170400_0x170400");
#endif

    switch (ctx->pc) {
        case 0x170408u: goto label_170408;
        case 0x170418u: goto label_170418;
        default: break;
    }

    ctx->pc = 0x170400u;

    // 0x170400: 0xc05c65c  jal         func_171970
    ctx->pc = 0x170400u;
    SET_GPR_U32(ctx, 31, 0x170408u);
    ctx->pc = 0x170404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170400u;
    // 0x170404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171970u, 0x170400u, 0x170408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170408u;
label_170408:
    // 0x170408: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170408u;
    {
        const bool branch_taken_0x170408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170408u;
        // 0x17040c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170408) {
            ctx->pc = 0x170420u;
            return;
        }
    }
    ctx->pc = 0x170410u;
    // 0x170410: 0xc05c5fe  jal         func_1717F8
    ctx->pc = 0x170410u;
    SET_GPR_U32(ctx, 31, 0x170418u);
    ctx->pc = 0x1717F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717F8u, 0x170410u, 0x170418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170418u;
label_170418:
    // 0x170418: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x170418u;
    {
        const bool branch_taken_0x170418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x170418) {
            ctx->pc = 0x1703F8u;
            return;
        }
    }
    ctx->pc = 0x170420u;
}
