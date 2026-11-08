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

// Function: entry_00113774
// Address: 0x113774 - 0x113798
void entry_00113774_0x113774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113774_0x113774");
#endif

    ctx->pc = 0x113774u;

label_113774:
    // 0x113774: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113778: 0x0  nop
    ctx->pc = 0x113778u;
    // NOP
    // 0x11377c: 0x0  nop
    ctx->pc = 0x11377cu;
    // NOP
    // 0x113780: 0x0  nop
    ctx->pc = 0x113780u;
    // NOP
    // 0x113784: 0x0  nop
    ctx->pc = 0x113784u;
    // NOP
    // 0x113788: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113788u;
    {
        const bool branch_taken_0x113788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113788) {
            ctx->pc = 0x11378Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113788u;
            // 0x11378c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113774;
        }
    }
    ctx->pc = 0x113790u;
    // 0x113790: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x113790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x113794: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x113794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x113798u;
}
