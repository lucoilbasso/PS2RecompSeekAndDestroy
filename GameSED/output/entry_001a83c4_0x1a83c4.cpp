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

// Function: entry_001a83c4
// Address: 0x1a83c4 - 0x1a83d4
void entry_001a83c4_0x1a83c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a83c4_0x1a83c4");
#endif

    ctx->pc = 0x1a83c4u;

    // 0x1a83c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a83c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a83c8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a83c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a83cc: 0x5440ffc2  bnel        $v0, $zero, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1A83CCu;
    {
        const bool branch_taken_0x1a83cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a83cc) {
            ctx->pc = 0x1A83D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A83CCu;
            // 0x1a83d0: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A82D8u;
            return;
        }
    }
    ctx->pc = 0x1A83D4u;
}
