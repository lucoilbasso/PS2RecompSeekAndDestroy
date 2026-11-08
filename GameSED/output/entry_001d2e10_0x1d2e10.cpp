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

// Function: entry_001d2e10
// Address: 0x1d2e10 - 0x1d2e28
void entry_001d2e10_0x1d2e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2e10_0x1d2e10");
#endif

    ctx->pc = 0x1d2e10u;

    // 0x1d2e10: 0xa812  mflo        $s5
    ctx->pc = 0x1d2e10u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x1d2e14: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1d2e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e18: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D2E18u;
    {
        const bool branch_taken_0x1d2e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E18u;
        // 0x1d2e1c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e18) {
            ctx->pc = 0x1D2EC8u;
            return;
        }
    }
    ctx->pc = 0x1D2E20u;
    // 0x1d2e20: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d2e20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2e24: 0x0  nop
    ctx->pc = 0x1d2e24u;
    // NOP
    ctx->pc = 0x1d2e28u;
}
