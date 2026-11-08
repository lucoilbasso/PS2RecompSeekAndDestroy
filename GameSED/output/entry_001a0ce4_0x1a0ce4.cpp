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

// Function: entry_001a0ce4
// Address: 0x1a0ce4 - 0x1a0cec
void entry_001a0ce4_0x1a0ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0ce4_0x1a0ce4");
#endif

    ctx->pc = 0x1a0ce4u;

    // 0x1a0ce4: 0x5620ffee  bnel        $s1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A0CE4u;
    {
        const bool branch_taken_0x1a0ce4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ce4) {
            ctx->pc = 0x1A0CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0CE4u;
            // 0x1a0ce8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0CA0u;
            return;
        }
    }
    ctx->pc = 0x1A0CECu;
}
