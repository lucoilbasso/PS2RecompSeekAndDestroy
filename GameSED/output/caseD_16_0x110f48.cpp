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

// Function: caseD_16
// Address: 0x110f48 - 0x110f60
void caseD_16_0x110f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x110f48");
#endif

    ctx->pc = 0x110f48u;

    // 0x110f48: 0x8f908a30  lw          $s0, -0x75D0($gp)
    ctx->pc = 0x110f48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x110f4c: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x110f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x110f50: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x110f50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110f54: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x110f54u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x110f58: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x110F58u;
    {
        const bool branch_taken_0x110f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F58u;
        // 0x110f5c: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f58) {
            ctx->pc = 0x1110B0u;
            return;
        }
    }
    ctx->pc = 0x110F60u;
}
