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

// Function: entry_00191a60
// Address: 0x191a60 - 0x191a80
void entry_00191a60_0x191a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191a60_0x191a60");
#endif

    ctx->pc = 0x191a60u;

label_191a60:
    // 0x191a60: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x191A60u;
    {
        const bool branch_taken_0x191a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x191a60) {
            ctx->pc = 0x191A80u;
            return;
        }
    }
    ctx->pc = 0x191A68u;
    // 0x191a68: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x191a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x191a6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x191A6Cu;
    {
        const bool branch_taken_0x191a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a6c) {
            ctx->pc = 0x191A80u;
            return;
        }
    }
    ctx->pc = 0x191A74u;
    // 0x191a74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191a78: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x191A78u;
    {
        const bool branch_taken_0x191a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A78u;
        // 0x191a7c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a78) {
            ctx->pc = 0x191A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191a60;
        }
    }
    ctx->pc = 0x191A80u;
}
