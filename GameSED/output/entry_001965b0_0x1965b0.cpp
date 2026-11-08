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

// Function: entry_001965b0
// Address: 0x1965b0 - 0x1965bc
void entry_001965b0_0x1965b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001965b0_0x1965b0");
#endif

    ctx->pc = 0x1965b0u;

    // 0x1965b0: 0x2f6102a  slt         $v0, $s7, $s6
    ctx->pc = 0x1965b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1965b4: 0x5440ff6c  bnel        $v0, $zero, . + 4 + (-0x94 << 2)
    ctx->pc = 0x1965B4u;
    {
        const bool branch_taken_0x1965b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1965b4) {
            ctx->pc = 0x1965B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1965B4u;
            // 0x1965b8: 0x8e8301b4  lw          $v1, 0x1B4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196368u;
            return;
        }
    }
    ctx->pc = 0x1965BCu;
}
