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

// Function: entry_001a0540
// Address: 0x1a0540 - 0x1a0548
void entry_001a0540_0x1a0540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0540_0x1a0540");
#endif

    ctx->pc = 0x1a0540u;

    // 0x1a0540: 0x1500ffdb  bnez        $t0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1A0540u;
    {
        const bool branch_taken_0x1a0540 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0540u;
        // 0x1a0544: 0xe81024  and         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0540) {
            ctx->pc = 0x1A04B0u;
            return;
        }
    }
    ctx->pc = 0x1A0548u;
}
