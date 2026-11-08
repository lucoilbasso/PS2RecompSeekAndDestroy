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

// Function: entry_0013d280
// Address: 0x13d280 - 0x13d2a0
void entry_0013d280_0x13d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d280_0x13d280");
#endif

    ctx->pc = 0x13d280u;

label_13d280:
    // 0x13d280: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13d280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d284: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13d284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13d288: 0x0  nop
    ctx->pc = 0x13d288u;
    // NOP
    // 0x13d28c: 0x0  nop
    ctx->pc = 0x13d28cu;
    // NOP
    // 0x13d290: 0x0  nop
    ctx->pc = 0x13d290u;
    // NOP
    // 0x13d294: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13D294u;
    {
        const bool branch_taken_0x13d294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d294) {
            ctx->pc = 0x13D280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d280;
        }
    }
    ctx->pc = 0x13D29Cu;
    // 0x13d29c: 0x0  nop
    ctx->pc = 0x13d29cu;
    // NOP
    ctx->pc = 0x13d2a0u;
}
