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

// Function: entry_001baa3c
// Address: 0x1baa3c - 0x1baa48
void entry_001baa3c_0x1baa3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baa3c_0x1baa3c");
#endif

    ctx->pc = 0x1baa3cu;

    // 0x1baa3c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BAA3Cu;
    {
        const bool branch_taken_0x1baa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA3Cu;
        // 0x1baa40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa3c) {
            ctx->pc = 0x1BA9B0u;
            return;
        }
    }
    ctx->pc = 0x1BAA44u;
    // 0x1baa44: 0xae40c0c8  sw          $zero, -0x3F38($s2)
    ctx->pc = 0x1baa44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294951112), GPR_U32(ctx, 0));
    ctx->pc = 0x1baa48u;
}
