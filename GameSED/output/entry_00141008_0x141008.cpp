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

// Function: entry_00141008
// Address: 0x141008 - 0x141010
void entry_00141008_0x141008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141008_0x141008");
#endif

    ctx->pc = 0x141008u;

    // 0x141008: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x141008u;
    {
        const bool branch_taken_0x141008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141008u;
        // 0x14100c: 0x26120010  addiu       $s2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141008) {
            ctx->pc = 0x14105Cu;
            return;
        }
    }
    ctx->pc = 0x141010u;
}
