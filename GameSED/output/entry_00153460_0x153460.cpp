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

// Function: entry_00153460
// Address: 0x153460 - 0x153470
void entry_00153460_0x153460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153460_0x153460");
#endif

    ctx->pc = 0x153460u;

    // 0x153460: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x153460u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x153464: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x153464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x153468: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x153468u;
    {
        const bool branch_taken_0x153468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153468u;
        // 0x15346c: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153468) {
            ctx->pc = 0x1534A0u;
            return;
        }
    }
    ctx->pc = 0x153470u;
}
