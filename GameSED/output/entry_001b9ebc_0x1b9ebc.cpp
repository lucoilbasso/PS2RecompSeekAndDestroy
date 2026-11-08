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

// Function: entry_001b9ebc
// Address: 0x1b9ebc - 0x1b9ec4
void entry_001b9ebc_0x1b9ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9ebc_0x1b9ebc");
#endif

    ctx->pc = 0x1b9ebcu;

    // 0x1b9ebc: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x1B9EBCu;
    {
        const bool branch_taken_0x1b9ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EBCu;
        // 0x1b9ec0: 0xae40c0b0  sw          $zero, -0x3F50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294951088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ebc) {
            ctx->pc = 0x1B9E58u;
            return;
        }
    }
    ctx->pc = 0x1B9EC4u;
}
