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

// Function: entry_001123a8
// Address: 0x1123a8 - 0x1123c0
void entry_001123a8_0x1123a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001123a8_0x1123a8");
#endif

    ctx->pc = 0x1123a8u;

    // 0x1123a8: 0x6030005  bgezl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1123A8u;
    {
        const bool branch_taken_0x1123a8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1123a8) {
            ctx->pc = 0x1123ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1123A8u;
            // 0x1123ac: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1123C0u;
            return;
        }
    }
    ctx->pc = 0x1123B0u;
    // 0x1123b0: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x1123b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1123b4: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1123b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1123b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1123B8u;
    {
        const bool branch_taken_0x1123b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123B8u;
        // 0x1123bc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123b8) {
            ctx->pc = 0x1123E4u;
            return;
        }
    }
    ctx->pc = 0x1123C0u;
}
