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

// Function: entry_001ca0c8
// Address: 0x1ca0c8 - 0x1ca0dc
void entry_001ca0c8_0x1ca0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca0c8_0x1ca0c8");
#endif

    ctx->pc = 0x1ca0c8u;

    // 0x1ca0c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA0C8u;
    {
        const bool branch_taken_0x1ca0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0C8u;
        // 0x1ca0cc: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0c8) {
            ctx->pc = 0x1CA0E8u;
            return;
        }
    }
    ctx->pc = 0x1CA0D0u;
    // 0x1ca0d0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CA0D0u;
    {
        const bool branch_taken_0x1ca0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0d0) {
            ctx->pc = 0x1CA0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA0D0u;
            // 0x1ca0d4: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA11Cu;
            return;
        }
    }
    ctx->pc = 0x1CA0D8u;
    // 0x1ca0d8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1ca0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x1ca0dcu;
}
