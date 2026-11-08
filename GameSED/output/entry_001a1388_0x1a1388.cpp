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

// Function: entry_001a1388
// Address: 0x1a1388 - 0x1a13ac
void entry_001a1388_0x1a1388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1388_0x1a1388");
#endif

    ctx->pc = 0x1a1388u;

label_1a1388:
    // 0x1a1388: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1388u;
    {
        const bool branch_taken_0x1a1388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1388u;
        // 0x1a138c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1388) {
            ctx->pc = 0x1A13B0u;
            return;
        }
    }
    ctx->pc = 0x1A1390u;
    // 0x1a1390: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a1390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1394: 0x0  nop
    ctx->pc = 0x1a1394u;
    // NOP
    // 0x1a1398: 0x0  nop
    ctx->pc = 0x1a1398u;
    // NOP
    // 0x1a139c: 0x0  nop
    ctx->pc = 0x1a139cu;
    // NOP
    // 0x1a13a0: 0x0  nop
    ctx->pc = 0x1a13a0u;
    // NOP
    // 0x1a13a4: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A13A4u;
    {
        const bool branch_taken_0x1a13a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a13a4) {
            ctx->pc = 0x1A13A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A13A4u;
            // 0x1a13a8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1388;
        }
    }
    ctx->pc = 0x1A13ACu;
}
