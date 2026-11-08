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

// Function: entry_00113888
// Address: 0x113888 - 0x1138ac
void entry_00113888_0x113888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113888_0x113888");
#endif

    ctx->pc = 0x113888u;

label_113888:
    // 0x113888: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11388c: 0x0  nop
    ctx->pc = 0x11388cu;
    // NOP
    // 0x113890: 0x0  nop
    ctx->pc = 0x113890u;
    // NOP
    // 0x113894: 0x0  nop
    ctx->pc = 0x113894u;
    // NOP
    // 0x113898: 0x0  nop
    ctx->pc = 0x113898u;
    // NOP
    // 0x11389c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11389Cu;
    {
        const bool branch_taken_0x11389c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11389c) {
            ctx->pc = 0x1138A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11389Cu;
            // 0x1138a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113888;
        }
    }
    ctx->pc = 0x1138A4u;
    // 0x1138a4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1138a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1138a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1138a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1138acu;
}
