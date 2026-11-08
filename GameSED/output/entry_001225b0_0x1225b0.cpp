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

// Function: entry_001225b0
// Address: 0x1225b0 - 0x1225d0
void entry_001225b0_0x1225b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001225b0_0x1225b0");
#endif

    switch (ctx->pc) {
        case 0x1225c0u: goto label_1225c0;
        default: break;
    }

    ctx->pc = 0x1225b0u;

    // 0x1225b0: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1225B0u;
    {
        const bool branch_taken_0x1225b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1225B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225B0u;
        // 0x1225b4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225b0) {
            ctx->pc = 0x1225D0u;
            return;
        }
    }
    ctx->pc = 0x1225B8u;
    // 0x1225b8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1225B8u;
    SET_GPR_U32(ctx, 31, 0x1225C0u);
    ctx->pc = 0x1225BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1225B8u;
    // 0x1225bc: 0x26c45c28  addiu       $a0, $s6, 0x5C28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 23592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1225B8u, 0x1225C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225C0u;
label_1225c0:
    // 0x1225c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1225c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225c4: 0x26a55c38  addiu       $a1, $s5, 0x5C38
    ctx->pc = 0x1225c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 23608));
    // 0x1225c8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1225C8u;
    SET_GPR_U32(ctx, 31, 0x1225D0u);
    ctx->pc = 0x1225CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1225C8u;
    // 0x1225cc: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1225C8u, 0x1225D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225D0u;
}
