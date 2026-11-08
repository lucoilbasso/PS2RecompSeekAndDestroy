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

// Function: entry_00111488
// Address: 0x111488 - 0x1114a0
void entry_00111488_0x111488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111488_0x111488");
#endif

    ctx->pc = 0x111488u;

    // 0x111488: 0x6230005  bgezl       $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x111488u;
    {
        const bool branch_taken_0x111488 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x111488) {
            ctx->pc = 0x11148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111488u;
            // 0x11148c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1114A0u;
            return;
        }
    }
    ctx->pc = 0x111490u;
    // 0x111490: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x111490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x111494: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x111494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x111498: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x111498u;
    {
        const bool branch_taken_0x111498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111498u;
        // 0x11149c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111498) {
            ctx->pc = 0x1114C4u;
            return;
        }
    }
    ctx->pc = 0x1114A0u;
}
