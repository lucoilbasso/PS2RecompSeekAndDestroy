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

// Function: entry_00195d10
// Address: 0x195d10 - 0x195d30
void entry_00195d10_0x195d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195d10_0x195d10");
#endif

    ctx->pc = 0x195d10u;

label_195d10:
    // 0x195d10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x195d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195d14: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x195d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x195d18: 0x0  nop
    ctx->pc = 0x195d18u;
    // NOP
    // 0x195d1c: 0x0  nop
    ctx->pc = 0x195d1cu;
    // NOP
    // 0x195d20: 0x0  nop
    ctx->pc = 0x195d20u;
    // NOP
    // 0x195d24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x195D24u;
    {
        const bool branch_taken_0x195d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195d24) {
            ctx->pc = 0x195D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195d10;
        }
    }
    ctx->pc = 0x195D2Cu;
    // 0x195d2c: 0x8f838c50  lw          $v1, -0x73B0($gp)
    ctx->pc = 0x195d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    ctx->pc = 0x195d30u;
}
