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

// Function: entry_001571a8
// Address: 0x1571a8 - 0x1571b0
void entry_001571a8_0x1571a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001571a8_0x1571a8");
#endif

    ctx->pc = 0x1571a8u;

    // 0x1571a8: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1571A8u;
    {
        const bool branch_taken_0x1571a8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1571a8) {
            ctx->pc = 0x1571ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1571A8u;
            // 0x1571ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157198u;
            return;
        }
    }
    ctx->pc = 0x1571B0u;
}
