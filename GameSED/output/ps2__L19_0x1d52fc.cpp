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

// Function: $L19
// Address: 0x1d52fc - 0x1d5318
void ps2__L19_0x1d52fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L19_0x1d52fc");
#endif

    ctx->pc = 0x1d52fcu;

label_1d52fc:
    // 0x1d52fc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1d52fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d5300: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d5300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d5304: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d5304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d5308: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1d5308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d530c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d5310: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5310u;
    {
        const bool branch_taken_0x1d5310 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d5310) {
            ctx->pc = 0x1D52FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d52fc;
        }
    }
    ctx->pc = 0x1D5318u;
}
