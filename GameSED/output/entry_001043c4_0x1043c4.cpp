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

// Function: entry_001043c4
// Address: 0x1043c4 - 0x1043dc
void entry_001043c4_0x1043c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001043c4_0x1043c4");
#endif

    ctx->pc = 0x1043c4u;

    // 0x1043c4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1043C4u;
    {
        const bool branch_taken_0x1043c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043C4u;
        // 0x1043c8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043c4) {
            ctx->pc = 0x1043E8u;
            return;
        }
    }
    ctx->pc = 0x1043CCu;
    // 0x1043cc: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1043ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1043d0: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0
    ctx->pc = 0x1043d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
    // 0x1043d4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1043D4u;
    SET_GPR_U32(ctx, 31, 0x1043DCu);
    ctx->pc = 0x1043D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043D4u;
    // 0x1043d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1043D4u, 0x1043DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043DCu;
}
