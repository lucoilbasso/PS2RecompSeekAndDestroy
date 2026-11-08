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

// Function: entry_001c5914
// Address: 0x1c5914 - 0x1c5930
void entry_001c5914_0x1c5914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5914_0x1c5914");
#endif

    ctx->pc = 0x1c5914u;

    // 0x1c5914: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c5914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c5918: 0x8c43ee6c  lw          $v1, -0x1194($v0)
    ctx->pc = 0x1c5918u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x40EE6Cu));
    // 0x1c591c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C591Cu;
    {
        const bool branch_taken_0x1c591c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C591Cu;
        // 0x1c5920: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c591c) {
            ctx->pc = 0x1C5930u;
            return;
        }
    }
    ctx->pc = 0x1C5924u;
    // 0x1c5924: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c5924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c5928: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c5928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1c592c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c592cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1c5930u;
}
