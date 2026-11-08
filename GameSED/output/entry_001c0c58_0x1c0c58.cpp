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

// Function: entry_001c0c58
// Address: 0x1c0c58 - 0x1c0c60
void entry_001c0c58_0x1c0c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0c58_0x1c0c58");
#endif

    ctx->pc = 0x1c0c58u;

    // 0x1c0c58: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C0C58u;
    {
        const bool branch_taken_0x1c0c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C58u;
        // 0x1c0c5c: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c58) {
            ctx->pc = 0x1C0BD8u;
            return;
        }
    }
    ctx->pc = 0x1C0C60u;
}
