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

// Function: entry_0012271c
// Address: 0x12271c - 0x122728
void entry_0012271c_0x12271c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012271c_0x12271c");
#endif

    ctx->pc = 0x12271cu;

    // 0x12271c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12271Cu;
    {
        const bool branch_taken_0x12271c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12271Cu;
        // 0x122720: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12271c) {
            ctx->pc = 0x122730u;
            return;
        }
    }
    ctx->pc = 0x122724u;
    // 0x122724: 0x0  nop
    ctx->pc = 0x122724u;
    // NOP
    ctx->pc = 0x122728u;
}
