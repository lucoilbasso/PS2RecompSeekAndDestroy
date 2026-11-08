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

// Function: entry_00182614
// Address: 0x182614 - 0x18261c
void entry_00182614_0x182614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182614_0x182614");
#endif

    ctx->pc = 0x182614u;

    // 0x182614: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x182614u;
    {
        const bool branch_taken_0x182614 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x182618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182614u;
        // 0x182618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182614) {
            ctx->pc = 0x182620u;
            return;
        }
    }
    ctx->pc = 0x18261Cu;
}
