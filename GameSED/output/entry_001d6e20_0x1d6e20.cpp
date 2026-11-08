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

// Function: entry_001d6e20
// Address: 0x1d6e20 - 0x1d6e40
void entry_001d6e20_0x1d6e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6e20_0x1d6e20");
#endif

    ctx->pc = 0x1d6e20u;

    // 0x1d6e20: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d6e24: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D6E24u;
    {
        const bool branch_taken_0x1d6e24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E24u;
        // 0x1d6e28: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e24) {
            ctx->pc = 0x1D6E94u;
            return;
        }
    }
    ctx->pc = 0x1D6E2Cu;
    // 0x1d6e2c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1d6e2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e30: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1d6e30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e34: 0x3c150025  lui         $s5, 0x25
    ctx->pc = 0x1d6e34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)37 << 16));
    // 0x1d6e38: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1d6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d6e3c: 0x0  nop
    ctx->pc = 0x1d6e3cu;
    // NOP
    ctx->pc = 0x1d6e40u;
}
