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

// Function: B_MemCpy128__FPvT0Ui
// Address: 0x19c8c8 - 0x19c8f4
void B_MemCpy128__FPvT0Ui_0x19c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_MemCpy128__FPvT0Ui_0x19c8c8");
#endif

    switch (ctx->pc) {
        case 0x19c8d0u: goto label_19c8d0;
        default: break;
    }

    ctx->pc = 0x19c8c8u;

    // 0x19c8c8: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x19c8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x19c8cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19c8ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c8d0:
    // 0x19c8d0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x19c8d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c8d4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x19c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x19c8d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x19c8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19c8dc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x19c8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x19c8e0: 0x0  nop
    ctx->pc = 0x19c8e0u;
    // NOP
    // 0x19c8e4: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19C8E4u;
    {
        const bool branch_taken_0x19c8e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8E4u;
        // 0x19c8e8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8e4) {
            ctx->pc = 0x19C8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c8d0;
        }
    }
    ctx->pc = 0x19C8ECu;
    // 0x19c8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x19C8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8ECu;
        // 0x19c8f0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C8F4u;
}
