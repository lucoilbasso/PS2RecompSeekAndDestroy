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

// Function: entry_001054b8
// Address: 0x1054b8 - 0x1054c8
void entry_001054b8_0x1054b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001054b8_0x1054b8");
#endif

    switch (ctx->pc) {
        case 0x1054c0u: goto label_1054c0;
        default: break;
    }

    ctx->pc = 0x1054b8u;

    // 0x1054b8: 0xc05beba  jal         func_16FAE8
    ctx->pc = 0x1054B8u;
    SET_GPR_U32(ctx, 31, 0x1054C0u);
    ctx->pc = 0x16FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FAE8u, 0x1054B8u, 0x1054C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054C0u;
label_1054c0:
    // 0x1054c0: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1054C0u;
    {
        const bool branch_taken_0x1054c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054C0u;
        // 0x1054c4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054c0) {
            ctx->pc = 0x1057A0u;
            return;
        }
    }
    ctx->pc = 0x1054C8u;
}
