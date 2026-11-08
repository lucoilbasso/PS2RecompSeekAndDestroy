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

// Function: entry_001102c8
// Address: 0x1102c8 - 0x1102dc
void entry_001102c8_0x1102c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001102c8_0x1102c8");
#endif

    switch (ctx->pc) {
        case 0x1102d4u: goto label_1102d4;
        default: break;
    }

    ctx->pc = 0x1102c8u;

    // 0x1102c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1102c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1102cc: 0xc0436d2  jal         func_10DB48
    ctx->pc = 0x1102CCu;
    SET_GPR_U32(ctx, 31, 0x1102D4u);
    ctx->pc = 0x1102D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1102CCu;
    // 0x1102d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB48u, 0x1102CCu, 0x1102D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1102D4u;
label_1102d4:
    // 0x1102d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1102D4u;
    {
        const bool branch_taken_0x1102d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1102D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1102D4u;
        // 0x1102d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1102d4) {
            ctx->pc = 0x1102E8u;
            return;
        }
    }
    ctx->pc = 0x1102DCu;
}
