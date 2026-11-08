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

// Function: entry_001329b4
// Address: 0x1329b4 - 0x1329bc
void entry_001329b4_0x1329b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001329b4_0x1329b4");
#endif

    ctx->pc = 0x1329b4u;

    // 0x1329b4: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1329B4u;
    {
        const bool branch_taken_0x1329b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1329b4) {
            ctx->pc = 0x1329B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1329B4u;
            // 0x1329b8: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132990u;
            return;
        }
    }
    ctx->pc = 0x1329BCu;
}
