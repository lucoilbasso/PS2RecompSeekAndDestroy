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

// Function: entry_00175ce4
// Address: 0x175ce4 - 0x175cfc
void entry_00175ce4_0x175ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175ce4_0x175ce4");
#endif

    ctx->pc = 0x175ce4u;

    // 0x175ce4: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x175ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x175ce8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175CE8u;
    {
        const bool branch_taken_0x175ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CE8u;
        // 0x175cec: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ce8) {
            ctx->pc = 0x175CFCu;
            return;
        }
    }
    ctx->pc = 0x175CF0u;
    // 0x175cf0: 0x8dc20014  lw          $v0, 0x14($t6)
    ctx->pc = 0x175cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
    // 0x175cf4: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x175CF4u;
    {
        const bool branch_taken_0x175cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CF4u;
        // 0x175cf8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cf4) {
            ctx->pc = 0x175C10u;
            return;
        }
    }
    ctx->pc = 0x175CFCu;
}
