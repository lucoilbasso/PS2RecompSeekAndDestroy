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

// Function: entry_001cccf0
// Address: 0x1cccf0 - 0x1ccd00
void entry_001cccf0_0x1cccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cccf0_0x1cccf0");
#endif

    ctx->pc = 0x1cccf0u;

    // 0x1cccf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cccf4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1cccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1cccf8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CCCF8u;
    {
        const bool branch_taken_0x1cccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCF8u;
        // 0x1cccfc: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccf8) {
            ctx->pc = 0x1CCD60u;
            return;
        }
    }
    ctx->pc = 0x1CCD00u;
}
