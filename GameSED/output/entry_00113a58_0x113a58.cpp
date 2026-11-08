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

// Function: entry_00113a58
// Address: 0x113a58 - 0x113a7c
void entry_00113a58_0x113a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113a58_0x113a58");
#endif

    ctx->pc = 0x113a58u;

label_113a58:
    // 0x113a58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113a5c: 0x0  nop
    ctx->pc = 0x113a5cu;
    // NOP
    // 0x113a60: 0x0  nop
    ctx->pc = 0x113a60u;
    // NOP
    // 0x113a64: 0x0  nop
    ctx->pc = 0x113a64u;
    // NOP
    // 0x113a68: 0x0  nop
    ctx->pc = 0x113a68u;
    // NOP
    // 0x113a6c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113A6Cu;
    {
        const bool branch_taken_0x113a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113a6c) {
            ctx->pc = 0x113A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113A6Cu;
            // 0x113a70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113a58;
        }
    }
    ctx->pc = 0x113A74u;
    // 0x113a74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x113a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x113a78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x113a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x113a7cu;
}
