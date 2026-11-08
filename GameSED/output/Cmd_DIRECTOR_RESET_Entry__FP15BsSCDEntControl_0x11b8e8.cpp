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

// Function: Cmd_DIRECTOR_RESET_Entry__FP15BsSCDEntControl
// Address: 0x11b8e8 - 0x11b918
void Cmd_DIRECTOR_RESET_Entry__FP15BsSCDEntControl_0x11b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DIRECTOR_RESET_Entry__FP15BsSCDEntControl_0x11b8e8");
#endif

    switch (ctx->pc) {
        case 0x11b90cu: goto label_11b90c;
        default: break;
    }

    ctx->pc = 0x11b8e8u;

    // 0x11b8e8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11b8ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b8ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b8f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b8f4: 0xac403410  sw          $zero, 0x3410($v0)
    ctx->pc = 0x11b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13328), GPR_U32(ctx, 0));
    // 0x11b8f8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x11b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11b8fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B8FCu;
    {
        const bool branch_taken_0x11b8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8FCu;
        // 0x11b900: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8fc) {
            ctx->pc = 0x11B910u;
            goto label_11b910;
        }
    }
    ctx->pc = 0x11B904u;
    // 0x11b904: 0xc046c0a  jal         func_11B028
    ctx->pc = 0x11B904u;
    SET_GPR_U32(ctx, 31, 0x11B90Cu);
    ctx->pc = 0x11B028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B028u, 0x11B904u, 0x11B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B90Cu;
label_11b90c:
    // 0x11b90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b910:
    // 0x11b910: 0x3e00008  jr          $ra
    ctx->pc = 0x11B910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B910u;
        // 0x11b914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B918u;
}
