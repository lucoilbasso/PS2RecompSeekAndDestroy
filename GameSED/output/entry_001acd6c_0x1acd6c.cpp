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

// Function: entry_001acd6c
// Address: 0x1acd6c - 0x1acd7c
void entry_001acd6c_0x1acd6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acd6c_0x1acd6c");
#endif

    ctx->pc = 0x1acd6cu;

    // 0x1acd6c: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ACD6Cu;
    {
        const bool branch_taken_0x1acd6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1ACD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD6Cu;
        // 0x1acd70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd6c) {
            ctx->pc = 0x1ACD88u;
            return;
        }
    }
    ctx->pc = 0x1ACD74u;
    // 0x1acd74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1acd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1acd78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1acd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1acd7cu;
}
