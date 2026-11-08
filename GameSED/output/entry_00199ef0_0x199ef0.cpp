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

// Function: entry_00199ef0
// Address: 0x199ef0 - 0x199efc
void entry_00199ef0_0x199ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199ef0_0x199ef0");
#endif

    ctx->pc = 0x199ef0u;

    // 0x199ef0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199ef4: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x199EF4u;
    {
        const bool branch_taken_0x199ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x199ef4) {
            ctx->pc = 0x199EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199EF4u;
            // 0x199ef8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199EFCu;
            return;
        }
    }
    ctx->pc = 0x199EFCu;
}
