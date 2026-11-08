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

// Function: entry_0019fe20
// Address: 0x19fe20 - 0x19fe30
void entry_0019fe20_0x19fe20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fe20_0x19fe20");
#endif

    ctx->pc = 0x19fe20u;

    // 0x19fe20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19fe24: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19FE24u;
    {
        const bool branch_taken_0x19fe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE24u;
        // 0x19fe28: 0x2610e120  addiu       $s0, $s0, -0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe24) {
            ctx->pc = 0x19FE74u;
            return;
        }
    }
    ctx->pc = 0x19FE2Cu;
    // 0x19fe2c: 0x0  nop
    ctx->pc = 0x19fe2cu;
    // NOP
    ctx->pc = 0x19fe30u;
}
