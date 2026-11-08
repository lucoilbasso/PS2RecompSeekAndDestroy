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

// Function: entry_00162dc8
// Address: 0x162dc8 - 0x162de0
void entry_00162dc8_0x162dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162dc8_0x162dc8");
#endif

    ctx->pc = 0x162dc8u;

    // 0x162dc8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x162DC8u;
    {
        const bool branch_taken_0x162dc8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x162DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DC8u;
        // 0x162dcc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dc8) {
            ctx->pc = 0x162DE0u;
            return;
        }
    }
    ctx->pc = 0x162DD0u;
    // 0x162dd0: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x162dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x162dd4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x162dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x162dd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x162DD8u;
    {
        const bool branch_taken_0x162dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DD8u;
        // 0x162ddc: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dd8) {
            ctx->pc = 0x162E08u;
            return;
        }
    }
    ctx->pc = 0x162DE0u;
}
