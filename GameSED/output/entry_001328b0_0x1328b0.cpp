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

// Function: entry_001328b0
// Address: 0x1328b0 - 0x1328bc
void entry_001328b0_0x1328b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001328b0_0x1328b0");
#endif

    ctx->pc = 0x1328b0u;

    // 0x1328b0: 0x8e100060  lw          $s0, 0x60($s0)
    ctx->pc = 0x1328b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1328b4: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1328B4u;
    {
        const bool branch_taken_0x1328b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1328B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328B4u;
        // 0x1328b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1328b4) {
            ctx->pc = 0x1328A8u;
            return;
        }
    }
    ctx->pc = 0x1328BCu;
}
