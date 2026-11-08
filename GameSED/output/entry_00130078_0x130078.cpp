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

// Function: entry_00130078
// Address: 0x130078 - 0x130080
void entry_00130078_0x130078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130078_0x130078");
#endif

    ctx->pc = 0x130078u;

    // 0x130078: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x130078u;
    {
        const bool branch_taken_0x130078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130078u;
        // 0x13007c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130078) {
            ctx->pc = 0x13010Cu;
            return;
        }
    }
    ctx->pc = 0x130080u;
}
