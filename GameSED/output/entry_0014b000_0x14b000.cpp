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

// Function: entry_0014b000
// Address: 0x14b000 - 0x14b018
void entry_0014b000_0x14b000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b000_0x14b000");
#endif

    ctx->pc = 0x14b000u;

    // 0x14b000: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B000u;
    {
        const bool branch_taken_0x14b000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b000) {
            ctx->pc = 0x14B004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B000u;
            // 0x14b004: 0x8e620190  lw          $v0, 0x190($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B018u;
            return;
        }
    }
    ctx->pc = 0x14B008u;
    // 0x14b008: 0x50740003  beql        $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B008u;
    {
        const bool branch_taken_0x14b008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x14b008) {
            ctx->pc = 0x14B00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B008u;
            // 0x14b00c: 0x8e620194  lw          $v0, 0x194($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B018u;
            return;
        }
    }
    ctx->pc = 0x14B010u;
    // 0x14b010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14B010u;
    {
        const bool branch_taken_0x14b010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B010u;
        // 0x14b014: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b010) {
            ctx->pc = 0x14B020u;
            return;
        }
    }
    ctx->pc = 0x14B018u;
}
