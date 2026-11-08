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

// Function: entry_0010ce34
// Address: 0x10ce34 - 0x10ce40
void entry_0010ce34_0x10ce34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ce34_0x10ce34");
#endif

    ctx->pc = 0x10ce34u;

    // 0x10ce34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10CE34u;
    {
        const bool branch_taken_0x10ce34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE34u;
        // 0x10ce38: 0xae000258  sw          $zero, 0x258($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce34) {
            ctx->pc = 0x10CE48u;
            return;
        }
    }
    ctx->pc = 0x10CE3Cu;
    // 0x10ce3c: 0x0  nop
    ctx->pc = 0x10ce3cu;
    // NOP
    ctx->pc = 0x10ce40u;
}
