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

// Function: B_MemCpy__FPvT0Ui
// Address: 0x19c980 - 0x19c9ac
void B_MemCpy__FPvT0Ui_0x19c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_MemCpy__FPvT0Ui_0x19c980");
#endif

    switch (ctx->pc) {
        case 0x19c988u: goto label_19c988;
        default: break;
    }

    ctx->pc = 0x19c980u;

    // 0x19c980: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19c980u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c984: 0x0  nop
    ctx->pc = 0x19c984u;
    // NOP
label_19c988:
    // 0x19c988: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x19c988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c98c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19c98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19c990: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x19c990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19c994: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19c994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19c998: 0x0  nop
    ctx->pc = 0x19c998u;
    // NOP
    // 0x19c99c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C99Cu;
    {
        const bool branch_taken_0x19c99c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C99Cu;
        // 0x19c9a0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c99c) {
            ctx->pc = 0x19C988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c988;
        }
    }
    ctx->pc = 0x19C9A4u;
    // 0x19c9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x19C9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9A4u;
        // 0x19c9a8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C9ACu;
}
