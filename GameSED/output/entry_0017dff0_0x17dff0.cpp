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

// Function: entry_0017dff0
// Address: 0x17dff0 - 0x17e004
void entry_0017dff0_0x17dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dff0_0x17dff0");
#endif

    ctx->pc = 0x17dff0u;

    // 0x17dff0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17dff0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17dff4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x17dff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17dff8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x17DFF8u;
    {
        const bool branch_taken_0x17dff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFF8u;
        // 0x17dffc: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dff8) {
            ctx->pc = 0x17DF58u;
            return;
        }
    }
    ctx->pc = 0x17E000u;
    // 0x17e000: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x17e000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->pc = 0x17e004u;
}
