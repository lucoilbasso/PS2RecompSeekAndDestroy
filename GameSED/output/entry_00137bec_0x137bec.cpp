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

// Function: entry_00137bec
// Address: 0x137bec - 0x137bf4
void entry_00137bec_0x137bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137bec_0x137bec");
#endif

    ctx->pc = 0x137becu;

    // 0x137bec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x137BECu;
    {
        const bool branch_taken_0x137bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137bec) {
            ctx->pc = 0x137BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137BECu;
            // 0x137bf0: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137BF4u;
            return;
        }
    }
    ctx->pc = 0x137BF4u;
}
