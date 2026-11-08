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

// Function: entry_001a7f6c
// Address: 0x1a7f6c - 0x1a7f80
void entry_001a7f6c_0x1a7f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7f6c_0x1a7f6c");
#endif

    switch (ctx->pc) {
        case 0x1a7f74u: goto label_1a7f74;
        default: break;
    }

    ctx->pc = 0x1a7f6cu;

    // 0x1a7f6c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A7F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A7F74u);
    ctx->pc = 0x1A7F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F6Cu;
    // 0x1a7f70: 0x2684d900  addiu       $a0, $s4, -0x2700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A7F6Cu, 0x1A7F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F74u;
label_1a7f74:
    // 0x1a7f74: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A7F74u;
    {
        const bool branch_taken_0x1a7f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F74u;
        // 0x1a7f78: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f74) {
            ctx->pc = 0x1A7FBCu;
            return;
        }
    }
    ctx->pc = 0x1A7F7Cu;
    // 0x1a7f7c: 0x0  nop
    ctx->pc = 0x1a7f7cu;
    // NOP
    ctx->pc = 0x1a7f80u;
}
