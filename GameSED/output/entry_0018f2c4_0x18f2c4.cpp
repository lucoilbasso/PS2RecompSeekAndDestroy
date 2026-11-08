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

// Function: entry_0018f2c4
// Address: 0x18f2c4 - 0x18f2d0
void entry_0018f2c4_0x18f2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f2c4_0x18f2c4");
#endif

    ctx->pc = 0x18f2c4u;

    // 0x18f2c4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F2C4u;
    {
        const bool branch_taken_0x18f2c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2C4u;
        // 0x18f2c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2c4) {
            ctx->pc = 0x18F2D0u;
            return;
        }
    }
    ctx->pc = 0x18F2CCu;
    // 0x18f2cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x18f2d0u;
}
