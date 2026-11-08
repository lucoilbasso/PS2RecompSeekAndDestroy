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

// Function: entry_0018eaa4
// Address: 0x18eaa4 - 0x18eab0
void entry_0018eaa4_0x18eaa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eaa4_0x18eaa4");
#endif

    ctx->pc = 0x18eaa4u;

    // 0x18eaa4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x18eaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18eaa8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EAA8u;
    {
        const bool branch_taken_0x18eaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eaa8) {
            ctx->pc = 0x18EAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18EAA8u;
            // 0x18eaac: 0x8ca20254  lw          $v0, 0x254($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18EAB8u;
            return;
        }
    }
    ctx->pc = 0x18EAB0u;
}
