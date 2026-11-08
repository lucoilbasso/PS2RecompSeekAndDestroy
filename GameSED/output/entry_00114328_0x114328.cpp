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

// Function: entry_00114328
// Address: 0x114328 - 0x114330
void entry_00114328_0x114328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114328_0x114328");
#endif

    ctx->pc = 0x114328u;

    // 0x114328: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x114328u;
    {
        const bool branch_taken_0x114328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114328u;
        // 0x11432c: 0xaf918920  sw          $s1, -0x76E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114328) {
            ctx->pc = 0x114350u;
            return;
        }
    }
    ctx->pc = 0x114330u;
}
