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

// Function: entry_0012280c
// Address: 0x12280c - 0x122814
void entry_0012280c_0x12280c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012280c_0x12280c");
#endif

    ctx->pc = 0x12280cu;

    // 0x12280c: 0x1620ffdc  bnez        $s1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x12280Cu;
    {
        const bool branch_taken_0x12280c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x122810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12280Cu;
        // 0x122810: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12280c) {
            ctx->pc = 0x122780u;
            return;
        }
    }
    ctx->pc = 0x122814u;
}
