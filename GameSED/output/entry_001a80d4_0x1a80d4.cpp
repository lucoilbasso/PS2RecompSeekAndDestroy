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

// Function: entry_001a80d4
// Address: 0x1a80d4 - 0x1a80f0
void entry_001a80d4_0x1a80d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a80d4_0x1a80d4");
#endif

    switch (ctx->pc) {
        case 0x1a80e8u: goto label_1a80e8;
        default: break;
    }

    ctx->pc = 0x1a80d4u;

    // 0x1a80d4: 0x8f839080  lw          $v1, -0x6F80($gp)
    ctx->pc = 0x1a80d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938752)));
    // 0x1a80d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A80D8u;
    {
        const bool branch_taken_0x1a80d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a80d8) {
            ctx->pc = 0x1A80F0u;
            return;
        }
    }
    ctx->pc = 0x1A80E0u;
    // 0x1a80e0: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A80E0u;
    SET_GPR_U32(ctx, 31, 0x1A80E8u);
    ctx->pc = 0x1A80E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80E0u;
    // 0x1a80e4: 0x26447b40  addiu       $a0, $s2, 0x7B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 31552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A80E0u, 0x1A80E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80E8u;
label_1a80e8:
    // 0x1a80e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A80E8u;
    {
        const bool branch_taken_0x1a80e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A80ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80E8u;
        // 0x1a80ec: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80e8) {
            ctx->pc = 0x1A8114u;
            return;
        }
    }
    ctx->pc = 0x1A80F0u;
}
