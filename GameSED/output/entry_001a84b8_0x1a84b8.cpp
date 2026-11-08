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

// Function: entry_001a84b8
// Address: 0x1a84b8 - 0x1a84d0
void entry_001a84b8_0x1a84b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a84b8_0x1a84b8");
#endif

    switch (ctx->pc) {
        case 0x1a84c4u: goto label_1a84c4;
        default: break;
    }

    ctx->pc = 0x1a84b8u;

    // 0x1a84b8: 0x27a50001  addiu       $a1, $sp, 0x1
    ctx->pc = 0x1a84b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x1a84bc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A84BCu;
    SET_GPR_U32(ctx, 31, 0x1A84C4u);
    ctx->pc = 0x1A84C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A84BCu;
    // 0x1a84c0: 0x2484d940  addiu       $a0, $a0, -0x26C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A84BCu, 0x1A84C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A84C4u;
label_1a84c4:
    // 0x1a84c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a84c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a84c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A84C8u;
    {
        const bool branch_taken_0x1a84c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A84C8u;
        // 0x1a84cc: 0xaf839080  sw          $v1, -0x6F80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938752), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84c8) {
            ctx->pc = 0x1A850Cu;
            return;
        }
    }
    ctx->pc = 0x1A84D0u;
}
