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

// Function: entry_001a8244
// Address: 0x1a8244 - 0x1a8250
void entry_001a8244_0x1a8244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8244_0x1a8244");
#endif

    ctx->pc = 0x1a8244u;

    // 0x1a8244: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a8244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8248: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A8248u;
    {
        const bool branch_taken_0x1a8248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8248) {
            ctx->pc = 0x1A824Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8248u;
            // 0x1a824c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A81A8u;
            return;
        }
    }
    ctx->pc = 0x1A8250u;
}
