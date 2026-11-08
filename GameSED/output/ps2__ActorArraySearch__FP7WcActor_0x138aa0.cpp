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

// Function: _ActorArraySearch__FP7WcActor
// Address: 0x138aa0 - 0x138ae0
void ps2__ActorArraySearch__FP7WcActor_0x138aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ActorArraySearch__FP7WcActor_0x138aa0");
#endif

    switch (ctx->pc) {
        case 0x138ab0u: goto label_138ab0;
        default: break;
    }

    ctx->pc = 0x138aa0u;

    // 0x138aa0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138aa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x138aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138aa8: 0x2445c060  addiu       $a1, $v0, -0x3FA0
    ctx->pc = 0x138aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951008));
    // 0x138aac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x138aacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FC060u));
label_138ab0:
    // 0x138ab0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x138ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ab4: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138AB4u;
    {
        const bool branch_taken_0x138ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x138AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AB4u;
        // 0x138ab8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ab4) {
            ctx->pc = 0x138AD8u;
            goto label_138ad8;
        }
    }
    ctx->pc = 0x138ABCu;
    // 0x138abc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x138abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x138ac0: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x138ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x138ac4: 0x0  nop
    ctx->pc = 0x138ac4u;
    // NOP
    // 0x138ac8: 0x0  nop
    ctx->pc = 0x138ac8u;
    // NOP
    // 0x138acc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x138ACCu;
    {
        const bool branch_taken_0x138acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138acc) {
            ctx->pc = 0x138AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138ACCu;
            // 0x138ad0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138ab0;
        }
    }
    ctx->pc = 0x138AD4u;
    // 0x138ad4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x138ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138ad8:
    // 0x138ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x138AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138AE0u;
}
