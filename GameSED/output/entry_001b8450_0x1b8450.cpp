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

// Function: entry_001b8450
// Address: 0x1b8450 - 0x1b8460
void entry_001b8450_0x1b8450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8450_0x1b8450");
#endif

    ctx->pc = 0x1b8450u;

    // 0x1b8450: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8450u;
    {
        const bool branch_taken_0x1b8450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8450u;
        // 0x1b8454: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8450) {
            ctx->pc = 0x1B8488u;
            return;
        }
    }
    ctx->pc = 0x1B8458u;
    // 0x1b8458: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1b8458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b845c: 0x0  nop
    ctx->pc = 0x1b845cu;
    // NOP
    ctx->pc = 0x1b8460u;
}
