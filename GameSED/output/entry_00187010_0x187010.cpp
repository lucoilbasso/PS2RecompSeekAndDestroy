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

// Function: entry_00187010
// Address: 0x187010 - 0x187030
void entry_00187010_0x187010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187010_0x187010");
#endif

    ctx->pc = 0x187010u;

label_187010:
    // 0x187010: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187014: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x187014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x187018: 0x0  nop
    ctx->pc = 0x187018u;
    // NOP
    // 0x18701c: 0x0  nop
    ctx->pc = 0x18701cu;
    // NOP
    // 0x187020: 0x0  nop
    ctx->pc = 0x187020u;
    // NOP
    // 0x187024: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x187024u;
    {
        const bool branch_taken_0x187024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187024) {
            ctx->pc = 0x187010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187010;
        }
    }
    ctx->pc = 0x18702Cu;
    // 0x18702c: 0x0  nop
    ctx->pc = 0x18702cu;
    // NOP
    ctx->pc = 0x187030u;
}
