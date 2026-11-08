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

// Function: entry_001d99a0
// Address: 0x1d99a0 - 0x1d99c4
void entry_001d99a0_0x1d99a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d99a0_0x1d99a0");
#endif

    ctx->pc = 0x1d99a0u;

label_1d99a0:
    // 0x1d99a0: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D99A0u;
    {
        const bool branch_taken_0x1d99a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D99A0u;
        // 0x1d99a4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d99a0) {
            ctx->pc = 0x1D99C8u;
            return;
        }
    }
    ctx->pc = 0x1D99A8u;
    // 0x1d99a8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d99ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d99acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d99b0: 0x0  nop
    ctx->pc = 0x1d99b0u;
    // NOP
    // 0x1d99b4: 0x0  nop
    ctx->pc = 0x1d99b4u;
    // NOP
    // 0x1d99b8: 0x0  nop
    ctx->pc = 0x1d99b8u;
    // NOP
    // 0x1d99bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D99BCu;
    {
        const bool branch_taken_0x1d99bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d99bc) {
            ctx->pc = 0x1D99A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d99a0;
        }
    }
    ctx->pc = 0x1D99C4u;
}
