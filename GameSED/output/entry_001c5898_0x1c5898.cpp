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

// Function: entry_001c5898
// Address: 0x1c5898 - 0x1c58a8
void entry_001c5898_0x1c5898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5898_0x1c5898");
#endif

    ctx->pc = 0x1c5898u;

    // 0x1c5898: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5898u;
    {
        const bool branch_taken_0x1c5898 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5898u;
        // 0x1c589c: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5898) {
            ctx->pc = 0x1C58A8u;
            return;
        }
    }
    ctx->pc = 0x1C58A0u;
    // 0x1c58a0: 0x8e62ddf8  lw          $v0, -0x2208($s3)
    ctx->pc = 0x1c58a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958584)));
    // 0x1c58a4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1c58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1c58a8u;
}
