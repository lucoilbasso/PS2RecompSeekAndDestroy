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

// Function: entry_001b1b9c
// Address: 0x1b1b9c - 0x1b1bb0
void entry_001b1b9c_0x1b1b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1b9c_0x1b1b9c");
#endif

    ctx->pc = 0x1b1b9cu;

    // 0x1b1b9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ba0: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1b1ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1b1ba4: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1BA4u;
    {
        const bool branch_taken_0x1b1ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ba4) {
            ctx->pc = 0x1B1BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1BA4u;
            // 0x1b1ba8: 0xac950038  sw          $s5, 0x38($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1BD0u;
            return;
        }
    }
    ctx->pc = 0x1B1BACu;
    // 0x1b1bac: 0x0  nop
    ctx->pc = 0x1b1bacu;
    // NOP
    ctx->pc = 0x1b1bb0u;
}
