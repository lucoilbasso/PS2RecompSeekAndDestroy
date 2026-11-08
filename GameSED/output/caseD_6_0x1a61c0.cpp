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

// Function: caseD_6
// Address: 0x1a61c0 - 0x1a61d0
void caseD_6_0x1a61c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1a61c0");
#endif

    ctx->pc = 0x1a61c0u;

    // 0x1a61c0: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x1a61c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1a61c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A61C4u;
    {
        const bool branch_taken_0x1a61c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x2021024  and         $v0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c4) {
            ctx->pc = 0x1A61DCu;
            return;
        }
    }
    ctx->pc = 0x1A61CCu;
    // 0x1a61cc: 0x0  nop
    ctx->pc = 0x1a61ccu;
    // NOP
    ctx->pc = 0x1a61d0u;
}
