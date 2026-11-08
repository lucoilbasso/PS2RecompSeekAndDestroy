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

// Function: entry_0012e2c8
// Address: 0x12e2c8 - 0x12e2e0
void entry_0012e2c8_0x12e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e2c8_0x12e2c8");
#endif

    ctx->pc = 0x12e2c8u;

    // 0x12e2c8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x12e2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12e2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2d0: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x12e2d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e2d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12E2D4u;
    {
        const bool branch_taken_0x12e2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2D4u;
        // 0x12e2d8: 0x2671002c  addiu       $s1, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2d4) {
            ctx->pc = 0x12E2F8u;
            return;
        }
    }
    ctx->pc = 0x12E2DCu;
    // 0x12e2dc: 0x0  nop
    ctx->pc = 0x12e2dcu;
    // NOP
    ctx->pc = 0x12e2e0u;
}
