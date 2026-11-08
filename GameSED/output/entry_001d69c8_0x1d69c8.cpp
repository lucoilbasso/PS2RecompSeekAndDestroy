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

// Function: entry_001d69c8
// Address: 0x1d69c8 - 0x1d69dc
void entry_001d69c8_0x1d69c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d69c8_0x1d69c8");
#endif

    ctx->pc = 0x1d69c8u;

    // 0x1d69c8: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1d69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1d69cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d69ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d69d0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d69d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d69d4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D69D4u;
    {
        const bool branch_taken_0x1d69d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69D4u;
        // 0x1d69d8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69d4) {
            ctx->pc = 0x1D6990u;
            return;
        }
    }
    ctx->pc = 0x1D69DCu;
}
