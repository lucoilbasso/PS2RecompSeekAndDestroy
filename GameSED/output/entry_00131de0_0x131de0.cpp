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

// Function: entry_00131de0
// Address: 0x131de0 - 0x131dfc
void entry_00131de0_0x131de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131de0_0x131de0");
#endif

    ctx->pc = 0x131de0u;

label_131de0:
    // 0x131de0: 0x0  nop
    ctx->pc = 0x131de0u;
    // NOP
    // 0x131de4: 0x0  nop
    ctx->pc = 0x131de4u;
    // NOP
    // 0x131de8: 0x0  nop
    ctx->pc = 0x131de8u;
    // NOP
    // 0x131dec: 0x0  nop
    ctx->pc = 0x131decu;
    // NOP
    // 0x131df0: 0x0  nop
    ctx->pc = 0x131df0u;
    // NOP
    // 0x131df4: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x131DF4u;
    {
        const bool branch_taken_0x131df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x131df4) {
            ctx->pc = 0x131DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131DF4u;
            // 0x131df8: 0x2463ffb8  addiu       $v1, $v1, -0x48 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967224));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131de0;
        }
    }
    ctx->pc = 0x131DFCu;
}
