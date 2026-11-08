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
// Address: 0x132d98 - 0x132da8
void caseD_0_0x132d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x132d98");
#endif

    switch (ctx->pc) {
        case 0x132da0u: goto label_132da0;
        default: break;
    }

    ctx->pc = 0x132d98u;

    // 0x132d98: 0xc06678e  jal         func_199E38
    ctx->pc = 0x132D98u;
    SET_GPR_U32(ctx, 31, 0x132DA0u);
    ctx->pc = 0x199E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199E38u, 0x132D98u, 0x132DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DA0u;
label_132da0:
    // 0x132da0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x132DA0u;
    {
        const bool branch_taken_0x132da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DA0u;
        // 0x132da4: 0x8e24007c  lw          $a0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132da0) {
            ctx->pc = 0x132DB4u;
            return;
        }
    }
    ctx->pc = 0x132DA8u;
}
