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

// Function: entry_001460f0
// Address: 0x1460f0 - 0x1460f8
void entry_001460f0_0x1460f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001460f0_0x1460f0");
#endif

    ctx->pc = 0x1460f0u;

    // 0x1460f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1460F0u;
    {
        const bool branch_taken_0x1460f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1460F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460F0u;
        // 0x1460f4: 0x8e300034  lw          $s0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460f0) {
            ctx->pc = 0x146104u;
            return;
        }
    }
    ctx->pc = 0x1460F8u;
}
