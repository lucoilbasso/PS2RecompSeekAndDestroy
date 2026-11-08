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

// Function: entry_0011b998
// Address: 0x11b998 - 0x11b9a8
void entry_0011b998_0x11b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b998_0x11b998");
#endif

    ctx->pc = 0x11b998u;

    // 0x11b998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b99c: 0x8c450154  lw          $a1, 0x154($v0)
    ctx->pc = 0x11b99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x11b9a0: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B9A0u;
    {
        const bool branch_taken_0x11b9a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b9a0) {
            ctx->pc = 0x11B9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B9A0u;
            // 0x11b9a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B9C4u;
            return;
        }
    }
    ctx->pc = 0x11B9A8u;
}
