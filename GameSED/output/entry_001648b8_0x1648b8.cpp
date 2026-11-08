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

// Function: entry_001648b8
// Address: 0x1648b8 - 0x1648d8
void entry_001648b8_0x1648b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001648b8_0x1648b8");
#endif

    switch (ctx->pc) {
        case 0x1648c0u: goto label_1648c0;
        case 0x1648d0u: goto label_1648d0;
        default: break;
    }

    ctx->pc = 0x1648b8u;

    // 0x1648b8: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x1648B8u;
    SET_GPR_U32(ctx, 31, 0x1648C0u);
    ctx->pc = 0x1648BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648B8u;
    // 0x1648bc: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x1648B8u, 0x1648C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648C0u;
label_1648c0:
    // 0x1648c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1648C0u;
    {
        const bool branch_taken_0x1648c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648C0u;
        // 0x1648c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648c0) {
            ctx->pc = 0x1648D8u;
            return;
        }
    }
    ctx->pc = 0x1648C8u;
    // 0x1648c8: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x1648C8u;
    SET_GPR_U32(ctx, 31, 0x1648D0u);
    ctx->pc = 0x1648CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648C8u;
    // 0x1648cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x1648C8u, 0x1648D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648D0u;
label_1648d0:
    // 0x1648d0: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1648D0u;
    {
        const bool branch_taken_0x1648d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648D0u;
        // 0x1648d4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648d0) {
            ctx->pc = 0x164A04u;
            return;
        }
    }
    ctx->pc = 0x1648D8u;
}
