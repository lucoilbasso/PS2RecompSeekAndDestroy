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

// Function: $L16
// Address: 0x1d0ec0 - 0x1d0edc
void ps2__L16_0x1d0ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L16_0x1d0ec0");
#endif

    ctx->pc = 0x1d0ec0u;

label_1d0ec0:
    // 0x1d0ec0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1d0ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0ec4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1d0ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ec8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d0ecc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d0eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d0ed0: 0x0  nop
    ctx->pc = 0x1d0ed0u;
    // NOP
    // 0x1d0ed4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D0ED4u;
    {
        const bool branch_taken_0x1d0ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0ed4) {
            ctx->pc = 0x1D0EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0ec0;
        }
    }
    ctx->pc = 0x1D0EDCu;
}
