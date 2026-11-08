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

// Function: entry_001ca0dc
// Address: 0x1ca0dc - 0x1ca0e8
void entry_001ca0dc_0x1ca0dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca0dc_0x1ca0dc");
#endif

    ctx->pc = 0x1ca0dcu;

    // 0x1ca0dc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1CA0DCu;
    {
        const bool branch_taken_0x1ca0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0DCu;
        // 0x1ca0e0: 0x2444bfe0  addiu       $a0, $v0, -0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0dc) {
            ctx->pc = 0x1CA294u;
            return;
        }
    }
    ctx->pc = 0x1CA0E4u;
    // 0x1ca0e4: 0x0  nop
    ctx->pc = 0x1ca0e4u;
    // NOP
    ctx->pc = 0x1ca0e8u;
}
