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

// Function: entry_001a07c0
// Address: 0x1a07c0 - 0x1a07e0
void entry_001a07c0_0x1a07c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a07c0_0x1a07c0");
#endif

    ctx->pc = 0x1a07c0u;

    // 0x1a07c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A07C0u;
    {
        const bool branch_taken_0x1a07c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07C0u;
        // 0x1a07c4: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07c0) {
            ctx->pc = 0x1A07E0u;
            return;
        }
    }
    ctx->pc = 0x1A07C8u;
    // 0x1a07c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a07cc: 0x3c070024  lui         $a3, 0x24
    ctx->pc = 0x1a07ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)36 << 16));
    // 0x1a07d0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1a07d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a07d4: 0x8ce7fa00  lw          $a3, -0x600($a3)
    ctx->pc = 0x1a07d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294965760)));
    // 0x1a07d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A07D8u;
    {
        const bool branch_taken_0x1a07d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07D8u;
        // 0x1a07dc: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07d8) {
            ctx->pc = 0x1A07E8u;
            return;
        }
    }
    ctx->pc = 0x1A07E0u;
}
