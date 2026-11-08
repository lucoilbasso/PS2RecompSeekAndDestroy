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

// Function: entry_001c0d7c
// Address: 0x1c0d7c - 0x1c0d84
void entry_001c0d7c_0x1c0d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0d7c_0x1c0d7c");
#endif

    ctx->pc = 0x1c0d7cu;

    // 0x1c0d7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0D7Cu;
    {
        const bool branch_taken_0x1c0d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D7Cu;
        // 0x1c0d80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d7c) {
            ctx->pc = 0x1C0DA0u;
            return;
        }
    }
    ctx->pc = 0x1C0D84u;
}
