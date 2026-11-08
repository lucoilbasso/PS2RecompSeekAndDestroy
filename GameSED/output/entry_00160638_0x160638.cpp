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

// Function: entry_00160638
// Address: 0x160638 - 0x160658
void entry_00160638_0x160638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160638_0x160638");
#endif

    ctx->pc = 0x160638u;

    // 0x160638: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x160638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x16063c: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x16063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x160640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160640u;
    {
        const bool branch_taken_0x160640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160640u;
        // 0x160644: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160640) {
            ctx->pc = 0x160658u;
            return;
        }
    }
    ctx->pc = 0x160648u;
    // 0x160648: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x160648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x16064c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16064Cu;
    {
        const bool branch_taken_0x16064c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16064Cu;
        // 0x160650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16064c) {
            ctx->pc = 0x160658u;
            return;
        }
    }
    ctx->pc = 0x160654u;
    // 0x160654: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x160654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160658u;
}
