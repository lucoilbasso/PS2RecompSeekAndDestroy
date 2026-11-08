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

// Function: entry_001c7df8
// Address: 0x1c7df8 - 0x1c7e18
void entry_001c7df8_0x1c7df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7df8_0x1c7df8");
#endif

    ctx->pc = 0x1c7df8u;

    // 0x1c7df8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c7df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c7dfc: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1c7dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1c7e00: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1c7e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1c7e04: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1C7E04u;
    {
        const bool branch_taken_0x1c7e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e04) {
            ctx->pc = 0x1C7F34u;
            return;
        }
    }
    ctx->pc = 0x1C7E0Cu;
    // 0x1c7e0c: 0x3c10bff0  lui         $s0, 0xBFF0
    ctx->pc = 0x1c7e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49136 << 16));
    // 0x1c7e10: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1C7E10u;
    {
        const bool branch_taken_0x1c7e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E10u;
        // 0x1c7e14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e10) {
            ctx->pc = 0x1C7F34u;
            return;
        }
    }
    ctx->pc = 0x1C7E18u;
}
