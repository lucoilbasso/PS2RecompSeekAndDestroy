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

// Function: entry_001606d8
// Address: 0x1606d8 - 0x1606fc
void entry_001606d8_0x1606d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001606d8_0x1606d8");
#endif

    ctx->pc = 0x1606d8u;

    // 0x1606d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1606d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1606dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1606dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1606e0: 0x8c423630  lw          $v0, 0x3630($v0)
    ctx->pc = 0x1606e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x1606e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1606E4u;
    {
        const bool branch_taken_0x1606e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1606E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606E4u;
        // 0x1606e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606e4) {
            ctx->pc = 0x1606FCu;
            return;
        }
    }
    ctx->pc = 0x1606ECu;
    // 0x1606ec: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x1606ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1606f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1606F0u;
    {
        const bool branch_taken_0x1606f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1606F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1606F0u;
        // 0x1606f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1606f0) {
            ctx->pc = 0x1606FCu;
            return;
        }
    }
    ctx->pc = 0x1606F8u;
    // 0x1606f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1606f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1606fcu;
}
