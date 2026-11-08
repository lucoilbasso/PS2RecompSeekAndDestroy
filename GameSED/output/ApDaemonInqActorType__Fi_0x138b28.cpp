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

// Function: ApDaemonInqActorType__Fi
// Address: 0x138b28 - 0x138b78
void ApDaemonInqActorType__Fi_0x138b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonInqActorType__Fi_0x138b28");
#endif

    ctx->pc = 0x138b28u;

    // 0x138b28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x138b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138b2c: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x138B2Cu;
    {
        const bool branch_taken_0x138b2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x138b2c) {
            ctx->pc = 0x138B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138B2Cu;
            // 0x138b30: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138B48u;
            goto label_138b48;
        }
    }
    ctx->pc = 0x138B34u;
    // 0x138b34: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138b38: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x138b38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x138b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x138B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B3Cu;
        // 0x138b40: 0x8c620040  lw          $v0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138B44u;
    // 0x138b44: 0x0  nop
    ctx->pc = 0x138b44u;
    // NOP
label_138b48:
    // 0x138b48: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x138B48u;
    {
        const bool branch_taken_0x138b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x138B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B48u;
        // 0x138b4c: 0x8f828a30  lw          $v0, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b48) {
            ctx->pc = 0x138B70u;
            goto label_138b70;
        }
    }
    ctx->pc = 0x138B50u;
    // 0x138b50: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138B50u;
    {
        const bool branch_taken_0x138b50 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x138B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B50u;
        // 0x138b54: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b50) {
            ctx->pc = 0x138B68u;
            goto label_138b68;
        }
    }
    ctx->pc = 0x138B58u;
    // 0x138b58: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x138b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x138b5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138b60: 0x3e00008  jr          $ra
    ctx->pc = 0x138B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B60u;
        // 0x138b64: 0x8c623630  lw          $v0, 0x3630($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13872)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138B68u;
label_138b68:
    // 0x138b68: 0x3e00008  jr          $ra
    ctx->pc = 0x138B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B68u;
        // 0x138b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138B70u;
label_138b70:
    // 0x138b70: 0x3e00008  jr          $ra
    ctx->pc = 0x138B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138B78u;
}
