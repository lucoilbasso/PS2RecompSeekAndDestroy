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

// Function: entry_00155168
// Address: 0x155168 - 0x155170
void entry_00155168_0x155168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155168_0x155168");
#endif

    ctx->pc = 0x155168u;

    // 0x155168: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x155168u;
    {
        const bool branch_taken_0x155168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155168u;
        // 0x15516c: 0x2604075c  addiu       $a0, $s0, 0x75C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155168) {
            ctx->pc = 0x155178u;
            return;
        }
    }
    ctx->pc = 0x155170u;
}
