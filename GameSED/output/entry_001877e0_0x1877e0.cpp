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

// Function: entry_001877e0
// Address: 0x1877e0 - 0x1877ec
void entry_001877e0_0x1877e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001877e0_0x1877e0");
#endif

    ctx->pc = 0x1877e0u;

    // 0x1877e0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1877E0u;
    {
        const bool branch_taken_0x1877e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877E0u;
        // 0x1877e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877e0) {
            ctx->pc = 0x1877ECu;
            return;
        }
    }
    ctx->pc = 0x1877E8u;
    // 0x1877e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1877e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1877ecu;
}
