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

// Function: entry_001112a0
// Address: 0x1112a0 - 0x1112b8
void entry_001112a0_0x1112a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001112a0_0x1112a0");
#endif

    ctx->pc = 0x1112a0u;

    // 0x1112a0: 0x6230005  bgezl       $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1112A0u;
    {
        const bool branch_taken_0x1112a0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1112a0) {
            ctx->pc = 0x1112A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1112A0u;
            // 0x1112a4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1112B8u;
            return;
        }
    }
    ctx->pc = 0x1112A8u;
    // 0x1112a8: 0x8ea301b4  lw          $v1, 0x1B4($s5)
    ctx->pc = 0x1112a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
    // 0x1112ac: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x1112acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1112b0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1112B0u;
    {
        const bool branch_taken_0x1112b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112B0u;
        // 0x1112b4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112b0) {
            ctx->pc = 0x11138Cu;
            return;
        }
    }
    ctx->pc = 0x1112B8u;
}
