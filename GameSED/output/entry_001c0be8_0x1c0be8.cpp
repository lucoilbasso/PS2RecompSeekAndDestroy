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

// Function: entry_001c0be8
// Address: 0x1c0be8 - 0x1c0bf8
void entry_001c0be8_0x1c0be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0be8_0x1c0be8");
#endif

    ctx->pc = 0x1c0be8u;

    // 0x1c0be8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c0be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c0bec: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0BECu;
    {
        const bool branch_taken_0x1c0bec = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1C0BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BECu;
        // 0x1c0bf0: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0bec) {
            ctx->pc = 0x1C0BF8u;
            return;
        }
    }
    ctx->pc = 0x1C0BF4u;
    // 0x1c0bf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1c0bf8u;
}
