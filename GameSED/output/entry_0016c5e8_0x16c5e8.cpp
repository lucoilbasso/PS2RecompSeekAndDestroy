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

// Function: entry_0016c5e8
// Address: 0x16c5e8 - 0x16c600
void entry_0016c5e8_0x16c5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c5e8_0x16c5e8");
#endif

    ctx->pc = 0x16c5e8u;

    // 0x16c5e8: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C5E8u;
    {
        const bool branch_taken_0x16c5e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16c5e8) {
            ctx->pc = 0x16C5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C5E8u;
            // 0x16c5ec: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C600u;
            return;
        }
    }
    ctx->pc = 0x16C5F0u;
    // 0x16c5f0: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x16c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x16c5f4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x16c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16c5f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16C5F8u;
    {
        const bool branch_taken_0x16c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5F8u;
        // 0x16c5fc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5f8) {
            ctx->pc = 0x16C624u;
            return;
        }
    }
    ctx->pc = 0x16C600u;
}
