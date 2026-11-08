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

// Function: caseD_0
// Address: 0x105410 - 0x105420
void caseD_0_0x105410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x105410");
#endif

    switch (ctx->pc) {
        case 0x105418u: goto label_105418;
        default: break;
    }

    ctx->pc = 0x105410u;

    // 0x105410: 0xc05be9e  jal         func_16FA78
    ctx->pc = 0x105410u;
    SET_GPR_U32(ctx, 31, 0x105418u);
    ctx->pc = 0x16FA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FA78u, 0x105410u, 0x105418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105418u;
label_105418:
    // 0x105418: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x105418u;
    {
        const bool branch_taken_0x105418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105418u;
        // 0x10541c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105418) {
            ctx->pc = 0x1057A0u;
            return;
        }
    }
    ctx->pc = 0x105420u;
}
