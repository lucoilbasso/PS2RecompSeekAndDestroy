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

// Function: entry_0013ea30
// Address: 0x13ea30 - 0x13ea54
void entry_0013ea30_0x13ea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ea30_0x13ea30");
#endif

    ctx->pc = 0x13ea30u;

label_13ea30:
    // 0x13ea30: 0x10650018  beq         $v1, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x13EA30u;
    {
        const bool branch_taken_0x13ea30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x13EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA30u;
        // 0x13ea34: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea30) {
            ctx->pc = 0x13EA94u;
            return;
        }
    }
    ctx->pc = 0x13EA38u;
    // 0x13ea38: 0x0  nop
    ctx->pc = 0x13ea38u;
    // NOP
    // 0x13ea3c: 0x0  nop
    ctx->pc = 0x13ea3cu;
    // NOP
    // 0x13ea40: 0x0  nop
    ctx->pc = 0x13ea40u;
    // NOP
    // 0x13ea44: 0x0  nop
    ctx->pc = 0x13ea44u;
    // NOP
    // 0x13ea48: 0x0  nop
    ctx->pc = 0x13ea48u;
    // NOP
    // 0x13ea4c: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13EA4Cu;
    {
        const bool branch_taken_0x13ea4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ea4c) {
            ctx->pc = 0x13EA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EA4Cu;
            // 0x13ea50: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ea30;
        }
    }
    ctx->pc = 0x13EA54u;
}
