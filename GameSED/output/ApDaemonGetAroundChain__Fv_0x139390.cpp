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

// Function: ApDaemonGetAroundChain__Fv
// Address: 0x139390 - 0x1393c8
void ApDaemonGetAroundChain__Fv_0x139390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonGetAroundChain__Fv_0x139390");
#endif

    ctx->pc = 0x139390u;

    // 0x139390: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x139390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x139394: 0x8f838a24  lw          $v1, -0x75DC($gp)
    ctx->pc = 0x139394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x139398: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x139398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13939c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x13939cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1393a0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1393a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1393a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1393A4u;
    {
        const bool branch_taken_0x1393a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1393a4) {
            ctx->pc = 0x1393C0u;
            goto label_1393c0;
        }
    }
    ctx->pc = 0x1393ACu;
    // 0x1393ac: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1393acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1393b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1393b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1393b4: 0x8c42a3e0  lw          $v0, -0x5C20($v0)
    ctx->pc = 0x1393b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943712)));
    // 0x1393b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1393B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1393BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393B8u;
        // 0x1393bc: 0xaf858a20  sw          $a1, -0x75E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1393B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1393C0u;
label_1393c0:
    // 0x1393c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1393C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1393C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393C0u;
        // 0x1393c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1393C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1393C8u;
}
