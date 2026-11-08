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

// Function: entry_001a6178
// Address: 0x1a6178 - 0x1a6188
void entry_001a6178_0x1a6178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6178_0x1a6178");
#endif

    ctx->pc = 0x1a6178u;

    // 0x1a6178: 0x1012  mflo        $v0
    ctx->pc = 0x1a6178u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a617c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A617Cu;
    {
        const bool branch_taken_0x1a617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A617Cu;
        // 0x1a6180: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a617c) {
            ctx->pc = 0x1A61E0u;
            return;
        }
    }
    ctx->pc = 0x1A6184u;
    // 0x1a6184: 0x0  nop
    ctx->pc = 0x1a6184u;
    // NOP
    ctx->pc = 0x1a6188u;
}
