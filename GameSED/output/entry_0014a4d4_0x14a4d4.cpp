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

// Function: entry_0014a4d4
// Address: 0x14a4d4 - 0x14a4e8
void entry_0014a4d4_0x14a4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a4d4_0x14a4d4");
#endif

    ctx->pc = 0x14a4d4u;

    // 0x14a4d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A4D4u;
    {
        const bool branch_taken_0x14a4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4D4u;
        // 0x14a4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4d4) {
            ctx->pc = 0x14A4E8u;
            return;
        }
    }
    ctx->pc = 0x14A4DCu;
    // 0x14a4dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14a4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4e0: 0xc05243a  jal         func_1490E8
    ctx->pc = 0x14A4E0u;
    SET_GPR_U32(ctx, 31, 0x14A4E8u);
    ctx->pc = 0x14A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4E0u;
    // 0x14a4e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490E8u, 0x14A4E0u, 0x14A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4E8u;
}
