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

// Function: entry_0011e0a0
// Address: 0x11e0a0 - 0x11e0ac
void entry_0011e0a0_0x11e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e0a0_0x11e0a0");
#endif

    ctx->pc = 0x11e0a0u;

    // 0x11e0a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e0a4: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x11E0A4u;
    {
        const bool branch_taken_0x11e0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0A4u;
        // 0x11e0a8: 0xe22021  addu        $a0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0a4) {
            ctx->pc = 0x11E040u;
            return;
        }
    }
    ctx->pc = 0x11E0ACu;
}
