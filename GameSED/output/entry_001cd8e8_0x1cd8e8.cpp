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

// Function: entry_001cd8e8
// Address: 0x1cd8e8 - 0x1cd90c
void entry_001cd8e8_0x1cd8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd8e8_0x1cd8e8");
#endif

    ctx->pc = 0x1cd8e8u;

    // 0x1cd8e8: 0x8fc60640  lw          $a2, 0x640($fp)
    ctx->pc = 0x1cd8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1600)));
    // 0x1cd8ec: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1cd8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1cd8f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD8F0u;
    {
        const bool branch_taken_0x1cd8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8f0) {
            ctx->pc = 0x1CD90Cu;
            return;
        }
    }
    ctx->pc = 0x1CD8F8u;
    // 0x1cd8f8: 0x8fc30644  lw          $v1, 0x644($fp)
    ctx->pc = 0x1cd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
    // 0x1cd8fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cd900: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cd900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd904: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD904u;
    {
        const bool branch_taken_0x1cd904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD904u;
        // 0x1cd908: 0x8fc40644  lw          $a0, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd904) {
            ctx->pc = 0x1CD918u;
            return;
        }
    }
    ctx->pc = 0x1CD90Cu;
}
