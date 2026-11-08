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

// Function: entry_00102504
// Address: 0x102504 - 0x102520
void entry_00102504_0x102504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102504_0x102504");
#endif

    ctx->pc = 0x102504u;

    // 0x102504: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x102504u;
    {
        const bool branch_taken_0x102504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102504u;
        // 0x102508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102504) {
            ctx->pc = 0x102520u;
            return;
        }
    }
    ctx->pc = 0x10250Cu;
    // 0x10250c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10250cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102510: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x102510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x102514: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x102514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102518: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102518u;
    SET_GPR_U32(ctx, 31, 0x102520u);
    ctx->pc = 0x10251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102518u;
    // 0x10251c: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102518u, 0x102520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102520u;
}
