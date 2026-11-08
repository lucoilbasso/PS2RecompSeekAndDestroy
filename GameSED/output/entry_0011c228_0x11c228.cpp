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

// Function: entry_0011c228
// Address: 0x11c228 - 0x11c250
void entry_0011c228_0x11c228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c228_0x11c228");
#endif

    ctx->pc = 0x11c228u;

label_11c228:
    // 0x11c228: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x11c228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x11c22c: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x11c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x11c230: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11c230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11c234: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11c234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11c238: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x11c238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11c23c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11C23Cu;
    {
        const bool branch_taken_0x11c23c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C23Cu;
        // 0x11c240: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c23c) {
            ctx->pc = 0x11C228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c228;
        }
    }
    ctx->pc = 0x11C244u;
    // 0x11c244: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c244u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c24c: 0x0  nop
    ctx->pc = 0x11c24cu;
    // NOP
    ctx->pc = 0x11c250u;
}
