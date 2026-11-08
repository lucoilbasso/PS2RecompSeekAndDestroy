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

// Function: entry_0010d354
// Address: 0x10d354 - 0x10d36c
void entry_0010d354_0x10d354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d354_0x10d354");
#endif

    ctx->pc = 0x10d354u;

    // 0x10d354: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x10d354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10d358: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D358u;
    {
        const bool branch_taken_0x10d358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D358u;
        // 0x10d35c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d358) {
            ctx->pc = 0x10D36Cu;
            return;
        }
    }
    ctx->pc = 0x10D360u;
    // 0x10d360: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x10d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10d364: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D364u;
    {
        const bool branch_taken_0x10d364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d364) {
            ctx->pc = 0x10D378u;
            return;
        }
    }
    ctx->pc = 0x10D36Cu;
}
