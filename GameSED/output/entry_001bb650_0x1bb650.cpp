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

// Function: entry_001bb650
// Address: 0x1bb650 - 0x1bb668
void entry_001bb650_0x1bb650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb650_0x1bb650");
#endif

    ctx->pc = 0x1bb650u;

    // 0x1bb650: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bb650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bb654: 0x8c43daf0  lw          $v1, -0x2510($v0)
    ctx->pc = 0x1bb654u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24DAF0u));
    // 0x1bb658: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB658u;
    {
        const bool branch_taken_0x1bb658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB658u;
        // 0x1bb65c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb658) {
            ctx->pc = 0x1BB668u;
            return;
        }
    }
    ctx->pc = 0x1BB660u;
    // 0x1bb660: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1BB660u;
    {
        const bool branch_taken_0x1bb660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB660u;
        // 0x1bb664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb660) {
            ctx->pc = 0x1BB750u;
            return;
        }
    }
    ctx->pc = 0x1BB668u;
}
