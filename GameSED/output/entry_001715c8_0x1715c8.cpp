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

// Function: entry_001715c8
// Address: 0x1715c8 - 0x1715d8
void entry_001715c8_0x1715c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001715c8_0x1715c8");
#endif

    switch (ctx->pc) {
        case 0x1715d0u: goto label_1715d0;
        default: break;
    }

    ctx->pc = 0x1715c8u;

label_1715c8:
    // 0x1715c8: 0xc06be00  jal         func_1AF800
    ctx->pc = 0x1715C8u;
    SET_GPR_U32(ctx, 31, 0x1715D0u);
    ctx->pc = 0x1715CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715C8u;
    // 0x1715cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF800u, 0x1715C8u, 0x1715D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715D0u;
label_1715d0:
    // 0x1715d0: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1715D0u;
    {
        const bool branch_taken_0x1715d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1715D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715D0u;
        // 0x1715d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715d0) {
            ctx->pc = 0x1715C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1715c8;
        }
    }
    ctx->pc = 0x1715D8u;
}
