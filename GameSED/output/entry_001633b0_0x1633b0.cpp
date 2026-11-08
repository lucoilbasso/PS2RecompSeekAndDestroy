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

// Function: entry_001633b0
// Address: 0x1633b0 - 0x1633c8
void entry_001633b0_0x1633b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001633b0_0x1633b0");
#endif

    ctx->pc = 0x1633b0u;

    // 0x1633b0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1633B0u;
    {
        const bool branch_taken_0x1633b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1633b0) {
            ctx->pc = 0x1633B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1633B0u;
            // 0x1633b4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1633C8u;
            return;
        }
    }
    ctx->pc = 0x1633B8u;
    // 0x1633b8: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1633b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1633bc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1633bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1633c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1633C0u;
    {
        const bool branch_taken_0x1633c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633C0u;
        // 0x1633c4: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633c0) {
            ctx->pc = 0x1633F0u;
            return;
        }
    }
    ctx->pc = 0x1633C8u;
}
