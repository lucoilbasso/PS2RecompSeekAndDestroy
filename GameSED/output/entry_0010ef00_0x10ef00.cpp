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

// Function: entry_0010ef00
// Address: 0x10ef00 - 0x10ef0c
void entry_0010ef00_0x10ef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ef00_0x10ef00");
#endif

    ctx->pc = 0x10ef00u;

    // 0x10ef00: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x10EF00u;
    {
        const bool branch_taken_0x10ef00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF00u;
        // 0x10ef04: 0xae920000  sw          $s2, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef00) {
            ctx->pc = 0x10EF0Cu;
            return;
        }
    }
    ctx->pc = 0x10EF08u;
    // 0x10ef08: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x10ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x10ef0cu;
}
