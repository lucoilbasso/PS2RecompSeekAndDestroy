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

// Function: caseD_7
// Address: 0x16c168 - 0x16c170
void caseD_7_0x16c168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x16c168");
#endif

    ctx->pc = 0x16c168u;

    // 0x16c168: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x16C168u;
    {
        const bool branch_taken_0x16c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C168u;
        // 0x16c16c: 0xae2001e0  sw          $zero, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c168) {
            ctx->pc = 0x16C488u;
            return;
        }
    }
    ctx->pc = 0x16C170u;
}
