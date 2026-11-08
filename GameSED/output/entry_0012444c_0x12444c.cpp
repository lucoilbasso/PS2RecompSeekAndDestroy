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

// Function: entry_0012444c
// Address: 0x12444c - 0x124454
void entry_0012444c_0x12444c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012444c_0x12444c");
#endif

    ctx->pc = 0x12444cu;

    // 0x12444c: 0x1620ffda  bnez        $s1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x12444Cu;
    {
        const bool branch_taken_0x12444c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x124450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12444Cu;
        // 0x124450: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12444c) {
            ctx->pc = 0x1243B8u;
            return;
        }
    }
    ctx->pc = 0x124454u;
}
