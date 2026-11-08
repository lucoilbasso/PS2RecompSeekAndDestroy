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

// Function: entry_001a4980
// Address: 0x1a4980 - 0x1a4988
void entry_001a4980_0x1a4980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4980_0x1a4980");
#endif

    ctx->pc = 0x1a4980u;

    // 0x1a4980: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4980u;
    {
        const bool branch_taken_0x1a4980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4980) {
            ctx->pc = 0x1A4984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4980u;
            // 0x1a4984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4994u;
            return;
        }
    }
    ctx->pc = 0x1A4988u;
}
