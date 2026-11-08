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

// Function: entry_001b1c30
// Address: 0x1b1c30 - 0x1b1c48
void entry_001b1c30_0x1b1c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1c30_0x1b1c30");
#endif

    ctx->pc = 0x1b1c30u;

    // 0x1b1c30: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1C30u;
    {
        const bool branch_taken_0x1b1c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c30) {
            ctx->pc = 0x1B1C68u;
            return;
        }
    }
    ctx->pc = 0x1B1C38u;
    // 0x1b1c38: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1b1c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1b1c3c: 0x50710009  beql        $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B1C3Cu;
    {
        const bool branch_taken_0x1b1c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1b1c3c) {
            ctx->pc = 0x1B1C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1C3Cu;
            // 0x1b1c40: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1C64u;
            return;
        }
    }
    ctx->pc = 0x1B1C44u;
    // 0x1b1c44: 0x0  nop
    ctx->pc = 0x1b1c44u;
    // NOP
    ctx->pc = 0x1b1c48u;
}
