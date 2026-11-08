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

// Function: entry_0019ba5c
// Address: 0x19ba5c - 0x19ba64
void entry_0019ba5c_0x19ba5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ba5c_0x19ba5c");
#endif

    ctx->pc = 0x19ba5cu;

    // 0x19ba5c: 0x50c7ffee  beql        $a2, $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19BA5Cu;
    {
        const bool branch_taken_0x19ba5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x19ba5c) {
            ctx->pc = 0x19BA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BA5Cu;
            // 0x19ba60: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BA18u;
            return;
        }
    }
    ctx->pc = 0x19BA64u;
}
