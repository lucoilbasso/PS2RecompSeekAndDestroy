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

// Function: entry_001225d0
// Address: 0x1225d0 - 0x1225dc
void entry_001225d0_0x1225d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001225d0_0x1225d0");
#endif

    ctx->pc = 0x1225d0u;

    // 0x1225d0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1225d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1225d4: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1225D4u;
    {
        const bool branch_taken_0x1225d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1225d4) {
            ctx->pc = 0x1225D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1225D4u;
            // 0x1225d8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1225B0u;
            return;
        }
    }
    ctx->pc = 0x1225DCu;
}
