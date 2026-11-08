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

// Function: caseD_2c
// Address: 0x1650d0 - 0x1650f0
void caseD_2c_0x1650d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2c_0x1650d0");
#endif

    ctx->pc = 0x1650d0u;

    // 0x1650d0: 0x260411e0  addiu       $a0, $s0, 0x11E0
    ctx->pc = 0x1650d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4576));
    // 0x1650d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1650d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1650d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1650d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1650dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1650dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1650e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1650e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1650e4: 0xac5311e4  sw          $s3, 0x11E4($v0)
    ctx->pc = 0x1650e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4580), GPR_U32(ctx, 19));
    // 0x1650e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1650E8u;
    {
        const bool branch_taken_0x1650e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1650ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1650E8u;
        // 0x1650ec: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1650e8) {
            ctx->pc = 0x165138u;
            return;
        }
    }
    ctx->pc = 0x1650F0u;
}
