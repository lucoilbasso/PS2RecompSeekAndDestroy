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

// Function: entry_0011e2c8
// Address: 0x11e2c8 - 0x11e304
void entry_0011e2c8_0x11e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e2c8_0x11e2c8");
#endif

    ctx->pc = 0x11e2c8u;

label_11e2c8:
    // 0x11e2c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11e2c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e2cc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11e2d0: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x11e2d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x11e2d4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11E2D4u;
    {
        const bool branch_taken_0x11e2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2D4u;
        // 0x11e2d8: 0x4a1021  addu        $v0, $v0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2d4) {
            ctx->pc = 0x11E304u;
            return;
        }
    }
    ctx->pc = 0x11E2DCu;
    // 0x11e2dc: 0x10890009  beq         $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E2DCu;
    {
        const bool branch_taken_0x11e2dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x11E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2DCu;
        // 0x11e2e0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2dc) {
            ctx->pc = 0x11E304u;
            return;
        }
    }
    ctx->pc = 0x11E2E4u;
    // 0x11e2e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e2e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e2ec: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11e2f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11e2f4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x11e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11e2f8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11E2F8u;
    {
        const bool branch_taken_0x11e2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E2F8u;
        // 0x11e2fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2f8) {
            ctx->pc = 0x11E2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e2c8;
        }
    }
    ctx->pc = 0x11E300u;
    // 0x11e300: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11e300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11e304u;
}
