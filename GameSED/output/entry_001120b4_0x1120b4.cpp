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

// Function: entry_001120b4
// Address: 0x1120b4 - 0x1120c0
void entry_001120b4_0x1120b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001120b4_0x1120b4");
#endif

    ctx->pc = 0x1120b4u;

    // 0x1120b4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1120B4u;
    {
        const bool branch_taken_0x1120b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120B4u;
        // 0x1120b8: 0x8c5e0020  lw          $fp, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120b4) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x1120BCu;
    // 0x1120bc: 0x0  nop
    ctx->pc = 0x1120bcu;
    // NOP
    ctx->pc = 0x1120c0u;
}
