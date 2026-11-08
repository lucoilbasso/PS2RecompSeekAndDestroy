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

// Function: entry_0019cef8
// Address: 0x19cef8 - 0x19cf00
void entry_0019cef8_0x19cef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cef8_0x19cef8");
#endif

    ctx->pc = 0x19cef8u;

    // 0x19cef8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19CEF8u;
    {
        const bool branch_taken_0x19cef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEF8u;
        // 0x19cefc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cef8) {
            ctx->pc = 0x19CEE0u;
            return;
        }
    }
    ctx->pc = 0x19CF00u;
}
