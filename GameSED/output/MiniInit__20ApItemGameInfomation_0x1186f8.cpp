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

// Function: MiniInit__20ApItemGameInfomation
// Address: 0x1186f8 - 0x118724
void MiniInit__20ApItemGameInfomation_0x1186f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MiniInit__20ApItemGameInfomation_0x1186f8");
#endif

    switch (ctx->pc) {
        case 0x118700u: goto label_118700;
        default: break;
    }

    ctx->pc = 0x1186f8u;

    // 0x1186f8: 0x24841cac  addiu       $a0, $a0, 0x1CAC
    ctx->pc = 0x1186f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7340));
    // 0x1186fc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1186fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_118700:
    // 0x118700: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x118704: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x118704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x118708: 0x0  nop
    ctx->pc = 0x118708u;
    // NOP
    // 0x11870c: 0x0  nop
    ctx->pc = 0x11870cu;
    // NOP
    // 0x118710: 0x0  nop
    ctx->pc = 0x118710u;
    // NOP
    // 0x118714: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x118714u;
    {
        const bool branch_taken_0x118714 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x118718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118714u;
        // 0x118718: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118714) {
            ctx->pc = 0x118700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118700;
        }
    }
    ctx->pc = 0x11871Cu;
    // 0x11871c: 0x3e00008  jr          $ra
    ctx->pc = 0x11871Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11871Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118724u;
}
