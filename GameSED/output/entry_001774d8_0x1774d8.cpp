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

// Function: entry_001774d8
// Address: 0x1774d8 - 0x1774f0
void entry_001774d8_0x1774d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001774d8_0x1774d8");
#endif

    ctx->pc = 0x1774d8u;

    // 0x1774d8: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1774D8u;
    {
        const bool branch_taken_0x1774d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1774d8) {
            ctx->pc = 0x1774DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1774D8u;
            // 0x1774dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177500u;
            return;
        }
    }
    ctx->pc = 0x1774E0u;
    // 0x1774e0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1774E0u;
    {
        const bool branch_taken_0x1774e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1774E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774E0u;
        // 0x1774e4: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774e0) {
            ctx->pc = 0x1774F0u;
            return;
        }
    }
    ctx->pc = 0x1774E8u;
    // 0x1774e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1774E8u;
    {
        const bool branch_taken_0x1774e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774E8u;
        // 0x1774ec: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774e8) {
            ctx->pc = 0x1774F4u;
            return;
        }
    }
    ctx->pc = 0x1774F0u;
}
