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

// Function: entry_001a90f4
// Address: 0x1a90f4 - 0x1a90fc
void entry_001a90f4_0x1a90f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a90f4_0x1a90f4");
#endif

    ctx->pc = 0x1a90f4u;

    // 0x1a90f4: 0x1620ffea  bnez        $s1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A90F4u;
    {
        const bool branch_taken_0x1a90f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A90F4u;
        // 0x1a90f8: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a90f4) {
            ctx->pc = 0x1A90A0u;
            return;
        }
    }
    ctx->pc = 0x1A90FCu;
}
