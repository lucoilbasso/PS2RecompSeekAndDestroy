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

// Function: entry_001a8358
// Address: 0x1a8358 - 0x1a8368
void entry_001a8358_0x1a8358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8358_0x1a8358");
#endif

    switch (ctx->pc) {
        case 0x1a8360u: goto label_1a8360;
        default: break;
    }

    ctx->pc = 0x1a8358u;

    // 0x1a8358: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A8358u;
    SET_GPR_U32(ctx, 31, 0x1A8360u);
    ctx->pc = 0x1A835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8358u;
    // 0x1a835c: 0x26c4d928  addiu       $a0, $s6, -0x26D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294957352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A8358u, 0x1A8360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8360u;
label_1a8360:
    // 0x1a8360: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A8360u;
    {
        const bool branch_taken_0x1a8360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8360u;
        // 0x1a8364: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8360) {
            ctx->pc = 0x1A83C4u;
            return;
        }
    }
    ctx->pc = 0x1A8368u;
}
