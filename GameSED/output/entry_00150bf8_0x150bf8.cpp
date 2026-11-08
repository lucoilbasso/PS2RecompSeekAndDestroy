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

// Function: entry_00150bf8
// Address: 0x150bf8 - 0x150c00
void entry_00150bf8_0x150bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150bf8_0x150bf8");
#endif

    ctx->pc = 0x150bf8u;

    // 0x150bf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x150BF8u;
    {
        const bool branch_taken_0x150bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150BF8u;
        // 0x150bfc: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150bf8) {
            ctx->pc = 0x150C28u;
            return;
        }
    }
    ctx->pc = 0x150C00u;
}
