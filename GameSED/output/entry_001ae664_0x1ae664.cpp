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

// Function: entry_001ae664
// Address: 0x1ae664 - 0x1ae680
void entry_001ae664_0x1ae664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae664_0x1ae664");
#endif

    ctx->pc = 0x1ae664u;

    // 0x1ae664: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x1ae664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1ae668: 0x25640004  addiu       $a0, $t3, 0x4
    ctx->pc = 0x1ae668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1ae66c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ae66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ae670: 0x1446821  addu        $t5, $t2, $a0
    ctx->pc = 0x1ae670u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1ae674: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ae674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ae678: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AE678u;
    {
        const bool branch_taken_0x1ae678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE678u;
        // 0x1ae67c: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae678) {
            ctx->pc = 0x1AE6ACu;
            return;
        }
    }
    ctx->pc = 0x1AE680u;
}
