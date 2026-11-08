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

// Function: caseD_3
// Address: 0x1428d0 - 0x1428e8
void caseD_3_0x1428d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1428d0");
#endif

    ctx->pc = 0x1428d0u;

    // 0x1428d0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1428d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1428d4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1428d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1428d8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1428d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1428dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1428DCu;
    {
        const bool branch_taken_0x1428dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428DCu;
        // 0x1428e0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428dc) {
            ctx->pc = 0x1428F0u;
            return;
        }
    }
    ctx->pc = 0x1428E4u;
    // 0x1428e4: 0x0  nop
    ctx->pc = 0x1428e4u;
    // NOP
    ctx->pc = 0x1428e8u;
}
