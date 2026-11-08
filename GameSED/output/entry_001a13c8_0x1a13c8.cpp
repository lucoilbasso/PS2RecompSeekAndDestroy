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

// Function: entry_001a13c8
// Address: 0x1a13c8 - 0x1a13ec
void entry_001a13c8_0x1a13c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a13c8_0x1a13c8");
#endif

    ctx->pc = 0x1a13c8u;

label_1a13c8:
    // 0x1a13c8: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A13C8u;
    {
        const bool branch_taken_0x1a13c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A13CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A13C8u;
        // 0x1a13cc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a13c8) {
            ctx->pc = 0x1A13F0u;
            return;
        }
    }
    ctx->pc = 0x1A13D0u;
    // 0x1a13d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a13d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a13d4: 0x0  nop
    ctx->pc = 0x1a13d4u;
    // NOP
    // 0x1a13d8: 0x0  nop
    ctx->pc = 0x1a13d8u;
    // NOP
    // 0x1a13dc: 0x0  nop
    ctx->pc = 0x1a13dcu;
    // NOP
    // 0x1a13e0: 0x0  nop
    ctx->pc = 0x1a13e0u;
    // NOP
    // 0x1a13e4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A13E4u;
    {
        const bool branch_taken_0x1a13e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a13e4) {
            ctx->pc = 0x1A13E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A13E4u;
            // 0x1a13e8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A13C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a13c8;
        }
    }
    ctx->pc = 0x1A13ECu;
}
