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

// Function: entry_001b9b20
// Address: 0x1b9b20 - 0x1b9b2c
void entry_001b9b20_0x1b9b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9b20_0x1b9b20");
#endif

    ctx->pc = 0x1b9b20u;

    // 0x1b9b20: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9B20u;
    {
        const bool branch_taken_0x1b9b20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b9b20) {
            ctx->pc = 0x1B9B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9B20u;
            // 0x1b9b24: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9B2Cu;
            return;
        }
    }
    ctx->pc = 0x1B9B28u;
    // 0x1b9b28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b9b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b9b2cu;
}
