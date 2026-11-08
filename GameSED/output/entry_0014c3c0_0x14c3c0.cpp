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

// Function: entry_0014c3c0
// Address: 0x14c3c0 - 0x14c3cc
void entry_0014c3c0_0x14c3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c3c0_0x14c3c0");
#endif

    ctx->pc = 0x14c3c0u;

    // 0x14c3c0: 0x0  nop
    ctx->pc = 0x14c3c0u;
    // NOP
    // 0x14c3c4: 0x5480fff6  bnel        $a0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x14C3C4u;
    {
        const bool branch_taken_0x14c3c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c3c4) {
            ctx->pc = 0x14C3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C3C4u;
            // 0x14c3c8: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C3A0u;
            return;
        }
    }
    ctx->pc = 0x14C3CCu;
}
