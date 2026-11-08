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

// Function: entry_001ce768
// Address: 0x1ce768 - 0x1ce774
void entry_001ce768_0x1ce768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce768_0x1ce768");
#endif

    ctx->pc = 0x1ce768u;

    // 0x1ce768: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE768u;
    {
        const bool branch_taken_0x1ce768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce768) {
            ctx->pc = 0x1CE76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE768u;
            // 0x1ce76c: 0x8c870004  lw          $a3, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE788u;
            return;
        }
    }
    ctx->pc = 0x1CE770u;
    // 0x1ce770: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1ce770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x1ce774u;
}
