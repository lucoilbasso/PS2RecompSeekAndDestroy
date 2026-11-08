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

// Function: entry_00113650
// Address: 0x113650 - 0x113674
void entry_00113650_0x113650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113650_0x113650");
#endif

    ctx->pc = 0x113650u;

label_113650:
    // 0x113650: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113654: 0x0  nop
    ctx->pc = 0x113654u;
    // NOP
    // 0x113658: 0x0  nop
    ctx->pc = 0x113658u;
    // NOP
    // 0x11365c: 0x0  nop
    ctx->pc = 0x11365cu;
    // NOP
    // 0x113660: 0x0  nop
    ctx->pc = 0x113660u;
    // NOP
    // 0x113664: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113664u;
    {
        const bool branch_taken_0x113664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113664) {
            ctx->pc = 0x113668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113664u;
            // 0x113668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113650;
        }
    }
    ctx->pc = 0x11366Cu;
    // 0x11366c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x11366cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x113670: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x113670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x113674u;
}
