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

// Function: entry_001023dc
// Address: 0x1023dc - 0x1023f8
void entry_001023dc_0x1023dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001023dc_0x1023dc");
#endif

    ctx->pc = 0x1023dcu;

    // 0x1023dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1023DCu;
    {
        const bool branch_taken_0x1023dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023DCu;
        // 0x1023e0: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023dc) {
            ctx->pc = 0x1023F8u;
            return;
        }
    }
    ctx->pc = 0x1023E4u;
    // 0x1023e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1023e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023e8: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x1023e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x1023ec: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1023ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1023f0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1023F0u;
    SET_GPR_U32(ctx, 31, 0x1023F8u);
    ctx->pc = 0x1023F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1023F0u;
    // 0x1023f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1023F0u, 0x1023F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1023F8u;
}
