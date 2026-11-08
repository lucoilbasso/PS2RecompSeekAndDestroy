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

// Function: entry_0019f6a0
// Address: 0x19f6a0 - 0x19f6c4
void entry_0019f6a0_0x19f6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f6a0_0x19f6a0");
#endif

    ctx->pc = 0x19f6a0u;

label_19f6a0:
    // 0x19f6a0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x19f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x19f6a4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F6A4u;
    {
        const bool branch_taken_0x19f6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6A4u;
        // 0x19f6a8: 0xa3102b  sltu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6a4) {
            ctx->pc = 0x19F6C4u;
            return;
        }
    }
    ctx->pc = 0x19F6ACu;
    // 0x19f6ac: 0x0  nop
    ctx->pc = 0x19f6acu;
    // NOP
    // 0x19f6b0: 0x0  nop
    ctx->pc = 0x19f6b0u;
    // NOP
    // 0x19f6b4: 0x0  nop
    ctx->pc = 0x19f6b4u;
    // NOP
    // 0x19f6b8: 0x0  nop
    ctx->pc = 0x19f6b8u;
    // NOP
    // 0x19f6bc: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19F6BCu;
    {
        const bool branch_taken_0x19f6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6bc) {
            ctx->pc = 0x19F6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F6BCu;
            // 0x19f6c0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f6a0;
        }
    }
    ctx->pc = 0x19F6C4u;
}
