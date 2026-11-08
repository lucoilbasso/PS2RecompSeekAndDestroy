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

// Function: entry_00114d64
// Address: 0x114d64 - 0x114d74
void entry_00114d64_0x114d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114d64_0x114d64");
#endif

    ctx->pc = 0x114d64u;

    // 0x114d64: 0x0  nop
    ctx->pc = 0x114d64u;
    // NOP
    // 0x114d68: 0x0  nop
    ctx->pc = 0x114d68u;
    // NOP
    // 0x114d6c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x114D6Cu;
    {
        const bool branch_taken_0x114d6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x114D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D6Cu;
        // 0x114d70: 0x621826  xor         $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d6c) {
            ctx->pc = 0x114D58u;
            return;
        }
    }
    ctx->pc = 0x114D74u;
}
