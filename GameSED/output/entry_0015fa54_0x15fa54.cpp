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

// Function: entry_0015fa54
// Address: 0x15fa54 - 0x15fa5c
void entry_0015fa54_0x15fa54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fa54_0x15fa54");
#endif

    ctx->pc = 0x15fa54u;

    // 0x15fa54: 0x623fff6  bgezl       $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x15FA54u;
    {
        const bool branch_taken_0x15fa54 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x15fa54) {
            ctx->pc = 0x15FA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FA54u;
            // 0x15fa58: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FA30u;
            return;
        }
    }
    ctx->pc = 0x15FA5Cu;
}
