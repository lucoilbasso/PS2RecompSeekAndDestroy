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

// Function: entry_0014955c
// Address: 0x14955c - 0x149578
void entry_0014955c_0x14955c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014955c_0x14955c");
#endif

    ctx->pc = 0x14955cu;

    // 0x14955c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14955Cu;
    {
        const bool branch_taken_0x14955c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x149560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14955Cu;
        // 0x149560: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14955c) {
            ctx->pc = 0x149578u;
            return;
        }
    }
    ctx->pc = 0x149564u;
    // 0x149564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149568: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149568u;
    {
        const bool branch_taken_0x149568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149568u;
        // 0x14956c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149568) {
            ctx->pc = 0x149588u;
            return;
        }
    }
    ctx->pc = 0x149570u;
    // 0x149570: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x149570u;
    {
        const bool branch_taken_0x149570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149570u;
        // 0x149574: 0x34420030  ori         $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149570) {
            ctx->pc = 0x14958Cu;
            return;
        }
    }
    ctx->pc = 0x149578u;
}
