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

// Function: entry_0010bab0
// Address: 0x10bab0 - 0x10bad0
void entry_0010bab0_0x10bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bab0_0x10bab0");
#endif

    ctx->pc = 0x10bab0u;

label_10bab0:
    // 0x10bab0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x10bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10bab4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10bab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10bab8: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x10bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10babc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x10babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x10bac0: 0xa7182a  slt         $v1, $a1, $a3
    ctx->pc = 0x10bac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x10bac4: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x10bac4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x10bac8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10BAC8u;
    {
        const bool branch_taken_0x10bac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAC8u;
        // 0x10bacc: 0xa4860000  sh          $a2, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bac8) {
            ctx->pc = 0x10BAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bab0;
        }
    }
    ctx->pc = 0x10BAD0u;
}
