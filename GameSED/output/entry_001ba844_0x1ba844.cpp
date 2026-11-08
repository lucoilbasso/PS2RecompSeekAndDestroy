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

// Function: entry_001ba844
// Address: 0x1ba844 - 0x1ba86c
void entry_001ba844_0x1ba844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba844_0x1ba844");
#endif

    switch (ctx->pc) {
        case 0x1ba860u: goto label_1ba860;
        default: break;
    }

    ctx->pc = 0x1ba844u;

    // 0x1ba844: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ba848: 0x8c43c0b0  lw          $v1, -0x3F50($v0)
    ctx->pc = 0x1ba848u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24C0B0u));
    // 0x1ba84c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA84Cu;
    {
        const bool branch_taken_0x1ba84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA84Cu;
        // 0x1ba850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba84c) {
            ctx->pc = 0x1BA86Cu;
            return;
        }
    }
    ctx->pc = 0x1BA854u;
    // 0x1ba854: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1ba854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1ba858: 0xc06c694  jal         func_1B1A50
    ctx->pc = 0x1BA858u;
    SET_GPR_U32(ctx, 31, 0x1BA860u);
    ctx->pc = 0x1BA85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA858u;
    // 0x1ba85c: 0x2484d250  addiu       $a0, $a0, -0x2DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A50u, 0x1BA858u, 0x1BA860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA860u;
label_1ba860:
    // 0x1ba860: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA860u;
    {
        const bool branch_taken_0x1ba860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA860u;
        // 0x1ba864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba860) {
            ctx->pc = 0x1BA86Cu;
            return;
        }
    }
    ctx->pc = 0x1BA868u;
    // 0x1ba868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ba86cu;
}
