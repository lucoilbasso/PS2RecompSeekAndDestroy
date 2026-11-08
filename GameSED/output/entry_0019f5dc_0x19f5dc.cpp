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

// Function: entry_0019f5dc
// Address: 0x19f5dc - 0x19f5f0
void entry_0019f5dc_0x19f5dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f5dc_0x19f5dc");
#endif

    ctx->pc = 0x19f5dcu;

    // 0x19f5dc: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x19f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x19f5e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F5E0u;
    {
        const bool branch_taken_0x19f5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5E0u;
        // 0x19f5e4: 0x8d420008  lw          $v0, 0x8($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5e0) {
            ctx->pc = 0x19F5F0u;
            return;
        }
    }
    ctx->pc = 0x19F5E8u;
    // 0x19f5e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F5E8u;
    {
        const bool branch_taken_0x19f5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5E8u;
        // 0x19f5ec: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5e8) {
            ctx->pc = 0x19F5F4u;
            return;
        }
    }
    ctx->pc = 0x19F5F0u;
}
