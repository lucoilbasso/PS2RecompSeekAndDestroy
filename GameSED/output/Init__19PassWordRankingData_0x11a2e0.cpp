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

// Function: Init__19PassWordRankingData
// Address: 0x11a2e0 - 0x11a330
void Init__19PassWordRankingData_0x11a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__19PassWordRankingData_0x11a2e0");
#endif

    switch (ctx->pc) {
        case 0x11a308u: goto label_11a308;
        default: break;
    }

    ctx->pc = 0x11a2e0u;

    // 0x11a2e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11a2e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a2e8: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x11a2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a2ec: 0x2483000b  addiu       $v1, $a0, 0xB
    ctx->pc = 0x11a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 11));
    // 0x11a2f0: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x11a2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a2f4: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x11a2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a2f8: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x11a2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a2fc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x11a2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a300: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x11a300u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a304: 0x0  nop
    ctx->pc = 0x11a304u;
    // NOP
label_11a308:
    // 0x11a308: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11a308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11a30c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x11a30cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a310: 0x0  nop
    ctx->pc = 0x11a310u;
    // NOP
    // 0x11a314: 0x0  nop
    ctx->pc = 0x11a314u;
    // NOP
    // 0x11a318: 0x0  nop
    ctx->pc = 0x11a318u;
    // NOP
    // 0x11a31c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A31Cu;
    {
        const bool branch_taken_0x11a31c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x11A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A31Cu;
        // 0x11a320: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a31c) {
            ctx->pc = 0x11A308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a308;
        }
    }
    ctx->pc = 0x11A324u;
    // 0x11a324: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11a324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11a328: 0x3e00008  jr          $ra
    ctx->pc = 0x11A328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A328u;
        // 0x11a32c: 0xa0820005  sb          $v0, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A330u;
}
