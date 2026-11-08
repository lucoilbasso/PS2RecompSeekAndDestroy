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

// Function: entry_001b15a0
// Address: 0x1b15a0 - 0x1b15b0
void entry_001b15a0_0x1b15a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b15a0_0x1b15a0");
#endif

    ctx->pc = 0x1b15a0u;

    // 0x1b15a0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B15A0u;
    {
        const bool branch_taken_0x1b15a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b15a0) {
            ctx->pc = 0x1B15A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B15A0u;
            // 0x1b15a4: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B15CCu;
            return;
        }
    }
    ctx->pc = 0x1B15A8u;
    // 0x1b15a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b15ac: 0x0  nop
    ctx->pc = 0x1b15acu;
    // NOP
    ctx->pc = 0x1b15b0u;
}
