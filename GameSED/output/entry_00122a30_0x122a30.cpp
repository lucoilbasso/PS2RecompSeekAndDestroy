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

// Function: entry_00122a30
// Address: 0x122a30 - 0x122a50
void entry_00122a30_0x122a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122a30_0x122a30");
#endif

    ctx->pc = 0x122a30u;

label_122a30:
    // 0x122a30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x122a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122a34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x122a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x122a38: 0x0  nop
    ctx->pc = 0x122a38u;
    // NOP
    // 0x122a3c: 0x0  nop
    ctx->pc = 0x122a3cu;
    // NOP
    // 0x122a40: 0x0  nop
    ctx->pc = 0x122a40u;
    // NOP
    // 0x122a44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x122A44u;
    {
        const bool branch_taken_0x122a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122a44) {
            ctx->pc = 0x122A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122a30;
        }
    }
    ctx->pc = 0x122A4Cu;
    // 0x122a4c: 0x0  nop
    ctx->pc = 0x122a4cu;
    // NOP
    ctx->pc = 0x122a50u;
}
