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

// Function: entry_0018e570
// Address: 0x18e570 - 0x18e590
void entry_0018e570_0x18e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e570_0x18e570");
#endif

    ctx->pc = 0x18e570u;

label_18e570:
    // 0x18e570: 0xa4a80000  sh          $t0, 0x0($a1)
    ctx->pc = 0x18e570u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x18e574: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e578: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18e57c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18e57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e580: 0x0  nop
    ctx->pc = 0x18e580u;
    // NOP
    // 0x18e584: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18E584u;
    {
        const bool branch_taken_0x18e584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E584u;
        // 0x18e588: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e584) {
            ctx->pc = 0x18E570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e570;
        }
    }
    ctx->pc = 0x18E58Cu;
    // 0x18e58c: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e58cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->pc = 0x18e590u;
}
