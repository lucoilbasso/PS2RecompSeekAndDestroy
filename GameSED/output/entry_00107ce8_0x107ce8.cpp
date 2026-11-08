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

// Function: entry_00107ce8
// Address: 0x107ce8 - 0x107d04
void entry_00107ce8_0x107ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107ce8_0x107ce8");
#endif

    ctx->pc = 0x107ce8u;

label_107ce8:
    // 0x107ce8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x107ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x107cec: 0x0  nop
    ctx->pc = 0x107cecu;
    // NOP
    // 0x107cf0: 0x0  nop
    ctx->pc = 0x107cf0u;
    // NOP
    // 0x107cf4: 0x0  nop
    ctx->pc = 0x107cf4u;
    // NOP
    // 0x107cf8: 0x0  nop
    ctx->pc = 0x107cf8u;
    // NOP
    // 0x107cfc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x107CFCu;
    {
        const bool branch_taken_0x107cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CFCu;
        // 0x107d00: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cfc) {
            ctx->pc = 0x107CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107ce8;
        }
    }
    ctx->pc = 0x107D04u;
}
