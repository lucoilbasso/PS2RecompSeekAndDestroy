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

// Function: entry_0012e0f0
// Address: 0x12e0f0 - 0x12e0f8
void entry_0012e0f0_0x12e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e0f0_0x12e0f0");
#endif

    ctx->pc = 0x12e0f0u;

    // 0x12e0f0: 0x54c0fff1  bnel        $a2, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x12E0F0u;
    {
        const bool branch_taken_0x12e0f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e0f0) {
            ctx->pc = 0x12E0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E0F0u;
            // 0x12e0f4: 0x8cc2004c  lw          $v0, 0x4C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E0B8u;
            return;
        }
    }
    ctx->pc = 0x12E0F8u;
}
