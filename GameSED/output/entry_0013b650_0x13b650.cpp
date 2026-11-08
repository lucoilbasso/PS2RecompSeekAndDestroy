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

// Function: entry_0013b650
// Address: 0x13b650 - 0x13b660
void entry_0013b650_0x13b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b650_0x13b650");
#endif

    ctx->pc = 0x13b650u;

    // 0x13b650: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x13b650u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x13b654: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x13b654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13b658: 0x5440ffbf  bnel        $v0, $zero, . + 4 + (-0x41 << 2)
    ctx->pc = 0x13B658u;
    {
        const bool branch_taken_0x13b658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b658) {
            ctx->pc = 0x13B65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B658u;
            // 0x13b65c: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B558u;
            return;
        }
    }
    ctx->pc = 0x13B660u;
}
