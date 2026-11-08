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

// Function: entry_0019bb80
// Address: 0x19bb80 - 0x19bb88
void entry_0019bb80_0x19bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb80_0x19bb80");
#endif

    ctx->pc = 0x19bb80u;

    // 0x19bb80: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BB80u;
    {
        const bool branch_taken_0x19bb80 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB80u;
        // 0x19bb84: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb80) {
            ctx->pc = 0x19BB9Cu;
            return;
        }
    }
    ctx->pc = 0x19BB88u;
}
