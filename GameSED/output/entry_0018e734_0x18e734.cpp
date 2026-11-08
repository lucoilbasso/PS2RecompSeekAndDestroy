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

// Function: entry_0018e734
// Address: 0x18e734 - 0x18e770
void entry_0018e734_0x18e734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e734_0x18e734");
#endif

    ctx->pc = 0x18e734u;

label_18e734:
    // 0x18e734: 0x29020020  slti        $v0, $t0, 0x20
    ctx->pc = 0x18e734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x18e738: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18E738u;
    {
        const bool branch_taken_0x18e738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E738u;
        // 0x18e73c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e738) {
            ctx->pc = 0x18E784u;
            return;
        }
    }
    ctx->pc = 0x18E740u;
    // 0x18e740: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x18e740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e744: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18e748: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E748u;
    {
        const bool branch_taken_0x18e748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e748) {
            ctx->pc = 0x18E74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E748u;
            // 0x18e74c: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E770u;
            return;
        }
    }
    ctx->pc = 0x18E750u;
    // 0x18e750: 0x0  nop
    ctx->pc = 0x18e750u;
    // NOP
    // 0x18e754: 0x50e0fff6  beql        $a3, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x18E754u;
    {
        const bool branch_taken_0x18e754 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e754) {
            ctx->pc = 0x18E758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E754u;
            // 0x18e758: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E730u;
            return;
        }
    }
    ctx->pc = 0x18E75Cu;
    // 0x18e75c: 0x0  nop
    ctx->pc = 0x18e75cu;
    // NOP
    // 0x18e760: 0x0  nop
    ctx->pc = 0x18e760u;
    // NOP
    // 0x18e764: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x18E764u;
    {
        const bool branch_taken_0x18e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E764u;
        // 0x18e768: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e764) {
            ctx->pc = 0x18E734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e734;
        }
    }
    ctx->pc = 0x18E76Cu;
    // 0x18e76c: 0x0  nop
    ctx->pc = 0x18e76cu;
    // NOP
    ctx->pc = 0x18e770u;
}
