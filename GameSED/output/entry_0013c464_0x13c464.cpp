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

// Function: entry_0013c464
// Address: 0x13c464 - 0x13c470
void entry_0013c464_0x13c464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c464_0x13c464");
#endif

    ctx->pc = 0x13c464u;

    // 0x13c464: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13C464u;
    {
        const bool branch_taken_0x13c464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C464u;
        // 0x13c468: 0xae3301e8  sw          $s3, 0x1E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c464) {
            ctx->pc = 0x13C48Cu;
            return;
        }
    }
    ctx->pc = 0x13C46Cu;
    // 0x13c46c: 0x0  nop
    ctx->pc = 0x13c46cu;
    // NOP
    ctx->pc = 0x13c470u;
}
