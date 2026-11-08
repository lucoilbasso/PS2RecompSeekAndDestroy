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

// Function: entry_00113710
// Address: 0x113710 - 0x113734
void entry_00113710_0x113710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113710_0x113710");
#endif

    ctx->pc = 0x113710u;

label_113710:
    // 0x113710: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113714: 0x0  nop
    ctx->pc = 0x113714u;
    // NOP
    // 0x113718: 0x0  nop
    ctx->pc = 0x113718u;
    // NOP
    // 0x11371c: 0x0  nop
    ctx->pc = 0x11371cu;
    // NOP
    // 0x113720: 0x0  nop
    ctx->pc = 0x113720u;
    // NOP
    // 0x113724: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113724u;
    {
        const bool branch_taken_0x113724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113724) {
            ctx->pc = 0x113728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113724u;
            // 0x113728: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113710;
        }
    }
    ctx->pc = 0x11372Cu;
    // 0x11372c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x11372cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x113730: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x113730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x113734u;
}
