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

// Function: entry_00111330
// Address: 0x111330 - 0x11134c
void entry_00111330_0x111330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111330_0x111330");
#endif

    ctx->pc = 0x111330u;

label_111330:
    // 0x111330: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x111330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x111334: 0x0  nop
    ctx->pc = 0x111334u;
    // NOP
    // 0x111338: 0x0  nop
    ctx->pc = 0x111338u;
    // NOP
    // 0x11133c: 0x0  nop
    ctx->pc = 0x11133cu;
    // NOP
    // 0x111340: 0x0  nop
    ctx->pc = 0x111340u;
    // NOP
    // 0x111344: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x111344u;
    {
        const bool branch_taken_0x111344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111344u;
        // 0x111348: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111344) {
            ctx->pc = 0x111330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111330;
        }
    }
    ctx->pc = 0x11134Cu;
}
