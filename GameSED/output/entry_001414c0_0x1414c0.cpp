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

// Function: entry_001414c0
// Address: 0x1414c0 - 0x1414c8
void entry_001414c0_0x1414c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001414c0_0x1414c0");
#endif

    ctx->pc = 0x1414c0u;

    // 0x1414c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1414C0u;
    {
        const bool branch_taken_0x1414c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1414C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1414C0u;
        // 0x1414c4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1414c0) {
            ctx->pc = 0x1414CCu;
            return;
        }
    }
    ctx->pc = 0x1414C8u;
}
