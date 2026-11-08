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

// Function: entry_0019b910
// Address: 0x19b910 - 0x19b92c
void entry_0019b910_0x19b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b910_0x19b910");
#endif

    ctx->pc = 0x19b910u;

label_19b910:
    // 0x19b910: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x19b910u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b914: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19b914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19b918: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19b918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19b91c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19b91cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b920: 0x0  nop
    ctx->pc = 0x19b920u;
    // NOP
    // 0x19b924: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B924u;
    {
        const bool branch_taken_0x19b924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B924u;
        // 0x19b928: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b924) {
            ctx->pc = 0x19B910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b910;
        }
    }
    ctx->pc = 0x19B92Cu;
}
