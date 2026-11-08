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

// Function: entry_0017bcc4
// Address: 0x17bcc4 - 0x17bccc
void entry_0017bcc4_0x17bcc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bcc4_0x17bcc4");
#endif

    ctx->pc = 0x17bcc4u;

    // 0x17bcc4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17BCC4u;
    {
        const bool branch_taken_0x17bcc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bcc4) {
            ctx->pc = 0x17BCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BCC4u;
            // 0x17bcc8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BCCCu;
            return;
        }
    }
    ctx->pc = 0x17BCCCu;
}
