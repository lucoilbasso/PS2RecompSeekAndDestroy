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

// Function: entry_001a09c0
// Address: 0x1a09c0 - 0x1a09f0
void entry_001a09c0_0x1a09c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a09c0_0x1a09c0");
#endif

    ctx->pc = 0x1a09c0u;

label_1a09c0:
    // 0x1a09c0: 0x5044001c  beql        $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A09C0u;
    {
        const bool branch_taken_0x1a09c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a09c0) {
            ctx->pc = 0x1A09C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A09C0u;
            // 0x1a09c4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A34u;
            return;
        }
    }
    ctx->pc = 0x1A09C8u;
    // 0x1a09c8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a09cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a09d0: 0x0  nop
    ctx->pc = 0x1a09d0u;
    // NOP
    // 0x1a09d4: 0x0  nop
    ctx->pc = 0x1a09d4u;
    // NOP
    // 0x1a09d8: 0x0  nop
    ctx->pc = 0x1a09d8u;
    // NOP
    // 0x1a09dc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A09DCu;
    {
        const bool branch_taken_0x1a09dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a09dc) {
            ctx->pc = 0x1A09E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A09DCu;
            // 0x1a09e0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A09C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a09c0;
        }
    }
    ctx->pc = 0x1A09E4u;
    // 0x1a09e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A09E4u;
    {
        const bool branch_taken_0x1a09e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09E4u;
        // 0x1a09e8: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09e4) {
            ctx->pc = 0x1A0A30u;
            return;
        }
    }
    ctx->pc = 0x1A09ECu;
    // 0x1a09ec: 0x0  nop
    ctx->pc = 0x1a09ecu;
    // NOP
    ctx->pc = 0x1a09f0u;
}
