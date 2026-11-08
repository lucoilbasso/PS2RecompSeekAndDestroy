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

// Function: entry_001dda98
// Address: 0x1dda98 - 0x1ddab0
void entry_001dda98_0x1dda98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dda98_0x1dda98");
#endif

    ctx->pc = 0x1dda98u;

    // 0x1dda98: 0x8e4201b8  lw          $v0, 0x1B8($s2)
    ctx->pc = 0x1dda98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x1dda9c: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DDA9Cu;
    {
        const bool branch_taken_0x1dda9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDA9Cu;
        // 0x1ddaa0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dda9c) {
            ctx->pc = 0x1DDB00u;
            return;
        }
    }
    ctx->pc = 0x1DDAA4u;
    // 0x1ddaa4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ddaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ddaa8: 0x2454ffb0  addiu       $s4, $v0, -0x50
    ctx->pc = 0x1ddaa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x1ddaac: 0x8e4201bc  lw          $v0, 0x1BC($s2)
    ctx->pc = 0x1ddaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
    ctx->pc = 0x1ddab0u;
}
