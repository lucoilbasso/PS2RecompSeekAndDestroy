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

// Function: entry_001aafb4
// Address: 0x1aafb4 - 0x1aafbc
void entry_001aafb4_0x1aafb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aafb4_0x1aafb4");
#endif

    ctx->pc = 0x1aafb4u;

    // 0x1aafb4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1AAFB4u;
    {
        const bool branch_taken_0x1aafb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFB4u;
        // 0x1aafb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafb4) {
            ctx->pc = 0x1AB168u;
            return;
        }
    }
    ctx->pc = 0x1AAFBCu;
}
