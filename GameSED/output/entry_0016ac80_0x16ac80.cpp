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

// Function: entry_0016ac80
// Address: 0x16ac80 - 0x16ac9c
void entry_0016ac80_0x16ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ac80_0x16ac80");
#endif

    ctx->pc = 0x16ac80u;

label_16ac80:
    // 0x16ac80: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x16ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x16ac84: 0x0  nop
    ctx->pc = 0x16ac84u;
    // NOP
    // 0x16ac88: 0x0  nop
    ctx->pc = 0x16ac88u;
    // NOP
    // 0x16ac8c: 0x0  nop
    ctx->pc = 0x16ac8cu;
    // NOP
    // 0x16ac90: 0x0  nop
    ctx->pc = 0x16ac90u;
    // NOP
    // 0x16ac94: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16AC94u;
    {
        const bool branch_taken_0x16ac94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ac94) {
            ctx->pc = 0x16AC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AC94u;
            // 0x16ac98: 0xac4300e0  sw          $v1, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ac80;
        }
    }
    ctx->pc = 0x16AC9Cu;
}
