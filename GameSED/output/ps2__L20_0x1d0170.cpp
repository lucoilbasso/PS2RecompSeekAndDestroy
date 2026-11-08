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

// Function: $L20
// Address: 0x1d0170 - 0x1d018c
void ps2__L20_0x1d0170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L20_0x1d0170");
#endif

    ctx->pc = 0x1d0170u;

label_1d0170:
    // 0x1d0170: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1d0170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d0174: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d0174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d0178: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d0178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d017c: 0x0  nop
    ctx->pc = 0x1d017cu;
    // NOP
    // 0x1d0180: 0x0  nop
    ctx->pc = 0x1d0180u;
    // NOP
    // 0x1d0184: 0x14c2fffa  bne         $a2, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D0184u;
    {
        const bool branch_taken_0x1d0184 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0184) {
            ctx->pc = 0x1D0170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0170;
        }
    }
    ctx->pc = 0x1D018Cu;
}
