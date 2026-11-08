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

// Function: entry_001d1b34
// Address: 0x1d1b34 - 0x1d1b40
void entry_001d1b34_0x1d1b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1b34_0x1d1b34");
#endif

    ctx->pc = 0x1d1b34u;

    // 0x1d1b34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1B34u;
    {
        const bool branch_taken_0x1d1b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B34u;
        // 0x1d1b38: 0x245e01bc  addiu       $fp, $v0, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b34) {
            ctx->pc = 0x1D1B54u;
            return;
        }
    }
    ctx->pc = 0x1D1B3Cu;
    // 0x1d1b3c: 0x0  nop
    ctx->pc = 0x1d1b3cu;
    // NOP
    ctx->pc = 0x1d1b40u;
}
