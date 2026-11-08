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

// Function: entry_00124038
// Address: 0x124038 - 0x124044
void entry_00124038_0x124038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124038_0x124038");
#endif

    ctx->pc = 0x124038u;

    // 0x124038: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x124038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x12403c: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x12403Cu;
    {
        const bool branch_taken_0x12403c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12403Cu;
        // 0x124040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12403c) {
            ctx->pc = 0x123EE0u;
            return;
        }
    }
    ctx->pc = 0x124044u;
}
