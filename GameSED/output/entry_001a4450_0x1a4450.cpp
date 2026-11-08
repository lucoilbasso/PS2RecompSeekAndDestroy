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

// Function: entry_001a4450
// Address: 0x1a4450 - 0x1a4458
void entry_001a4450_0x1a4450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4450_0x1a4450");
#endif

    ctx->pc = 0x1a4450u;

    // 0x1a4450: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4450u;
    {
        const bool branch_taken_0x1a4450 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4450u;
        // 0x1a4454: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4450) {
            ctx->pc = 0x1A4460u;
            return;
        }
    }
    ctx->pc = 0x1A4458u;
}
