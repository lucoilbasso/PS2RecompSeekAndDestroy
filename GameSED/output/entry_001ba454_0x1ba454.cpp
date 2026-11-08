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

// Function: entry_001ba454
// Address: 0x1ba454 - 0x1ba46c
void entry_001ba454_0x1ba454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba454_0x1ba454");
#endif

    ctx->pc = 0x1ba454u;

    // 0x1ba454: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA454u;
    {
        const bool branch_taken_0x1ba454 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA454u;
        // 0x1ba458: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba454) {
            ctx->pc = 0x1BA46Cu;
            return;
        }
    }
    ctx->pc = 0x1BA45Cu;
    // 0x1ba45c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1ba45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1ba460: 0x2484af20  addiu       $a0, $a0, -0x50E0
    ctx->pc = 0x1ba460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946592));
    // 0x1ba464: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BA464u;
    SET_GPR_U32(ctx, 31, 0x1BA46Cu);
    ctx->pc = 0x1BA468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA464u;
    // 0x1ba468: 0x24a5d724  addiu       $a1, $a1, -0x28DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956836));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BA464u, 0x1BA46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA46Cu;
}
