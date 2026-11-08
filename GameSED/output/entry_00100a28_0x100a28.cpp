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

// Function: entry_00100a28
// Address: 0x100a28 - 0x100a38
void entry_00100a28_0x100a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100a28_0x100a28");
#endif

    ctx->pc = 0x100a28u;

    // 0x100a28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100A28u;
    {
        const bool branch_taken_0x100a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x100A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A28u;
        // 0x100a2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a28) {
            ctx->pc = 0x100A38u;
            return;
        }
    }
    ctx->pc = 0x100A30u;
    // 0x100a30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100A30u;
    {
        const bool branch_taken_0x100a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A30u;
        // 0x100a34: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a30) {
            ctx->pc = 0x100A3Cu;
            return;
        }
    }
    ctx->pc = 0x100A38u;
}
