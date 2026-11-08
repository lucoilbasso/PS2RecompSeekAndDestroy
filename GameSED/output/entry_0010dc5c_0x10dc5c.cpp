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

// Function: entry_0010dc5c
// Address: 0x10dc5c - 0x10dc68
void entry_0010dc5c_0x10dc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc5c_0x10dc5c");
#endif

    ctx->pc = 0x10dc5cu;

    // 0x10dc5c: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x10dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x10dc60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10DC60u;
    {
        const bool branch_taken_0x10dc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC60u;
        // 0x10dc64: 0x8c560004  lw          $s6, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc60) {
            ctx->pc = 0x10DC9Cu;
            return;
        }
    }
    ctx->pc = 0x10DC68u;
}
