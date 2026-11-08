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

// Function: entry_001e0610
// Address: 0x1e0610 - 0x1e0638
void entry_001e0610_0x1e0610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0610_0x1e0610");
#endif

    ctx->pc = 0x1e0610u;

label_1e0610:
    // 0x1e0610: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0610u;
    {
        const bool branch_taken_0x1e0610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0610u;
        // 0x1e0614: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0610) {
            ctx->pc = 0x1E0638u;
            return;
        }
    }
    ctx->pc = 0x1E0618u;
    // 0x1e0618: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1e0618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e061c: 0x0  nop
    ctx->pc = 0x1e061cu;
    // NOP
    // 0x1e0620: 0x0  nop
    ctx->pc = 0x1e0620u;
    // NOP
    // 0x1e0624: 0x0  nop
    ctx->pc = 0x1e0624u;
    // NOP
    // 0x1e0628: 0x0  nop
    ctx->pc = 0x1e0628u;
    // NOP
    // 0x1e062c: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E062Cu;
    {
        const bool branch_taken_0x1e062c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e062c) {
            ctx->pc = 0x1E0630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E062Cu;
            // 0x1e0630: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0610;
        }
    }
    ctx->pc = 0x1E0634u;
    // 0x1e0634: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e0638u;
}
