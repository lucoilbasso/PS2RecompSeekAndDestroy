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

// Function: entry_001d03d0
// Address: 0x1d03d0 - 0x1d03ec
void entry_001d03d0_0x1d03d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d03d0_0x1d03d0");
#endif

    ctx->pc = 0x1d03d0u;

label_1d03d0:
    // 0x1d03d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d03d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d03d8: 0x0  nop
    ctx->pc = 0x1d03d8u;
    // NOP
    // 0x1d03dc: 0x0  nop
    ctx->pc = 0x1d03dcu;
    // NOP
    // 0x1d03e0: 0x0  nop
    ctx->pc = 0x1d03e0u;
    // NOP
    // 0x1d03e4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D03E4u;
    {
        const bool branch_taken_0x1d03e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03E4u;
        // 0x1d03e8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03e4) {
            ctx->pc = 0x1D03D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d03d0;
        }
    }
    ctx->pc = 0x1D03ECu;
}
