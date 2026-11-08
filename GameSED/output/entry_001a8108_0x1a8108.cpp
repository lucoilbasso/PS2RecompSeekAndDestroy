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

// Function: entry_001a8108
// Address: 0x1a8108 - 0x1a8114
void entry_001a8108_0x1a8108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8108_0x1a8108");
#endif

    switch (ctx->pc) {
        case 0x1a8110u: goto label_1a8110;
        default: break;
    }

    ctx->pc = 0x1a8108u;

    // 0x1a8108: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A8108u;
    SET_GPR_U32(ctx, 31, 0x1A8110u);
    ctx->pc = 0x1A810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8108u;
    // 0x1a810c: 0x26447b40  addiu       $a0, $s2, 0x7B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A8108u, 0x1A8110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8110u;
label_1a8110:
    // 0x1a8110: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a8110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x1a8114u;
}
