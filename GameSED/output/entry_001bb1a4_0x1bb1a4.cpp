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

// Function: entry_001bb1a4
// Address: 0x1bb1a4 - 0x1bb1bc
void entry_001bb1a4_0x1bb1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb1a4_0x1bb1a4");
#endif

    switch (ctx->pc) {
        case 0x1bb1b8u: goto label_1bb1b8;
        default: break;
    }

    ctx->pc = 0x1bb1a4u;

    // 0x1bb1a4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB1A4u;
    {
        const bool branch_taken_0x1bb1a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1A4u;
        // 0x1bb1a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1a4) {
            ctx->pc = 0x1BB1BCu;
            return;
        }
    }
    ctx->pc = 0x1BB1ACu;
    // 0x1bb1ac: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1bb1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1bb1b0: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BB1B0u;
    SET_GPR_U32(ctx, 31, 0x1BB1B8u);
    ctx->pc = 0x1BB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1B0u;
    // 0x1bb1b4: 0x2484b0a0  addiu       $a0, $a0, -0x4F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BB1B0u, 0x1BB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1B8u;
label_1bb1b8:
    // 0x1bb1b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1bb1bcu;
}
