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

// Function: entry_0017fef4
// Address: 0x17fef4 - 0x17ff14
void entry_0017fef4_0x17fef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fef4_0x17fef4");
#endif

    ctx->pc = 0x17fef4u;

    // 0x17fef4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x17fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x17fef8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x17fef8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x17fefc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17ff00: 0x2b3182a  slt         $v1, $s5, $s3
    ctx->pc = 0x17ff00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x17ff04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17ff08: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x17ff08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17ff0c: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x17FF0Cu;
    {
        const bool branch_taken_0x17ff0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF0Cu;
        // 0x17ff10: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff0c) {
            ctx->pc = 0x17FE18u;
            return;
        }
    }
    ctx->pc = 0x17FF14u;
}
