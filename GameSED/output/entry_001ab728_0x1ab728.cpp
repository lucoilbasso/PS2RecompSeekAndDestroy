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

// Function: entry_001ab728
// Address: 0x1ab728 - 0x1ab744
void entry_001ab728_0x1ab728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab728_0x1ab728");
#endif

    ctx->pc = 0x1ab728u;

label_1ab728:
    // 0x1ab728: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1ab728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ab72c: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1AB72Cu;
    {
        const bool branch_taken_0x1ab72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB72Cu;
        // 0x1ab730: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab72c) {
            ctx->pc = 0x1AB8A8u;
            return;
        }
    }
    ctx->pc = 0x1AB734u;
    // 0x1ab734: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ab734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ab738: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1ab738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1ab73c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AB73Cu;
    {
        const bool branch_taken_0x1ab73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB73Cu;
        // 0x1ab740: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab73c) {
            ctx->pc = 0x1AB728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab728;
        }
    }
    ctx->pc = 0x1AB744u;
}
