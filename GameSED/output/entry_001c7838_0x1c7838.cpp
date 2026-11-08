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

// Function: entry_001c7838
// Address: 0x1c7838 - 0x1c7868
void entry_001c7838_0x1c7838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7838_0x1c7838");
#endif

    switch (ctx->pc) {
        case 0x1c7858u: goto label_1c7858;
        default: break;
    }

    ctx->pc = 0x1c7838u;

    // 0x1c7838: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x1c7838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c783c: 0xfd140000  sd          $s4, 0x0($t0)
    ctx->pc = 0x1c783cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 20));
    // 0x1c7840: 0x53c000a1  beql        $fp, $zero, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1C7840u;
    {
        const bool branch_taken_0x1c7840 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7840) {
            ctx->pc = 0x1C7844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7840u;
            // 0x1c7844: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7AC8u;
            return;
        }
    }
    ctx->pc = 0x1C7848u;
    // 0x1c7848: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c7848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c784c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c784cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7850: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C7850u;
    SET_GPR_U32(ctx, 31, 0x1C7858u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C7850u, 0x1C7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7858u;
label_1c7858:
    // 0x1c7858: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x1c7858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x1c785c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1c785cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1c7860: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1C7860u;
    {
        const bool branch_taken_0x1c7860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7860u;
        // 0x1c7864: 0x8fa3024c  lw          $v1, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7860) {
            ctx->pc = 0x1C7AC8u;
            return;
        }
    }
    ctx->pc = 0x1C7868u;
}
