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

// Function: entry_001acd5c
// Address: 0x1acd5c - 0x1acd6c
void entry_001acd5c_0x1acd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acd5c_0x1acd5c");
#endif

    ctx->pc = 0x1acd5cu;

    // 0x1acd5c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACD5Cu;
    {
        const bool branch_taken_0x1acd5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD5Cu;
        // 0x1acd60: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd5c) {
            ctx->pc = 0x1ACD6Cu;
            return;
        }
    }
    ctx->pc = 0x1ACD64u;
    // 0x1acd64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ACD64u;
    {
        const bool branch_taken_0x1acd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD64u;
        // 0x1acd68: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd64) {
            ctx->pc = 0x1ACD7Cu;
            return;
        }
    }
    ctx->pc = 0x1ACD6Cu;
}
