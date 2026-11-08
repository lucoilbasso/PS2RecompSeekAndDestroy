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

// Function: entry_0014cb6c
// Address: 0x14cb6c - 0x14cb7c
void entry_0014cb6c_0x14cb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cb6c_0x14cb6c");
#endif

    ctx->pc = 0x14cb6cu;

    // 0x14cb6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14CB6Cu;
    {
        const bool branch_taken_0x14cb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB6Cu;
        // 0x14cb70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb6c) {
            ctx->pc = 0x14CB98u;
            return;
        }
    }
    ctx->pc = 0x14CB74u;
    // 0x14cb74: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CB74u;
    {
        const bool branch_taken_0x14cb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB74u;
        // 0x14cb78: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb74) {
            ctx->pc = 0x14CB88u;
            return;
        }
    }
    ctx->pc = 0x14CB7Cu;
}
