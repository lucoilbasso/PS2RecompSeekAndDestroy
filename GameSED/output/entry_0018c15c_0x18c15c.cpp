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

// Function: entry_0018c15c
// Address: 0x18c15c - 0x18c164
void entry_0018c15c_0x18c15c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c15c_0x18c15c");
#endif

    ctx->pc = 0x18c15cu;

    // 0x18c15c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C15Cu;
    {
        const bool branch_taken_0x18c15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C15Cu;
        // 0x18c160: 0x33c28000  andi        $v0, $fp, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c15c) {
            ctx->pc = 0x18C180u;
            return;
        }
    }
    ctx->pc = 0x18C164u;
}
