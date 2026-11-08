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

// Function: entry_0019ab38
// Address: 0x19ab38 - 0x19ab60
void entry_0019ab38_0x19ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ab38_0x19ab38");
#endif

    ctx->pc = 0x19ab38u;

label_19ab38:
    // 0x19ab38: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19ab3c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x19ab3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19ab40: 0x0  nop
    ctx->pc = 0x19ab40u;
    // NOP
    // 0x19ab44: 0x0  nop
    ctx->pc = 0x19ab44u;
    // NOP
    // 0x19ab48: 0x0  nop
    ctx->pc = 0x19ab48u;
    // NOP
    // 0x19ab4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19AB4Cu;
    {
        const bool branch_taken_0x19ab4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB4Cu;
        // 0x19ab50: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab4c) {
            ctx->pc = 0x19AB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ab38;
        }
    }
    ctx->pc = 0x19AB54u;
    // 0x19ab54: 0x10a70027  beq         $a1, $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x19AB54u;
    {
        const bool branch_taken_0x19ab54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x19AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB54u;
        // 0x19ab58: 0x2408002e  addiu       $t0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab54) {
            ctx->pc = 0x19ABF4u;
            return;
        }
    }
    ctx->pc = 0x19AB5Cu;
    // 0x19ab5c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x19ab5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->pc = 0x19ab60u;
}
