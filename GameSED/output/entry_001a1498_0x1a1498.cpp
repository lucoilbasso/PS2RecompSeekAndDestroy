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

// Function: entry_001a1498
// Address: 0x1a1498 - 0x1a14ac
void entry_001a1498_0x1a1498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1498_0x1a1498");
#endif

    ctx->pc = 0x1a1498u;

    // 0x1a1498: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a1498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a149c: 0x0  nop
    ctx->pc = 0x1a149cu;
    // NOP
    // 0x1a14a0: 0x0  nop
    ctx->pc = 0x1a14a0u;
    // NOP
    // 0x1a14a4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A14A4u;
    {
        const bool branch_taken_0x1a14a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a14a4) {
            ctx->pc = 0x1A14A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A14A4u;
            // 0x1a14a8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1488u;
            return;
        }
    }
    ctx->pc = 0x1A14ACu;
}
