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

// Function: entry_001dd9c8
// Address: 0x1dd9c8 - 0x1dd9e4
void entry_001dd9c8_0x1dd9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd9c8_0x1dd9c8");
#endif

    ctx->pc = 0x1dd9c8u;

label_1dd9c8:
    // 0x1dd9c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dd9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dd9cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1dd9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1dd9d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1dd9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1dd9d4: 0x0  nop
    ctx->pc = 0x1dd9d4u;
    // NOP
    // 0x1dd9d8: 0x0  nop
    ctx->pc = 0x1dd9d8u;
    // NOP
    // 0x1dd9dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DD9DCu;
    {
        const bool branch_taken_0x1dd9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9DCu;
        // 0x1dd9e0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9dc) {
            ctx->pc = 0x1DD9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd9c8;
        }
    }
    ctx->pc = 0x1DD9E4u;
}
