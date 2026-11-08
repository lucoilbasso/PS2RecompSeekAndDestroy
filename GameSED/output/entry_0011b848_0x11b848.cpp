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

// Function: entry_0011b848
// Address: 0x11b848 - 0x11b85c
void entry_0011b848_0x11b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b848_0x11b848");
#endif

    ctx->pc = 0x11b848u;

    // 0x11b848: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B848u;
    {
        const bool branch_taken_0x11b848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B848u;
        // 0x11b84c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b848) {
            ctx->pc = 0x11B85Cu;
            return;
        }
    }
    ctx->pc = 0x11B850u;
    // 0x11b850: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x11b850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b854: 0xc060e56  jal         func_183958
    ctx->pc = 0x11B854u;
    SET_GPR_U32(ctx, 31, 0x11B85Cu);
    ctx->pc = 0x11B858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B854u;
    // 0x11b858: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x11B854u, 0x11B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B85Cu;
}
