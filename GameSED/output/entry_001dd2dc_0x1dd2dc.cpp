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

// Function: entry_001dd2dc
// Address: 0x1dd2dc - 0x1dd2f8
void entry_001dd2dc_0x1dd2dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd2dc_0x1dd2dc");
#endif

    ctx->pc = 0x1dd2dcu;

    // 0x1dd2dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD2DCu;
    {
        const bool branch_taken_0x1dd2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd2dc) {
            ctx->pc = 0x1DD300u;
            return;
        }
    }
    ctx->pc = 0x1DD2E4u;
    // 0x1dd2e4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD2E4u;
    {
        const bool branch_taken_0x1dd2e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2E4u;
        // 0x1dd2e8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2e4) {
            ctx->pc = 0x1DD2F8u;
            return;
        }
    }
    ctx->pc = 0x1DD2ECu;
    // 0x1dd2ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD2ECu;
    {
        const bool branch_taken_0x1dd2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD2ECu;
        // 0x1dd2f0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd2ec) {
            ctx->pc = 0x1DD2FCu;
            return;
        }
    }
    ctx->pc = 0x1DD2F4u;
    // 0x1dd2f4: 0x0  nop
    ctx->pc = 0x1dd2f4u;
    // NOP
    ctx->pc = 0x1dd2f8u;
}
