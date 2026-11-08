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

// Function: entry_00177fc0
// Address: 0x177fc0 - 0x177fc8
void entry_00177fc0_0x177fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177fc0_0x177fc0");
#endif

    ctx->pc = 0x177fc0u;

    // 0x177fc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x177FC0u;
    {
        const bool branch_taken_0x177fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FC0u;
        // 0x177fc4: 0xa2030054  sb          $v1, 0x54($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fc0) {
            ctx->pc = 0x177FD4u;
            return;
        }
    }
    ctx->pc = 0x177FC8u;
}
