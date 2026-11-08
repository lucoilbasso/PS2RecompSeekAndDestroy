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

// Function: entry_001893d8
// Address: 0x1893d8 - 0x1893fc
void entry_001893d8_0x1893d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001893d8_0x1893d8");
#endif

    ctx->pc = 0x1893d8u;

label_1893d8:
    // 0x1893d8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1893D8u;
    {
        const bool branch_taken_0x1893d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1893DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1893D8u;
        // 0x1893dc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1893d8) {
            ctx->pc = 0x189408u;
            return;
        }
    }
    ctx->pc = 0x1893E0u;
    // 0x1893e0: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1893e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1893e4: 0x0  nop
    ctx->pc = 0x1893e4u;
    // NOP
    // 0x1893e8: 0x0  nop
    ctx->pc = 0x1893e8u;
    // NOP
    // 0x1893ec: 0x0  nop
    ctx->pc = 0x1893ecu;
    // NOP
    // 0x1893f0: 0x0  nop
    ctx->pc = 0x1893f0u;
    // NOP
    // 0x1893f4: 0x1466fff8  bne         $v1, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1893F4u;
    {
        const bool branch_taken_0x1893f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1893f4) {
            ctx->pc = 0x1893D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1893d8;
        }
    }
    ctx->pc = 0x1893FCu;
}
