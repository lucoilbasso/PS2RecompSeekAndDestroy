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

// Function: entry_0010e7a0
// Address: 0x10e7a0 - 0x10e7c0
void entry_0010e7a0_0x10e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e7a0_0x10e7a0");
#endif

    ctx->pc = 0x10e7a0u;

    // 0x10e7a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10e7a4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x10e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x10e7a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E7A8u;
    {
        const bool branch_taken_0x10e7a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7A8u;
        // 0x10e7ac: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7a8) {
            ctx->pc = 0x10E7C0u;
            return;
        }
    }
    ctx->pc = 0x10E7B0u;
    // 0x10e7b0: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x10e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x10e7b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10E7B4u;
    {
        const bool branch_taken_0x10e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E7B4u;
        // 0x10e7b8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e7b4) {
            ctx->pc = 0x10E7C4u;
            return;
        }
    }
    ctx->pc = 0x10E7BCu;
    // 0x10e7bc: 0x0  nop
    ctx->pc = 0x10e7bcu;
    // NOP
    ctx->pc = 0x10e7c0u;
}
