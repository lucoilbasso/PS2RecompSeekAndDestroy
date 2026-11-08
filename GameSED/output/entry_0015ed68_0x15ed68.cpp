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

// Function: entry_0015ed68
// Address: 0x15ed68 - 0x15ed78
void entry_0015ed68_0x15ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ed68_0x15ed68");
#endif

    ctx->pc = 0x15ed68u;

    // 0x15ed68: 0x506200f7  beql        $v1, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x15ED68u;
    {
        const bool branch_taken_0x15ed68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ed68) {
            ctx->pc = 0x15ED6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15ED68u;
            // 0x15ed6c: 0x8ea30010  lw          $v1, 0x10($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F148u;
            return;
        }
    }
    ctx->pc = 0x15ED70u;
    // 0x15ed70: 0x100001e2  b           . + 4 + (0x1E2 << 2)
    ctx->pc = 0x15ED70u;
    {
        const bool branch_taken_0x15ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED70u;
        // 0x15ed74: 0x8ea20fc8  lw          $v0, 0xFC8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed70) {
            ctx->pc = 0x15F4FCu;
            return;
        }
    }
    ctx->pc = 0x15ED78u;
}
