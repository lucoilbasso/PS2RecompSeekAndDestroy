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

// Function: entry_0019a8d0
// Address: 0x19a8d0 - 0x19a8dc
void entry_0019a8d0_0x19a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a8d0_0x19a8d0");
#endif

    ctx->pc = 0x19a8d0u;

    // 0x19a8d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a8d4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x19A8D4u;
    {
        const bool branch_taken_0x19a8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a8d4) {
            ctx->pc = 0x19A8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A8D4u;
            // 0x19a8d8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A8A8u;
            return;
        }
    }
    ctx->pc = 0x19A8DCu;
}
