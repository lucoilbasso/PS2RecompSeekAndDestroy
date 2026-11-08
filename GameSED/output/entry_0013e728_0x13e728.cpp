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

// Function: entry_0013e728
// Address: 0x13e728 - 0x13e744
void entry_0013e728_0x13e728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e728_0x13e728");
#endif

    ctx->pc = 0x13e728u;

label_13e728:
    // 0x13e728: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e72c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13e72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13e730: 0x0  nop
    ctx->pc = 0x13e730u;
    // NOP
    // 0x13e734: 0x0  nop
    ctx->pc = 0x13e734u;
    // NOP
    // 0x13e738: 0x0  nop
    ctx->pc = 0x13e738u;
    // NOP
    // 0x13e73c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13E73Cu;
    {
        const bool branch_taken_0x13e73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e73c) {
            ctx->pc = 0x13E728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e728;
        }
    }
    ctx->pc = 0x13E744u;
}
