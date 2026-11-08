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

// Function: entry_001aa740
// Address: 0x1aa740 - 0x1aa76c
void entry_001aa740_0x1aa740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa740_0x1aa740");
#endif

    ctx->pc = 0x1aa740u;

    // 0x1aa740: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aa740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aa744: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1AA744u;
    {
        const bool branch_taken_0x1aa744 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA744u;
        // 0x1aa748: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa744) {
            ctx->pc = 0x1AA854u;
            return;
        }
    }
    ctx->pc = 0x1AA74Cu;
    // 0x1aa74c: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x1aa74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1aa750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa754: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1aa754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1aa758: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1AA758u;
    {
        const bool branch_taken_0x1aa758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA758u;
        // 0x1aa75c: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa758) {
            ctx->pc = 0x1AA7E8u;
            return;
        }
    }
    ctx->pc = 0x1AA760u;
    // 0x1aa760: 0x260309ff  addiu       $v1, $s0, 0x9FF
    ctx->pc = 0x1aa760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
    // 0x1aa764: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AA764u;
    {
        const bool branch_taken_0x1aa764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa764) {
            ctx->pc = 0x1AA768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA764u;
            // 0x1aa768: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA76Cu;
            return;
        }
    }
    ctx->pc = 0x1AA76Cu;
}
