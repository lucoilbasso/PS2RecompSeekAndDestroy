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

// Function: entry_0014299c
// Address: 0x14299c - 0x1429a4
void entry_0014299c_0x14299c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014299c_0x14299c");
#endif

    ctx->pc = 0x14299cu;

    // 0x14299c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x14299Cu;
    {
        const bool branch_taken_0x14299c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1429A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14299Cu;
        // 0x1429a0: 0x34a53000  ori         $a1, $a1, 0x3000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14299c) {
            ctx->pc = 0x1429C0u;
            return;
        }
    }
    ctx->pc = 0x1429A4u;
}
