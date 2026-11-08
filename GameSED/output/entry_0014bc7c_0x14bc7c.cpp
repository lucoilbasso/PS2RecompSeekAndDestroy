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

// Function: entry_0014bc7c
// Address: 0x14bc7c - 0x14bc88
void entry_0014bc7c_0x14bc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bc7c_0x14bc7c");
#endif

    ctx->pc = 0x14bc7cu;

    // 0x14bc7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14BC7Cu;
    {
        const bool branch_taken_0x14bc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC7Cu;
        // 0x14bc80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc7c) {
            ctx->pc = 0x14BC98u;
            return;
        }
    }
    ctx->pc = 0x14BC84u;
    // 0x14bc84: 0x0  nop
    ctx->pc = 0x14bc84u;
    // NOP
    ctx->pc = 0x14bc88u;
}
