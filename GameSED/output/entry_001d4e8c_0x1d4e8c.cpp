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

// Function: entry_001d4e8c
// Address: 0x1d4e8c - 0x1d4e94
void entry_001d4e8c_0x1d4e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4e8c_0x1d4e8c");
#endif

    ctx->pc = 0x1d4e8cu;

    // 0x1d4e8c: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D4E8Cu;
    {
        const bool branch_taken_0x1d4e8c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1D4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E8Cu;
        // 0x1d4e90: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e8c) {
            ctx->pc = 0x1D4E70u;
            return;
        }
    }
    ctx->pc = 0x1D4E94u;
}
