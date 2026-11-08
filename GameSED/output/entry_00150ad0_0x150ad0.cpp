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

// Function: entry_00150ad0
// Address: 0x150ad0 - 0x150ad8
void entry_00150ad0_0x150ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150ad0_0x150ad0");
#endif

    ctx->pc = 0x150ad0u;

    // 0x150ad0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x150AD0u;
    {
        const bool branch_taken_0x150ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ad0) {
            ctx->pc = 0x150AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150AD0u;
            // 0x150ad4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150B20u;
            return;
        }
    }
    ctx->pc = 0x150AD8u;
}
