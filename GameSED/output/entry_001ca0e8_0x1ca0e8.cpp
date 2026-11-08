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

// Function: entry_001ca0e8
// Address: 0x1ca0e8 - 0x1ca0f4
void entry_001ca0e8_0x1ca0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca0e8_0x1ca0e8");
#endif

    ctx->pc = 0x1ca0e8u;

    // 0x1ca0e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA0E8u;
    {
        const bool branch_taken_0x1ca0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0E8u;
        // 0x1ca0ec: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0e8) {
            ctx->pc = 0x1CA110u;
            return;
        }
    }
    ctx->pc = 0x1CA0F0u;
    // 0x1ca0f0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ca0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->pc = 0x1ca0f4u;
}
