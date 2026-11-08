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

// Function: entry_0014f2c0
// Address: 0x14f2c0 - 0x14f2e8
void entry_0014f2c0_0x14f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f2c0_0x14f2c0");
#endif

    ctx->pc = 0x14f2c0u;

    // 0x14f2c0: 0x262406dc  addiu       $a0, $s1, 0x6DC
    ctx->pc = 0x14f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
    // 0x14f2c4: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x14f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14f2c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F2C8u;
    {
        const bool branch_taken_0x14f2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2C8u;
        // 0x14f2cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2c8) {
            ctx->pc = 0x14F2E8u;
            return;
        }
    }
    ctx->pc = 0x14F2D0u;
    // 0x14f2d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14f2d4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x14F2D4u;
    {
        const bool branch_taken_0x14f2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2D4u;
        // 0x14f2d8: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2d4) {
            ctx->pc = 0x14F3A8u;
            return;
        }
    }
    ctx->pc = 0x14F2DCu;
    // 0x14f2dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x14F2DCu;
    {
        const bool branch_taken_0x14f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2DCu;
        // 0x14f2e0: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2dc) {
            ctx->pc = 0x14F368u;
            return;
        }
    }
    ctx->pc = 0x14F2E4u;
    // 0x14f2e4: 0x0  nop
    ctx->pc = 0x14f2e4u;
    // NOP
    ctx->pc = 0x14f2e8u;
}
