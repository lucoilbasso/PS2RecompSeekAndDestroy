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

// Function: entry_00192720
// Address: 0x192720 - 0x192740
void entry_00192720_0x192720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192720_0x192720");
#endif

    ctx->pc = 0x192720u;

label_192720:
    // 0x192720: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192724: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x192724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x192728: 0x0  nop
    ctx->pc = 0x192728u;
    // NOP
    // 0x19272c: 0x0  nop
    ctx->pc = 0x19272cu;
    // NOP
    // 0x192730: 0x0  nop
    ctx->pc = 0x192730u;
    // NOP
    // 0x192734: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x192734u;
    {
        const bool branch_taken_0x192734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192734) {
            ctx->pc = 0x192720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192720;
        }
    }
    ctx->pc = 0x19273Cu;
    // 0x19273c: 0x0  nop
    ctx->pc = 0x19273cu;
    // NOP
    ctx->pc = 0x192740u;
}
