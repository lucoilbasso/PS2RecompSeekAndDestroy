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

// Function: entry_001d6d88
// Address: 0x1d6d88 - 0x1d6d98
void entry_001d6d88_0x1d6d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6d88_0x1d6d88");
#endif

    ctx->pc = 0x1d6d88u;

    // 0x1d6d88: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1d6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d6d8c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d6d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6d90: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D6D90u;
    {
        const bool branch_taken_0x1d6d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D90u;
        // 0x1d6d94: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d90) {
            ctx->pc = 0x1D6D50u;
            return;
        }
    }
    ctx->pc = 0x1D6D98u;
}
