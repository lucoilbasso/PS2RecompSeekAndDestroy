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

// Function: entry_001c86a0
// Address: 0x1c86a0 - 0x1c86b0
void entry_001c86a0_0x1c86a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c86a0_0x1c86a0");
#endif

    ctx->pc = 0x1c86a0u;

    // 0x1c86a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C86A0u;
    {
        const bool branch_taken_0x1c86a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86A0u;
        // 0x1c86a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86a0) {
            ctx->pc = 0x1C86B0u;
            return;
        }
    }
    ctx->pc = 0x1C86A8u;
    // 0x1c86a8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1C86A8u;
    {
        const bool branch_taken_0x1c86a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86A8u;
        // 0x1c86ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86a8) {
            ctx->pc = 0x1C8848u;
            return;
        }
    }
    ctx->pc = 0x1C86B0u;
}
