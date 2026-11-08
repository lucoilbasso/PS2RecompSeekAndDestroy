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

// Function: entry_001c1e14
// Address: 0x1c1e14 - 0x1c1e40
void entry_001c1e14_0x1c1e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1e14_0x1c1e14");
#endif

    ctx->pc = 0x1c1e14u;

    // 0x1c1e14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1c1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1c1e18: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1c1e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1e1c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1c1e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1c1e20: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1c1e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c1e24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c1e28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1c1e2c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c1e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c1e30: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C1E30u;
    {
        const bool branch_taken_0x1c1e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E30u;
        // 0x1c1e34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e30) {
            ctx->pc = 0x1C1E88u;
            return;
        }
    }
    ctx->pc = 0x1C1E38u;
    // 0x1c1e38: 0x3c110025  lui         $s1, 0x25
    ctx->pc = 0x1c1e38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)37 << 16));
    // 0x1c1e3c: 0x0  nop
    ctx->pc = 0x1c1e3cu;
    // NOP
    ctx->pc = 0x1c1e40u;
}
