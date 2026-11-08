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

// Function: entry_0017900c
// Address: 0x17900c - 0x179020
void entry_0017900c_0x17900c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017900c_0x17900c");
#endif

    ctx->pc = 0x17900cu;

    // 0x17900c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x179010: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179014: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x179014u;
    {
        const bool branch_taken_0x179014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x179018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179014u;
        // 0x179018: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179014) {
            ctx->pc = 0x179020u;
            return;
        }
    }
    ctx->pc = 0x17901Cu;
    // 0x17901c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17901cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x179020u;
}
