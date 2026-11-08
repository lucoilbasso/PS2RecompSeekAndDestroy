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

// Function: entry_001b0f4c
// Address: 0x1b0f4c - 0x1b0f60
void entry_001b0f4c_0x1b0f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0f4c_0x1b0f4c");
#endif

    switch (ctx->pc) {
        case 0x1b0f5cu: goto label_1b0f5c;
        default: break;
    }

    ctx->pc = 0x1b0f4cu;

    // 0x1b0f4c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0F4Cu;
    {
        const bool branch_taken_0x1b0f4c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F4Cu;
        // 0x1b0f50: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f4c) {
            ctx->pc = 0x1B0F60u;
            return;
        }
    }
    ctx->pc = 0x1B0F54u;
    // 0x1b0f54: 0xc06dafa  jal         func_1B6BE8
    ctx->pc = 0x1B0F54u;
    SET_GPR_U32(ctx, 31, 0x1B0F5Cu);
    ctx->pc = 0x1B6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BE8u, 0x1B0F54u, 0x1B0F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F5Cu;
label_1b0f5c:
    // 0x1b0f5c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b0f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    ctx->pc = 0x1b0f60u;
}
