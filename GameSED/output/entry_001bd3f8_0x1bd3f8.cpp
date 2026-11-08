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

// Function: entry_001bd3f8
// Address: 0x1bd3f8 - 0x1bd410
void entry_001bd3f8_0x1bd3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd3f8_0x1bd3f8");
#endif

    switch (ctx->pc) {
        case 0x1bd408u: goto label_1bd408;
        default: break;
    }

    ctx->pc = 0x1bd3f8u;

    // 0x1bd3f8: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1BD3F8u;
    {
        const bool branch_taken_0x1bd3f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3F8u;
        // 0x1bd3fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd3f8) {
            ctx->pc = 0x1BD4F8u;
            return;
        }
    }
    ctx->pc = 0x1BD400u;
    // 0x1bd400: 0xc07105e  jal         func_1C4178
    ctx->pc = 0x1BD400u;
    SET_GPR_U32(ctx, 31, 0x1BD408u);
    ctx->pc = 0x1BD404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD400u;
    // 0x1bd404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4178u, 0x1BD400u, 0x1BD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD408u;
label_1bd408:
    // 0x1bd408: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1BD408u;
    {
        const bool branch_taken_0x1bd408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD408u;
        // 0x1bd40c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd408) {
            ctx->pc = 0x1BD4F8u;
            return;
        }
    }
    ctx->pc = 0x1BD410u;
}
