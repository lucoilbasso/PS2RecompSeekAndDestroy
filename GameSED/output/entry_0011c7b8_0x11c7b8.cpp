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

// Function: entry_0011c7b8
// Address: 0x11c7b8 - 0x11c7c0
void entry_0011c7b8_0x11c7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c7b8_0x11c7b8");
#endif

    ctx->pc = 0x11c7b8u;

    // 0x11c7b8: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11C7B8u;
    {
        const bool branch_taken_0x11c7b8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x11C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7B8u;
        // 0x11c7bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7b8) {
            ctx->pc = 0x11C7A0u;
            return;
        }
    }
    ctx->pc = 0x11C7C0u;
}
