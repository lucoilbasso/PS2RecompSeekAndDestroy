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

// Function: caseD_3
// Address: 0x105498 - 0x1054b8
void caseD_3_0x105498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x105498");
#endif

    switch (ctx->pc) {
        case 0x1054a0u: goto label_1054a0;
        case 0x1054b0u: goto label_1054b0;
        default: break;
    }

    ctx->pc = 0x105498u;

    // 0x105498: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x105498u;
    SET_GPR_U32(ctx, 31, 0x1054A0u);
    ctx->pc = 0x10549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105498u;
    // 0x10549c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x105498u, 0x1054A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054A0u;
label_1054a0:
    // 0x1054a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1054A0u;
    {
        const bool branch_taken_0x1054a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1054a0) {
            ctx->pc = 0x1054B8u;
            return;
        }
    }
    ctx->pc = 0x1054A8u;
    // 0x1054a8: 0xc05beb6  jal         func_16FAD8
    ctx->pc = 0x1054A8u;
    SET_GPR_U32(ctx, 31, 0x1054B0u);
    ctx->pc = 0x16FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FAD8u, 0x1054A8u, 0x1054B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054B0u;
label_1054b0:
    // 0x1054b0: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1054B0u;
    {
        const bool branch_taken_0x1054b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054B0u;
        // 0x1054b4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054b0) {
            ctx->pc = 0x1057A0u;
            return;
        }
    }
    ctx->pc = 0x1054B8u;
}
