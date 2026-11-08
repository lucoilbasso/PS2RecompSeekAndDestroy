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

// Function: entry_001ba700
// Address: 0x1ba700 - 0x1ba724
void entry_001ba700_0x1ba700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba700_0x1ba700");
#endif

    ctx->pc = 0x1ba700u;

label_1ba700:
    // 0x1ba700: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba704: 0x0  nop
    ctx->pc = 0x1ba704u;
    // NOP
    // 0x1ba708: 0x0  nop
    ctx->pc = 0x1ba708u;
    // NOP
    // 0x1ba70c: 0x0  nop
    ctx->pc = 0x1ba70cu;
    // NOP
    // 0x1ba710: 0x0  nop
    ctx->pc = 0x1ba710u;
    // NOP
    // 0x1ba714: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BA714u;
    {
        const bool branch_taken_0x1ba714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba714) {
            ctx->pc = 0x1BA700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba700;
        }
    }
    ctx->pc = 0x1BA71Cu;
    // 0x1ba71c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BA71Cu;
    {
        const bool branch_taken_0x1ba71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA71Cu;
        // 0x1ba720: 0x2630d250  addiu       $s0, $s1, -0x2DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba71c) {
            ctx->pc = 0x1BA6C0u;
            return;
        }
    }
    ctx->pc = 0x1BA724u;
}
