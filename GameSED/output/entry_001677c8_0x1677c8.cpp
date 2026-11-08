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

// Function: entry_001677c8
// Address: 0x1677c8 - 0x1677e8
void entry_001677c8_0x1677c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001677c8_0x1677c8");
#endif

    ctx->pc = 0x1677c8u;

label_1677c8:
    // 0x1677c8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1677c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1677cc: 0x0  nop
    ctx->pc = 0x1677ccu;
    // NOP
    // 0x1677d0: 0x0  nop
    ctx->pc = 0x1677d0u;
    // NOP
    // 0x1677d4: 0x0  nop
    ctx->pc = 0x1677d4u;
    // NOP
    // 0x1677d8: 0x0  nop
    ctx->pc = 0x1677d8u;
    // NOP
    // 0x1677dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1677DCu;
    {
        const bool branch_taken_0x1677dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1677dc) {
            ctx->pc = 0x1677E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1677DCu;
            // 0x1677e0: 0xac4400e0  sw          $a0, 0xE0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1677C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1677c8;
        }
    }
    ctx->pc = 0x1677E4u;
    // 0x1677e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1677e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x1677e8u;
}
