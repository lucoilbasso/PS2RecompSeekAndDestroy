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

// Function: entry_0011e590
// Address: 0x11e590 - 0x11e5a0
void entry_0011e590_0x11e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e590_0x11e590");
#endif

    ctx->pc = 0x11e590u;

    // 0x11e590: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E590u;
    {
        const bool branch_taken_0x11e590 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E590u;
        // 0x11e594: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e590) {
            ctx->pc = 0x11E5A0u;
            return;
        }
    }
    ctx->pc = 0x11E598u;
    // 0x11e598: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x11E598u;
    {
        const bool branch_taken_0x11e598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E598u;
        // 0x11e59c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e598) {
            ctx->pc = 0x11E850u;
            return;
        }
    }
    ctx->pc = 0x11E5A0u;
}
