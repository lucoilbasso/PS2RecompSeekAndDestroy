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

// Function: entry_001cfbc0
// Address: 0x1cfbc0 - 0x1cfbcc
void entry_001cfbc0_0x1cfbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfbc0_0x1cfbc0");
#endif

    ctx->pc = 0x1cfbc0u;

    // 0x1cfbc0: 0x510b0009  beql        $t0, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CFBC0u;
    {
        const bool branch_taken_0x1cfbc0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        if (branch_taken_0x1cfbc0) {
            ctx->pc = 0x1CFBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFBC0u;
            // 0x1cfbc4: 0x8d0b000c  lw          $t3, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFBE8u;
            return;
        }
    }
    ctx->pc = 0x1CFBC8u;
    // 0x1cfbc8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1cfbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    ctx->pc = 0x1cfbccu;
}
