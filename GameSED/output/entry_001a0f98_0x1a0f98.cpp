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

// Function: entry_001a0f98
// Address: 0x1a0f98 - 0x1a0fa0
void entry_001a0f98_0x1a0f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0f98_0x1a0f98");
#endif

    ctx->pc = 0x1a0f98u;

    // 0x1a0f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0F98u;
    {
        const bool branch_taken_0x1a0f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F98u;
        // 0x1a0f9c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f98) {
            ctx->pc = 0x1A0FA4u;
            return;
        }
    }
    ctx->pc = 0x1A0FA0u;
}
