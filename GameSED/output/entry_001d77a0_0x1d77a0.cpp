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

// Function: entry_001d77a0
// Address: 0x1d77a0 - 0x1d77b0
void entry_001d77a0_0x1d77a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d77a0_0x1d77a0");
#endif

    ctx->pc = 0x1d77a0u;

    // 0x1d77a0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1d77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1d77a4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d77a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d77a8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D77A8u;
    {
        const bool branch_taken_0x1d77a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77A8u;
        // 0x1d77ac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77a8) {
            ctx->pc = 0x1D7768u;
            return;
        }
    }
    ctx->pc = 0x1D77B0u;
}
