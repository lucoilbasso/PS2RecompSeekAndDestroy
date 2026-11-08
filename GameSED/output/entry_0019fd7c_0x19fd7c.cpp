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

// Function: entry_0019fd7c
// Address: 0x19fd7c - 0x19fd88
void entry_0019fd7c_0x19fd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd7c_0x19fd7c");
#endif

    ctx->pc = 0x19fd7cu;

    // 0x19fd7c: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x19FD7Cu;
    {
        const bool branch_taken_0x19fd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD7Cu;
        // 0x19fd80: 0x2645fff0  addiu       $a1, $s2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd7c) {
            ctx->pc = 0x19FEA0u;
            return;
        }
    }
    ctx->pc = 0x19FD84u;
    // 0x19fd84: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19fd84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x19fd88u;
}
