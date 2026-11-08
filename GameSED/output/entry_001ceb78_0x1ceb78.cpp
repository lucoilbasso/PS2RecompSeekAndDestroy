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

// Function: entry_001ceb78
// Address: 0x1ceb78 - 0x1ceb88
void entry_001ceb78_0x1ceb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceb78_0x1ceb78");
#endif

    ctx->pc = 0x1ceb78u;

    // 0x1ceb78: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEB78u;
    {
        const bool branch_taken_0x1ceb78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ceb78) {
            ctx->pc = 0x1CEB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEB78u;
            // 0x1ceb7c: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEB90u;
            return;
        }
    }
    ctx->pc = 0x1CEB80u;
    // 0x1ceb80: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1CEB80u;
    {
        const bool branch_taken_0x1ceb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB80u;
        // 0x1ceb84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb80) {
            ctx->pc = 0x1CECFCu;
            return;
        }
    }
    ctx->pc = 0x1CEB88u;
}
