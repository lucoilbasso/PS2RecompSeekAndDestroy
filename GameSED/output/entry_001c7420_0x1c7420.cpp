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

// Function: entry_001c7420
// Address: 0x1c7420 - 0x1c743c
void entry_001c7420_0x1c7420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7420_0x1c7420");
#endif

    ctx->pc = 0x1c7420u;

label_1c7420:
    // 0x1c7420: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c7420u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1c7424: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c7424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c7428: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1c7428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1c742c: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x1c742cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c7430: 0x0  nop
    ctx->pc = 0x1c7430u;
    // NOP
    // 0x1c7434: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C7434u;
    {
        const bool branch_taken_0x1c7434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7434u;
        // 0x1c7438: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7434) {
            ctx->pc = 0x1C7420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7420;
        }
    }
    ctx->pc = 0x1C743Cu;
}
