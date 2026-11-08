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

// Function: entry_00165aa0
// Address: 0x165aa0 - 0x165abc
void entry_00165aa0_0x165aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165aa0_0x165aa0");
#endif

    ctx->pc = 0x165aa0u;

label_165aa0:
    // 0x165aa0: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x165aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x165aa4: 0x0  nop
    ctx->pc = 0x165aa4u;
    // NOP
    // 0x165aa8: 0x0  nop
    ctx->pc = 0x165aa8u;
    // NOP
    // 0x165aac: 0x0  nop
    ctx->pc = 0x165aacu;
    // NOP
    // 0x165ab0: 0x0  nop
    ctx->pc = 0x165ab0u;
    // NOP
    // 0x165ab4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x165AB4u;
    {
        const bool branch_taken_0x165ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ab4) {
            ctx->pc = 0x165AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165AB4u;
            // 0x165ab8: 0xac4000e0  sw          $zero, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165aa0;
        }
    }
    ctx->pc = 0x165ABCu;
}
