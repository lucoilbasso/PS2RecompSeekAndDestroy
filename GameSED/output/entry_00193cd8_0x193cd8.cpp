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

// Function: entry_00193cd8
// Address: 0x193cd8 - 0x193ce8
void entry_00193cd8_0x193cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193cd8_0x193cd8");
#endif

    ctx->pc = 0x193cd8u;

    // 0x193cd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cdc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x193CDCu;
    {
        const bool branch_taken_0x193cdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x193CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CDCu;
        // 0x193ce0: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193cdc) {
            ctx->pc = 0x193CE8u;
            return;
        }
    }
    ctx->pc = 0x193CE4u;
    // 0x193ce4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x193ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x193ce8u;
}
