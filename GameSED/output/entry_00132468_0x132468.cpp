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

// Function: entry_00132468
// Address: 0x132468 - 0x132480
void entry_00132468_0x132468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132468_0x132468");
#endif

    ctx->pc = 0x132468u;

    // 0x132468: 0xac8700e0  sw          $a3, 0xE0($a0)
    ctx->pc = 0x132468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 7));
    // 0x13246c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13246Cu;
    {
        const bool branch_taken_0x13246c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x132470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13246Cu;
        // 0x132470: 0xac860134  sw          $a2, 0x134($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13246c) {
            ctx->pc = 0x132488u;
            return;
        }
    }
    ctx->pc = 0x132474u;
    // 0x132474: 0x8c83013c  lw          $v1, 0x13C($a0)
    ctx->pc = 0x132474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x132478: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x132478u;
    {
        const bool branch_taken_0x132478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132478) {
            ctx->pc = 0x13247Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132478u;
            // 0x13247c: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13248Cu;
            return;
        }
    }
    ctx->pc = 0x132480u;
}
