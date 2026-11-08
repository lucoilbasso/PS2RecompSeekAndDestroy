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

// Function: entry_001a80f0
// Address: 0x1a80f0 - 0x1a8108
void entry_001a80f0_0x1a80f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a80f0_0x1a80f0");
#endif

    switch (ctx->pc) {
        case 0x1a8100u: goto label_1a8100;
        default: break;
    }

    ctx->pc = 0x1a80f0u;

    // 0x1a80f0: 0x14750005  bne         $v1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A80F0u;
    {
        const bool branch_taken_0x1a80f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x1a80f0) {
            ctx->pc = 0x1A8108u;
            return;
        }
    }
    ctx->pc = 0x1A80F8u;
    // 0x1a80f8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A80F8u;
    SET_GPR_U32(ctx, 31, 0x1A8100u);
    ctx->pc = 0x1A80FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80F8u;
    // 0x1a80fc: 0x26447b40  addiu       $a0, $s2, 0x7B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A80F8u, 0x1A8100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8100u;
label_1a8100:
    // 0x1a8100: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8100u;
    {
        const bool branch_taken_0x1a8100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8100u;
        // 0x1a8104: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8100) {
            ctx->pc = 0x1A8114u;
            return;
        }
    }
    ctx->pc = 0x1A8108u;
}
