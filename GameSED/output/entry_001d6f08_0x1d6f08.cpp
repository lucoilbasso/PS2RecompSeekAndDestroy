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

// Function: entry_001d6f08
// Address: 0x1d6f08 - 0x1d6f18
void entry_001d6f08_0x1d6f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6f08_0x1d6f08");
#endif

    ctx->pc = 0x1d6f08u;

    // 0x1d6f08: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1d6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d6f0c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d6f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6f10: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D6F10u;
    {
        const bool branch_taken_0x1d6f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F10u;
        // 0x1d6f14: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f10) {
            ctx->pc = 0x1D6EE0u;
            return;
        }
    }
    ctx->pc = 0x1D6F18u;
}
