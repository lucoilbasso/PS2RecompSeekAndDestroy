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

// Function: entry_00144028
// Address: 0x144028 - 0x144038
void entry_00144028_0x144028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144028_0x144028");
#endif

    ctx->pc = 0x144028u;

    // 0x144028: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x144028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14402c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14402cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x144030: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x144030u;
    {
        const bool branch_taken_0x144030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144030) {
            ctx->pc = 0x144034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144030u;
            // 0x144034: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143FF8u;
            return;
        }
    }
    ctx->pc = 0x144038u;
}
