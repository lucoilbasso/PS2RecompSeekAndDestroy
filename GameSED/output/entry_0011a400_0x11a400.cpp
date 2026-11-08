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

// Function: entry_0011a400
// Address: 0x11a400 - 0x11a418
void entry_0011a400_0x11a400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a400_0x11a400");
#endif

    switch (ctx->pc) {
        case 0x11a410u: goto label_11a410;
        default: break;
    }

    ctx->pc = 0x11a400u;

    // 0x11a400: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A400u;
    {
        const bool branch_taken_0x11a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A400u;
        // 0x11a404: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a400) {
            ctx->pc = 0x11A418u;
            return;
        }
    }
    ctx->pc = 0x11A408u;
    // 0x11a408: 0xc045e58  jal         func_117960
    ctx->pc = 0x11A408u;
    SET_GPR_U32(ctx, 31, 0x11A410u);
    ctx->pc = 0x11A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A408u;
    // 0x11a40c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117960u, 0x11A408u, 0x11A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A410u;
label_11a410:
    // 0x11a410: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11A410u;
    {
        const bool branch_taken_0x11a410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A410u;
        // 0x11a414: 0x8f838968  lw          $v1, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a410) {
            ctx->pc = 0x11A424u;
            return;
        }
    }
    ctx->pc = 0x11A418u;
}
