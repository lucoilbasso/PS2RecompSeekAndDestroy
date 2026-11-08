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

// Function: entry_001788d8
// Address: 0x1788d8 - 0x1788e8
void entry_001788d8_0x1788d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001788d8_0x1788d8");
#endif

    switch (ctx->pc) {
        case 0x1788e0u: goto label_1788e0;
        default: break;
    }

    ctx->pc = 0x1788d8u;

    // 0x1788d8: 0xc05e276  jal         func_1789D8
    ctx->pc = 0x1788D8u;
    SET_GPR_U32(ctx, 31, 0x1788E0u);
    ctx->pc = 0x1789D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1789D8u, 0x1788D8u, 0x1788E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788E0u;
label_1788e0:
    // 0x1788e0: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1788E0u;
    {
        const bool branch_taken_0x1788e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1788E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788E0u;
        // 0x1788e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788e0) {
            ctx->pc = 0x1788A8u;
            return;
        }
    }
    ctx->pc = 0x1788E8u;
}
