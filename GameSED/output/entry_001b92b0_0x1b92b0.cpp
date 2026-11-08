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

// Function: entry_001b92b0
// Address: 0x1b92b0 - 0x1b92c0
void entry_001b92b0_0x1b92b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b92b0_0x1b92b0");
#endif

    ctx->pc = 0x1b92b0u;

    // 0x1b92b0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1b92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b92b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b92b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B92B8u;
    {
        const bool branch_taken_0x1b92b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92B8u;
        // 0x1b92bc: 0x90620032  lbu         $v0, 0x32($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92b8) {
            ctx->pc = 0x1B92D4u;
            return;
        }
    }
    ctx->pc = 0x1B92C0u;
}
