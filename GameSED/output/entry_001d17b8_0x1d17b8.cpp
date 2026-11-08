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

// Function: entry_001d17b8
// Address: 0x1d17b8 - 0x1d17c0
void entry_001d17b8_0x1d17b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d17b8_0x1d17b8");
#endif

    ctx->pc = 0x1d17b8u;

    // 0x1d17b8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D17B8u;
    {
        const bool branch_taken_0x1d17b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17B8u;
        // 0x1d17bc: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17b8) {
            ctx->pc = 0x1D1820u;
            return;
        }
    }
    ctx->pc = 0x1D17C0u;
}
