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

// Function: entry_00100a10
// Address: 0x100a10 - 0x100a28
void entry_00100a10_0x100a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100a10_0x100a10");
#endif

    ctx->pc = 0x100a10u;

    // 0x100a10: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x100a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x100a14: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100A14u;
    {
        const bool branch_taken_0x100a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x100A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A14u;
        // 0x100a18: 0x24022118  addiu       $v0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a14) {
            ctx->pc = 0x100A28u;
            return;
        }
    }
    ctx->pc = 0x100A1Cu;
    // 0x100a1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x100a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x100A20u;
    {
        const bool branch_taken_0x100a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A20u;
        // 0x100a24: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a20) {
            ctx->pc = 0x100A3Cu;
            return;
        }
    }
    ctx->pc = 0x100A28u;
}
