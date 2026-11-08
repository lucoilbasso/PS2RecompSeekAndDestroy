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

// Function: entry_001293e0
// Address: 0x1293e0 - 0x129400
void entry_001293e0_0x1293e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001293e0_0x1293e0");
#endif

    ctx->pc = 0x1293e0u;

label_1293e0:
    // 0x1293e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1293e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1293e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1293e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1293e8: 0x0  nop
    ctx->pc = 0x1293e8u;
    // NOP
    // 0x1293ec: 0x0  nop
    ctx->pc = 0x1293ecu;
    // NOP
    // 0x1293f0: 0x0  nop
    ctx->pc = 0x1293f0u;
    // NOP
    // 0x1293f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1293F4u;
    {
        const bool branch_taken_0x1293f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1293f4) {
            ctx->pc = 0x1293E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1293e0;
        }
    }
    ctx->pc = 0x1293FCu;
    // 0x1293fc: 0x0  nop
    ctx->pc = 0x1293fcu;
    // NOP
    ctx->pc = 0x129400u;
}
