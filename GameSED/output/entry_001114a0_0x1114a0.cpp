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

// Function: entry_001114a0
// Address: 0x1114a0 - 0x1114c0
void entry_001114a0_0x1114a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001114a0_0x1114a0");
#endif

    ctx->pc = 0x1114a0u;

    // 0x1114a0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1114a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1114a4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x1114a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x1114a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1114A8u;
    {
        const bool branch_taken_0x1114a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1114ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114A8u;
        // 0x1114ac: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114a8) {
            ctx->pc = 0x1114C0u;
            return;
        }
    }
    ctx->pc = 0x1114B0u;
    // 0x1114b0: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x1114b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x1114b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1114B4u;
    {
        const bool branch_taken_0x1114b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114B4u;
        // 0x1114b8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114b4) {
            ctx->pc = 0x1114C4u;
            return;
        }
    }
    ctx->pc = 0x1114BCu;
    // 0x1114bc: 0x0  nop
    ctx->pc = 0x1114bcu;
    // NOP
    ctx->pc = 0x1114c0u;
}
