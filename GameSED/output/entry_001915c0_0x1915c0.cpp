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

// Function: entry_001915c0
// Address: 0x1915c0 - 0x1915cc
void entry_001915c0_0x1915c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001915c0_0x1915c0");
#endif

    ctx->pc = 0x1915c0u;

    // 0x1915c0: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1915C0u;
    {
        const bool branch_taken_0x1915c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1915c0) {
            ctx->pc = 0x1915C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1915C0u;
            // 0x1915c4: 0x2482ffe0  addiu       $v0, $a0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1915CCu;
            return;
        }
    }
    ctx->pc = 0x1915C8u;
    // 0x1915c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1915c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x1915ccu;
}
