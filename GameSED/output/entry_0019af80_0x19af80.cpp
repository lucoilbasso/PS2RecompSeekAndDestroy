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

// Function: entry_0019af80
// Address: 0x19af80 - 0x19af9c
void entry_0019af80_0x19af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019af80_0x19af80");
#endif

    ctx->pc = 0x19af80u;

label_19af80:
    // 0x19af80: 0x881024  and         $v0, $a0, $t0
    ctx->pc = 0x19af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x19af84: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x19af84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x19af88: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x19af88u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x19af8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19af90: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19af90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19af94: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AF94u;
    {
        const bool branch_taken_0x19af94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF94u;
        // 0x19af98: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af94) {
            ctx->pc = 0x19AF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19af80;
        }
    }
    ctx->pc = 0x19AF9Cu;
}
