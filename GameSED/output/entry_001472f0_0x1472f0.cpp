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

// Function: entry_001472f0
// Address: 0x1472f0 - 0x147310
void entry_001472f0_0x1472f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001472f0_0x1472f0");
#endif

    ctx->pc = 0x1472f0u;

label_1472f0:
    // 0x1472f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1472f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1472f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1472f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1472f8: 0x0  nop
    ctx->pc = 0x1472f8u;
    // NOP
    // 0x1472fc: 0x0  nop
    ctx->pc = 0x1472fcu;
    // NOP
    // 0x147300: 0x0  nop
    ctx->pc = 0x147300u;
    // NOP
    // 0x147304: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x147304u;
    {
        const bool branch_taken_0x147304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147304) {
            ctx->pc = 0x1472F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1472f0;
        }
    }
    ctx->pc = 0x14730Cu;
    // 0x14730c: 0x0  nop
    ctx->pc = 0x14730cu;
    // NOP
    ctx->pc = 0x147310u;
}
