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

// Function: entry_00155548
// Address: 0x155548 - 0x15556c
void entry_00155548_0x155548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155548_0x155548");
#endif

    ctx->pc = 0x155548u;

label_155548:
    // 0x155548: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x155548u;
    {
        const bool branch_taken_0x155548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x15554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155548u;
        // 0x15554c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155548) {
            ctx->pc = 0x155570u;
            return;
        }
    }
    ctx->pc = 0x155550u;
    // 0x155550: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x155550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x155554: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155558: 0x0  nop
    ctx->pc = 0x155558u;
    // NOP
    // 0x15555c: 0x0  nop
    ctx->pc = 0x15555cu;
    // NOP
    // 0x155560: 0x0  nop
    ctx->pc = 0x155560u;
    // NOP
    // 0x155564: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x155564u;
    {
        const bool branch_taken_0x155564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155564) {
            ctx->pc = 0x155548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155548;
        }
    }
    ctx->pc = 0x15556Cu;
}
