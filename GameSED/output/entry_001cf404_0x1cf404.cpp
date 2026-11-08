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

// Function: entry_001cf404
// Address: 0x1cf404 - 0x1cf410
void entry_001cf404_0x1cf404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf404_0x1cf404");
#endif

    ctx->pc = 0x1cf404u;

    // 0x1cf404: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF404u;
    {
        const bool branch_taken_0x1cf404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF404u;
        // 0x1cf408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf404) {
            ctx->pc = 0x1CF414u;
            return;
        }
    }
    ctx->pc = 0x1CF40Cu;
    // 0x1cf40c: 0x0  nop
    ctx->pc = 0x1cf40cu;
    // NOP
    ctx->pc = 0x1cf410u;
}
