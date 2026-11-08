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

// Function: entry_0016d1c8
// Address: 0x16d1c8 - 0x16d1e0
void entry_0016d1c8_0x16d1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d1c8_0x16d1c8");
#endif

    ctx->pc = 0x16d1c8u;

    // 0x16d1c8: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D1C8u;
    {
        const bool branch_taken_0x16d1c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16d1c8) {
            ctx->pc = 0x16D1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D1C8u;
            // 0x16d1cc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D1E0u;
            return;
        }
    }
    ctx->pc = 0x16D1D0u;
    // 0x16d1d0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x16d1d4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16d1d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16D1D8u;
    {
        const bool branch_taken_0x16d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1D8u;
        // 0x16d1dc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1d8) {
            ctx->pc = 0x16D204u;
            return;
        }
    }
    ctx->pc = 0x16D1E0u;
}
