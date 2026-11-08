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

// Function: entry_001ba3b8
// Address: 0x1ba3b8 - 0x1ba3dc
void entry_001ba3b8_0x1ba3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba3b8_0x1ba3b8");
#endif

    ctx->pc = 0x1ba3b8u;

label_1ba3b8:
    // 0x1ba3b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba3bc: 0x0  nop
    ctx->pc = 0x1ba3bcu;
    // NOP
    // 0x1ba3c0: 0x0  nop
    ctx->pc = 0x1ba3c0u;
    // NOP
    // 0x1ba3c4: 0x0  nop
    ctx->pc = 0x1ba3c4u;
    // NOP
    // 0x1ba3c8: 0x0  nop
    ctx->pc = 0x1ba3c8u;
    // NOP
    // 0x1ba3cc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BA3CCu;
    {
        const bool branch_taken_0x1ba3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba3cc) {
            ctx->pc = 0x1BA3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba3b8;
        }
    }
    ctx->pc = 0x1BA3D4u;
    // 0x1ba3d4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BA3D4u;
    {
        const bool branch_taken_0x1ba3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3D4u;
        // 0x1ba3d8: 0x26f0d880  addiu       $s0, $s7, -0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3d4) {
            ctx->pc = 0x1BA378u;
            return;
        }
    }
    ctx->pc = 0x1BA3DCu;
}
