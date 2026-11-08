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

// Function: entry_001b349c
// Address: 0x1b349c - 0x1b34ac
void entry_001b349c_0x1b349c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b349c_0x1b349c");
#endif

    ctx->pc = 0x1b349cu;

    // 0x1b349c: 0x1222002c  beq         $s1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B349Cu;
    {
        const bool branch_taken_0x1b349c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B349Cu;
        // 0x1b34a0: 0x3c040025  lui         $a0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b349c) {
            ctx->pc = 0x1B3550u;
            return;
        }
    }
    ctx->pc = 0x1B34A4u;
    // 0x1b34a4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1B34A4u;
    {
        const bool branch_taken_0x1b34a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34A4u;
        // 0x1b34a8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34a4) {
            ctx->pc = 0x1B3588u;
            return;
        }
    }
    ctx->pc = 0x1B34ACu;
}
