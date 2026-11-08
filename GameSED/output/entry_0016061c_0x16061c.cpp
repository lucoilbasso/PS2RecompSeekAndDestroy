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

// Function: entry_0016061c
// Address: 0x16061c - 0x160638
void entry_0016061c_0x16061c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016061c_0x16061c");
#endif

    ctx->pc = 0x16061cu;

    // 0x16061c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x16061cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x160620: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x160620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x160624: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x160624u;
    {
        const bool branch_taken_0x160624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160624u;
        // 0x160628: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160624) {
            ctx->pc = 0x1605F8u;
            return;
        }
    }
    ctx->pc = 0x16062Cu;
    // 0x16062c: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x16062Cu;
    {
        const bool branch_taken_0x16062c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16062Cu;
        // 0x160630: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16062c) {
            ctx->pc = 0x160A3Cu;
            return;
        }
    }
    ctx->pc = 0x160634u;
    // 0x160634: 0x0  nop
    ctx->pc = 0x160634u;
    // NOP
    ctx->pc = 0x160638u;
}
