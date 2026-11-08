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

// Function: entry_001c9e18
// Address: 0x1c9e18 - 0x1c9e3c
void entry_001c9e18_0x1c9e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9e18_0x1c9e18");
#endif

    ctx->pc = 0x1c9e18u;

label_1c9e18:
    // 0x1c9e18: 0x9187a  dsrl        $v1, $t1, 1
    ctx->pc = 0x1c9e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> 1);
    // 0x1c9e1c: 0x1241024  and         $v0, $t1, $a0
    ctx->pc = 0x1c9e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x1c9e20: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1c9e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1c9e24: 0x0  nop
    ctx->pc = 0x1c9e24u;
    // NOP
    // 0x1c9e28: 0x0  nop
    ctx->pc = 0x1c9e28u;
    // NOP
    // 0x1c9e2c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C9E2Cu;
    {
        const bool branch_taken_0x1c9e2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E2Cu;
        // 0x1c9e30: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e2c) {
            ctx->pc = 0x1C9E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9e18;
        }
    }
    ctx->pc = 0x1C9E34u;
    // 0x1c9e34: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1c9e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e38: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x1c9e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    ctx->pc = 0x1c9e3cu;
}
