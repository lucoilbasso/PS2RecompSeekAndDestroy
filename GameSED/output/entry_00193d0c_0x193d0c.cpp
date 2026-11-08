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

// Function: entry_00193d0c
// Address: 0x193d0c - 0x193d30
void entry_00193d0c_0x193d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193d0c_0x193d0c");
#endif

    ctx->pc = 0x193d0cu;

    // 0x193d0c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x193d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x193d10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193d10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d14: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x193d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x193d18: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x193d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x193d1c: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x193d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x193d20: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x193D20u;
    {
        const bool branch_taken_0x193d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x193D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D20u;
        // 0x193d24: 0x8c670020  lw          $a3, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d20) {
            ctx->pc = 0x193D64u;
            return;
        }
    }
    ctx->pc = 0x193D28u;
    // 0x193d28: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x193d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x193d2c: 0x0  nop
    ctx->pc = 0x193d2cu;
    // NOP
    ctx->pc = 0x193d30u;
}
