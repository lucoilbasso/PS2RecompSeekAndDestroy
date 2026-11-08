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

// Function: entry_0019af28
// Address: 0x19af28 - 0x19af44
void entry_0019af28_0x19af28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019af28_0x19af28");
#endif

    ctx->pc = 0x19af28u;

label_19af28:
    // 0x19af28: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19af28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19af2c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x19af2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19af30: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x19af30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19af34: 0x0  nop
    ctx->pc = 0x19af34u;
    // NOP
    // 0x19af38: 0x0  nop
    ctx->pc = 0x19af38u;
    // NOP
    // 0x19af3c: 0x1509fffa  bne         $t0, $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AF3Cu;
    {
        const bool branch_taken_0x19af3c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x19AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF3Cu;
        // 0x19af40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af3c) {
            ctx->pc = 0x19AF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19af28;
        }
    }
    ctx->pc = 0x19AF44u;
}
