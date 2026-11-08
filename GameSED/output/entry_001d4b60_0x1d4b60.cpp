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

// Function: entry_001d4b60
// Address: 0x1d4b60 - 0x1d4b68
void entry_001d4b60_0x1d4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4b60_0x1d4b60");
#endif

    ctx->pc = 0x1d4b60u;

    // 0x1d4b60: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4B60u;
    {
        const bool branch_taken_0x1d4b60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B60u;
        // 0x1d4b64: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b60) {
            ctx->pc = 0x1D4B88u;
            return;
        }
    }
    ctx->pc = 0x1D4B68u;
}
