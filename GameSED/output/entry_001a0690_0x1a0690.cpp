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

// Function: entry_001a0690
// Address: 0x1a0690 - 0x1a06c0
void entry_001a0690_0x1a0690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0690_0x1a0690");
#endif

    ctx->pc = 0x1a0690u;

label_1a0690:
    // 0x1a0690: 0x5044001c  beql        $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A0690u;
    {
        const bool branch_taken_0x1a0690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0690) {
            ctx->pc = 0x1A0694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0690u;
            // 0x1a0694: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0704u;
            return;
        }
    }
    ctx->pc = 0x1A0698u;
    // 0x1a0698: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a0698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a069c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a06a0: 0x0  nop
    ctx->pc = 0x1a06a0u;
    // NOP
    // 0x1a06a4: 0x0  nop
    ctx->pc = 0x1a06a4u;
    // NOP
    // 0x1a06a8: 0x0  nop
    ctx->pc = 0x1a06a8u;
    // NOP
    // 0x1a06ac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A06ACu;
    {
        const bool branch_taken_0x1a06ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a06ac) {
            ctx->pc = 0x1A06B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A06ACu;
            // 0x1a06b0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0690;
        }
    }
    ctx->pc = 0x1A06B4u;
    // 0x1a06b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A06B4u;
    {
        const bool branch_taken_0x1a06b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06B4u;
        // 0x1a06b8: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06b4) {
            ctx->pc = 0x1A0700u;
            return;
        }
    }
    ctx->pc = 0x1A06BCu;
    // 0x1a06bc: 0x0  nop
    ctx->pc = 0x1a06bcu;
    // NOP
    ctx->pc = 0x1a06c0u;
}
