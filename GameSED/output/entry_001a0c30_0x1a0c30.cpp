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

// Function: entry_001a0c30
// Address: 0x1a0c30 - 0x1a0c38
void entry_001a0c30_0x1a0c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0c30_0x1a0c30");
#endif

    ctx->pc = 0x1a0c30u;

    // 0x1a0c30: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0C30u;
    {
        const bool branch_taken_0x1a0c30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0C30u;
        // 0x1a0c34: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0c30) {
            ctx->pc = 0x1A0C40u;
            return;
        }
    }
    ctx->pc = 0x1A0C38u;
}
