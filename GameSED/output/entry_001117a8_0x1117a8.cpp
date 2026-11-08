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

// Function: entry_001117a8
// Address: 0x1117a8 - 0x1117c0
void entry_001117a8_0x1117a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001117a8_0x1117a8");
#endif

    ctx->pc = 0x1117a8u;

    // 0x1117a8: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1117A8u;
    {
        const bool branch_taken_0x1117a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1117ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117A8u;
        // 0x1117ac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117a8) {
            ctx->pc = 0x1117C0u;
            return;
        }
    }
    ctx->pc = 0x1117B0u;
    // 0x1117b0: 0x52420007  beql        $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1117B0u;
    {
        const bool branch_taken_0x1117b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1117b0) {
            ctx->pc = 0x1117B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1117B0u;
            // 0x1117b4: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1117D0u;
            return;
        }
    }
    ctx->pc = 0x1117B8u;
    // 0x1117b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1117B8u;
    {
        const bool branch_taken_0x1117b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1117b8) {
            ctx->pc = 0x1117FCu;
            return;
        }
    }
    ctx->pc = 0x1117C0u;
}
