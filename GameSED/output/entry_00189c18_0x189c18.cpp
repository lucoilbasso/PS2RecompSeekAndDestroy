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

// Function: entry_00189c18
// Address: 0x189c18 - 0x189c30
void entry_00189c18_0x189c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189c18_0x189c18");
#endif

    ctx->pc = 0x189c18u;

    // 0x189c18: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x189c18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x189c1c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x189c1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x189c20: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x189c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x189c24: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x189C24u;
    {
        const bool branch_taken_0x189c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C24u;
        // 0x189c28: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c24) {
            ctx->pc = 0x189A58u;
            return;
        }
    }
    ctx->pc = 0x189C2Cu;
    // 0x189c2c: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x189c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x189c30u;
}
