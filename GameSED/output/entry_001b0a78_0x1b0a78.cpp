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

// Function: entry_001b0a78
// Address: 0x1b0a78 - 0x1b0a88
void entry_001b0a78_0x1b0a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0a78_0x1b0a78");
#endif

    ctx->pc = 0x1b0a78u;

    // 0x1b0a78: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x1b0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x1b0a7c: 0x18a0ffdc  blez        $a1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1B0A7Cu;
    {
        const bool branch_taken_0x1b0a7c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1B0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0A7Cu;
        // 0x1b0a80: 0x45a023  subu        $s4, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a7c) {
            ctx->pc = 0x1B09F0u;
            return;
        }
    }
    ctx->pc = 0x1B0A84u;
    // 0x1b0a84: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1b0a84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1b0a88u;
}
