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

// Function: entry_001dd048
// Address: 0x1dd048 - 0x1dd058
void entry_001dd048_0x1dd048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd048_0x1dd048");
#endif

    ctx->pc = 0x1dd048u;

    // 0x1dd048: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dd048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dd04c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD04Cu;
    {
        const bool branch_taken_0x1dd04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD04Cu;
        // 0x1dd050: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd04c) {
            ctx->pc = 0x1DD070u;
            return;
        }
    }
    ctx->pc = 0x1DD054u;
    // 0x1dd054: 0x0  nop
    ctx->pc = 0x1dd054u;
    // NOP
    ctx->pc = 0x1dd058u;
}
