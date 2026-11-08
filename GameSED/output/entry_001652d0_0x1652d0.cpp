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

// Function: entry_001652d0
// Address: 0x1652d0 - 0x1652ec
void entry_001652d0_0x1652d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001652d0_0x1652d0");
#endif

    ctx->pc = 0x1652d0u;

label_1652d0:
    // 0x1652d0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1652d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1652d4: 0x0  nop
    ctx->pc = 0x1652d4u;
    // NOP
    // 0x1652d8: 0x0  nop
    ctx->pc = 0x1652d8u;
    // NOP
    // 0x1652dc: 0x0  nop
    ctx->pc = 0x1652dcu;
    // NOP
    // 0x1652e0: 0x0  nop
    ctx->pc = 0x1652e0u;
    // NOP
    // 0x1652e4: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1652E4u;
    {
        const bool branch_taken_0x1652e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1652e4) {
            ctx->pc = 0x1652E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1652E4u;
            // 0x1652e8: 0xac6200e0  sw          $v0, 0xE0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1652D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1652d0;
        }
    }
    ctx->pc = 0x1652ECu;
}
