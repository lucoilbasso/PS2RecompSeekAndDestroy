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

// Function: entry_001b3de4
// Address: 0x1b3de4 - 0x1b3df0
void entry_001b3de4_0x1b3de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3de4_0x1b3de4");
#endif

    ctx->pc = 0x1b3de4u;

    // 0x1b3de4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1b3de8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B3DE8u;
    {
        const bool branch_taken_0x1b3de8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3de8) {
            ctx->pc = 0x1B3DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3DE8u;
            // 0x1b3dec: 0xa260080b  sb          $zero, 0x80B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3DF0u;
            return;
        }
    }
    ctx->pc = 0x1B3DF0u;
}
