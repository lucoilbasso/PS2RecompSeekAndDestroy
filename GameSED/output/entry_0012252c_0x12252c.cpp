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

// Function: entry_0012252c
// Address: 0x12252c - 0x122534
void entry_0012252c_0x12252c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012252c_0x12252c");
#endif

    ctx->pc = 0x12252cu;

    // 0x12252c: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12252Cu;
    {
        const bool branch_taken_0x12252c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12252c) {
            ctx->pc = 0x122530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12252Cu;
            // 0x122530: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122534u;
            return;
        }
    }
    ctx->pc = 0x122534u;
}
