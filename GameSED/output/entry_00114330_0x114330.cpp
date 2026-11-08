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

// Function: entry_00114330
// Address: 0x114330 - 0x114338
void entry_00114330_0x114330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114330_0x114330");
#endif

    ctx->pc = 0x114330u;

    // 0x114330: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x114330u;
    {
        const bool branch_taken_0x114330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114330u;
        // 0x114334: 0xaf918924  sw          $s1, -0x76DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936868), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114330) {
            ctx->pc = 0x114350u;
            return;
        }
    }
    ctx->pc = 0x114338u;
}
