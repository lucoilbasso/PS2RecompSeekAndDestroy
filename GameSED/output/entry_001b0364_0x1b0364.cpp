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

// Function: entry_001b0364
// Address: 0x1b0364 - 0x1b0380
void entry_001b0364_0x1b0364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0364_0x1b0364");
#endif

    ctx->pc = 0x1b0364u;

    // 0x1b0364: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b0364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b0368: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0368u;
    {
        const bool branch_taken_0x1b0368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0368) {
            ctx->pc = 0x1B0380u;
            return;
        }
    }
    ctx->pc = 0x1B0370u;
    // 0x1b0370: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b0370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b0374: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1b0374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b0378: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B0378u;
    SET_GPR_U32(ctx, 31, 0x1B0380u);
    ctx->pc = 0x1B037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0378u;
    // 0x1b037c: 0x2484aaa0  addiu       $a0, $a0, -0x5560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B0378u, 0x1B0380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0380u;
}
