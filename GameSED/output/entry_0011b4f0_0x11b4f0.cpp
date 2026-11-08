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

// Function: entry_0011b4f0
// Address: 0x11b4f0 - 0x11b504
void entry_0011b4f0_0x11b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b4f0_0x11b4f0");
#endif

    ctx->pc = 0x11b4f0u;

    // 0x11b4f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B4F0u;
    {
        const bool branch_taken_0x11b4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4F0u;
        // 0x11b4f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4f0) {
            ctx->pc = 0x11B504u;
            return;
        }
    }
    ctx->pc = 0x11B4F8u;
    // 0x11b4f8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x11b4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11b4fc: 0xc060e56  jal         func_183958
    ctx->pc = 0x11B4FCu;
    SET_GPR_U32(ctx, 31, 0x11B504u);
    ctx->pc = 0x11B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4FCu;
    // 0x11b500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x11B4FCu, 0x11B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B504u;
}
