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

// Function: entry_001c90ac
// Address: 0x1c90ac - 0x1c90b8
void entry_001c90ac_0x1c90ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c90ac_0x1c90ac");
#endif

    ctx->pc = 0x1c90acu;

    // 0x1c90ac: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1C90ACu;
    {
        const bool branch_taken_0x1c90ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90ACu;
        // 0x1c90b0: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90ac) {
            ctx->pc = 0x1C94A0u;
            return;
        }
    }
    ctx->pc = 0x1C90B4u;
    // 0x1c90b4: 0x0  nop
    ctx->pc = 0x1c90b4u;
    // NOP
    ctx->pc = 0x1c90b8u;
}
