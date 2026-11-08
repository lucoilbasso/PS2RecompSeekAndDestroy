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

// Function: entry_001d411c
// Address: 0x1d411c - 0x1d4128
void entry_001d411c_0x1d411c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d411c_0x1d411c");
#endif

    ctx->pc = 0x1d411cu;

    // 0x1d411c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D411Cu;
    {
        const bool branch_taken_0x1d411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D411Cu;
        // 0x1d4120: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d411c) {
            ctx->pc = 0x1D4138u;
            return;
        }
    }
    ctx->pc = 0x1D4124u;
    // 0x1d4124: 0x0  nop
    ctx->pc = 0x1d4124u;
    // NOP
    ctx->pc = 0x1d4128u;
}
