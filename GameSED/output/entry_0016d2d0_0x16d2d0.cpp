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

// Function: entry_0016d2d0
// Address: 0x16d2d0 - 0x16d2e8
void entry_0016d2d0_0x16d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d2d0_0x16d2d0");
#endif

    ctx->pc = 0x16d2d0u;

    // 0x16d2d0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D2D0u;
    {
        const bool branch_taken_0x16d2d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16d2d0) {
            ctx->pc = 0x16D2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D2D0u;
            // 0x16d2d4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D2E8u;
            return;
        }
    }
    ctx->pc = 0x16D2D8u;
    // 0x16d2d8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x16d2dc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16d2e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16D2E0u;
    {
        const bool branch_taken_0x16d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2E0u;
        // 0x16d2e4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2e0) {
            ctx->pc = 0x16D30Cu;
            return;
        }
    }
    ctx->pc = 0x16D2E8u;
}
