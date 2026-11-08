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

// Function: entry_001056d8
// Address: 0x1056d8 - 0x1056e8
void entry_001056d8_0x1056d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001056d8_0x1056d8");
#endif

    switch (ctx->pc) {
        case 0x1056e0u: goto label_1056e0;
        default: break;
    }

    ctx->pc = 0x1056d8u;

    // 0x1056d8: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x1056D8u;
    SET_GPR_U32(ctx, 31, 0x1056E0u);
    ctx->pc = 0x1056DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1056D8u;
    // 0x1056dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1056D8u, 0x1056E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056E0u;
label_1056e0:
    // 0x1056e0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1056E0u;
    {
        const bool branch_taken_0x1056e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1056E0u;
        // 0x1056e4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056e0) {
            ctx->pc = 0x1057A0u;
            return;
        }
    }
    ctx->pc = 0x1056E8u;
}
