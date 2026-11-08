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

// Function: caseD_10
// Address: 0x154628 - 0x154630
void caseD_10_0x154628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x154628");
#endif

    ctx->pc = 0x154628u;

    // 0x154628: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x154628u;
    {
        const bool branch_taken_0x154628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154628u;
        // 0x15462c: 0x26120364  addiu       $s2, $s0, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 868));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154628) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x154630u;
}
