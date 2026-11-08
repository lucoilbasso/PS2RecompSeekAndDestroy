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

// Function: entry_001cecd0
// Address: 0x1cecd0 - 0x1cecf8
void entry_001cecd0_0x1cecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cecd0_0x1cecd0");
#endif

    ctx->pc = 0x1cecd0u;

    // 0x1cecd0: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x1CECD0u;
    {
        const bool branch_taken_0x1cecd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECD0u;
        // 0x1cecd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cecd0) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CECD8u;
    // 0x1cecd8: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CECD8u;
    {
        const bool branch_taken_0x1cecd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECD8u;
        // 0x1cecdc: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cecd8) {
            ctx->pc = 0x1CECF8u;
            return;
        }
    }
    ctx->pc = 0x1CECE0u;
    // 0x1cece0: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x1cece0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cece4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cece4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cece8: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x1cece8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1cecec: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x1CECECu;
    {
        const bool branch_taken_0x1cecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECECu;
        // 0x1cecf0: 0x2b00b  movn        $s6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cecec) {
            ctx->pc = 0x1CEBA0u;
            return;
        }
    }
    ctx->pc = 0x1CECF4u;
    // 0x1cecf4: 0x0  nop
    ctx->pc = 0x1cecf4u;
    // NOP
    ctx->pc = 0x1cecf8u;
}
