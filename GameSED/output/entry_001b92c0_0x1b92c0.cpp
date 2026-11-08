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

// Function: entry_001b92c0
// Address: 0x1b92c0 - 0x1b92d0
void entry_001b92c0_0x1b92c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b92c0_0x1b92c0");
#endif

    ctx->pc = 0x1b92c0u;

    // 0x1b92c0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1b92c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b92c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b92c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b92c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B92C8u;
    {
        const bool branch_taken_0x1b92c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92C8u;
        // 0x1b92cc: 0x90620033  lbu         $v0, 0x33($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 51)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92c8) {
            ctx->pc = 0x1B92D4u;
            return;
        }
    }
    ctx->pc = 0x1B92D0u;
}
