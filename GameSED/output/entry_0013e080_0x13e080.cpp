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

// Function: entry_0013e080
// Address: 0x13e080 - 0x13e09c
void entry_0013e080_0x13e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e080_0x13e080");
#endif

    ctx->pc = 0x13e080u;

label_13e080:
    // 0x13e080: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e084: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13e084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13e088: 0x0  nop
    ctx->pc = 0x13e088u;
    // NOP
    // 0x13e08c: 0x0  nop
    ctx->pc = 0x13e08cu;
    // NOP
    // 0x13e090: 0x0  nop
    ctx->pc = 0x13e090u;
    // NOP
    // 0x13e094: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13E094u;
    {
        const bool branch_taken_0x13e094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e094) {
            ctx->pc = 0x13E080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e080;
        }
    }
    ctx->pc = 0x13E09Cu;
}
