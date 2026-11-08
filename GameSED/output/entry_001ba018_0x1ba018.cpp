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

// Function: entry_001ba018
// Address: 0x1ba018 - 0x1ba038
void entry_001ba018_0x1ba018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba018_0x1ba018");
#endif

    ctx->pc = 0x1ba018u;

label_1ba018:
    // 0x1ba018: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x1ba018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1ba01c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ba01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba020: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ba020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ba024: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ba024u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ba028: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1ba028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1ba02c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ba02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ba030: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BA030u;
    {
        const bool branch_taken_0x1ba030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA030u;
        // 0x1ba034: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba030) {
            ctx->pc = 0x1BA018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba018;
        }
    }
    ctx->pc = 0x1BA038u;
}
