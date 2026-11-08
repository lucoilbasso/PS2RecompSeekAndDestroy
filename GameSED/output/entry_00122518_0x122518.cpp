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

// Function: entry_00122518
// Address: 0x122518 - 0x122524
void entry_00122518_0x122518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122518_0x122518");
#endif

    ctx->pc = 0x122518u;

    // 0x122518: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x122518u;
    {
        const bool branch_taken_0x122518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122518u;
        // 0x12251c: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122518) {
            ctx->pc = 0x122524u;
            return;
        }
    }
    ctx->pc = 0x122520u;
    // 0x122520: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x122520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    ctx->pc = 0x122524u;
}
