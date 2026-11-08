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

// Function: entry_00111a68
// Address: 0x111a68 - 0x111a70
void entry_00111a68_0x111a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111a68_0x111a68");
#endif

    ctx->pc = 0x111a68u;

    // 0x111a68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111A68u;
    {
        const bool branch_taken_0x111a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A68u;
        // 0x111a6c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a68) {
            ctx->pc = 0x111A7Cu;
            return;
        }
    }
    ctx->pc = 0x111A70u;
}
