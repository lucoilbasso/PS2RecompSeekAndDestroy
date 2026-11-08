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

// Function: entry_0019f2d4
// Address: 0x19f2d4 - 0x19f2e8
void entry_0019f2d4_0x19f2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f2d4_0x19f2d4");
#endif

    ctx->pc = 0x19f2d4u;

    // 0x19f2d4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x19f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x19f2d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F2D8u;
    {
        const bool branch_taken_0x19f2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2D8u;
        // 0x19f2dc: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2d8) {
            ctx->pc = 0x19F2E8u;
            return;
        }
    }
    ctx->pc = 0x19F2E0u;
    // 0x19f2e0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x19F2E0u;
    {
        const bool branch_taken_0x19f2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2E0u;
        // 0x19f2e4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2e0) {
            ctx->pc = 0x19F3C8u;
            return;
        }
    }
    ctx->pc = 0x19F2E8u;
}
