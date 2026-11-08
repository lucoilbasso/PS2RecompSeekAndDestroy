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

// Function: ApRemoteWorkReset__Fv
// Address: 0x106958 - 0x10698c
void ApRemoteWorkReset__Fv_0x106958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRemoteWorkReset__Fv_0x106958");
#endif

    switch (ctx->pc) {
        case 0x106968u: goto label_106968;
        default: break;
    }

    ctx->pc = 0x106958u;

    // 0x106958: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x106958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x10695c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10695cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106960: 0x24430610  addiu       $v1, $v0, 0x610
    ctx->pc = 0x106960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x106964: 0x0  nop
    ctx->pc = 0x106964u;
    // NOP
label_106968:
    // 0x106968: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x106968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10696c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x106970: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x106970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x106974: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x106974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x106978: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x106978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x10697c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10697Cu;
    {
        const bool branch_taken_0x10697c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10697Cu;
        // 0x106980: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10697c) {
            ctx->pc = 0x106968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106968;
        }
    }
    ctx->pc = 0x106984u;
    // 0x106984: 0x3e00008  jr          $ra
    ctx->pc = 0x106984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10698Cu;
}
