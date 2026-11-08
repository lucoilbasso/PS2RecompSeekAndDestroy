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

// Function: entry_0014fee0
// Address: 0x14fee0 - 0x14fef4
void entry_0014fee0_0x14fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fee0_0x14fee0");
#endif

    ctx->pc = 0x14fee0u;

    // 0x14fee0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x14fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14fee4: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x14fee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14fee8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14FEE8u;
    {
        const bool branch_taken_0x14fee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEE8u;
        // 0x14feec: 0x641025  or          $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fee8) {
            ctx->pc = 0x14FEF4u;
            return;
        }
    }
    ctx->pc = 0x14FEF0u;
    // 0x14fef0: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x14fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    ctx->pc = 0x14fef4u;
}
