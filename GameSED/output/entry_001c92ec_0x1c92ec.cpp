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

// Function: entry_001c92ec
// Address: 0x1c92ec - 0x1c92f8
void entry_001c92ec_0x1c92ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c92ec_0x1c92ec");
#endif

    ctx->pc = 0x1c92ecu;

    // 0x1c92ec: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1C92ECu;
    {
        const bool branch_taken_0x1c92ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C92ECu;
        // 0x1c92f0: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92ec) {
            ctx->pc = 0x1C94A4u;
            return;
        }
    }
    ctx->pc = 0x1C92F4u;
    // 0x1c92f4: 0x0  nop
    ctx->pc = 0x1c92f4u;
    // NOP
    ctx->pc = 0x1c92f8u;
}
