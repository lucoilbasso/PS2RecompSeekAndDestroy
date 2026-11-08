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

// Function: entry_001b3e20
// Address: 0x1b3e20 - 0x1b3e48
void entry_001b3e20_0x1b3e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3e20_0x1b3e20");
#endif

    ctx->pc = 0x1b3e20u;

label_1b3e20:
    // 0x1b3e20: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x1b3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x1b3e24: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1b3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b3e28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b3e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3e2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b3e30: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x1b3e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b3e34: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b3e34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3e38: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B3E38u;
    {
        const bool branch_taken_0x1b3e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e38) {
            ctx->pc = 0x1B3E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3e20;
        }
    }
    ctx->pc = 0x1B3E40u;
    // 0x1b3e40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3E40u;
    {
        const bool branch_taken_0x1b3e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E40u;
        // 0x1b3e44: 0xae710c0c  sw          $s1, 0xC0C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e40) {
            ctx->pc = 0x1B3E58u;
            return;
        }
    }
    ctx->pc = 0x1B3E48u;
}
