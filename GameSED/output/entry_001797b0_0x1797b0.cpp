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

// Function: entry_001797b0
// Address: 0x1797b0 - 0x1797b8
void entry_001797b0_0x1797b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001797b0_0x1797b0");
#endif

    ctx->pc = 0x1797b0u;

    // 0x1797b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1797B0u;
    {
        const bool branch_taken_0x1797b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1797B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797B0u;
        // 0x1797b4: 0xffbf00a0  sd          $ra, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1797b0) {
            ctx->pc = 0x179808u;
            return;
        }
    }
    ctx->pc = 0x1797B8u;
}
