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

// Function: ApActorArrayClear__Fv
// Address: 0x138a48 - 0x138a7c
void ApActorArrayClear__Fv_0x138a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApActorArrayClear__Fv_0x138a48");
#endif

    switch (ctx->pc) {
        case 0x138a58u: goto label_138a58;
        default: break;
    }

    ctx->pc = 0x138a48u;

    // 0x138a48: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138a4c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x138a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x138a50: 0x2442c060  addiu       $v0, $v0, -0x3FA0
    ctx->pc = 0x138a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951008));
    // 0x138a54: 0x244203fc  addiu       $v0, $v0, 0x3FC
    ctx->pc = 0x138a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1020));
label_138a58:
    // 0x138a58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x138a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x138a5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x138a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x138a60: 0x0  nop
    ctx->pc = 0x138a60u;
    // NOP
    // 0x138a64: 0x0  nop
    ctx->pc = 0x138a64u;
    // NOP
    // 0x138a68: 0x0  nop
    ctx->pc = 0x138a68u;
    // NOP
    // 0x138a6c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x138A6Cu;
    {
        const bool branch_taken_0x138a6c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x138A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A6Cu;
        // 0x138a70: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a6c) {
            ctx->pc = 0x138A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138a58;
        }
    }
    ctx->pc = 0x138A74u;
    // 0x138a74: 0x3e00008  jr          $ra
    ctx->pc = 0x138A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138A7Cu;
}
