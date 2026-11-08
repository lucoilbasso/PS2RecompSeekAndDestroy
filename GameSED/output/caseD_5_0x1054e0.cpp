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

// Function: caseD_5
// Address: 0x1054e0 - 0x1054f0
void caseD_5_0x1054e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1054e0");
#endif

    switch (ctx->pc) {
        case 0x1054e8u: goto label_1054e8;
        default: break;
    }

    ctx->pc = 0x1054e0u;

    // 0x1054e0: 0xc04faac  jal         func_13EAB0
    ctx->pc = 0x1054E0u;
    SET_GPR_U32(ctx, 31, 0x1054E8u);
    ctx->pc = 0x13EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EAB0u, 0x1054E0u, 0x1054E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054E8u;
label_1054e8:
    // 0x1054e8: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1054E8u;
    {
        const bool branch_taken_0x1054e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1054ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054E8u;
        // 0x1054ec: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054e8) {
            ctx->pc = 0x1057A0u;
            return;
        }
    }
    ctx->pc = 0x1054F0u;
}
