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

// Function: entry_0017f614
// Address: 0x17f614 - 0x17f61c
void entry_0017f614_0x17f614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f614_0x17f614");
#endif

    ctx->pc = 0x17f614u;

    // 0x17f614: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F614u;
    {
        const bool branch_taken_0x17f614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F614u;
        // 0x17f618: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f614) {
            ctx->pc = 0x17F628u;
            return;
        }
    }
    ctx->pc = 0x17F61Cu;
}
