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

// Function: Cmd_IMAGE_RECT_Entry__FP15BsSCDEntControl
// Address: 0x104060 - 0x104088
void Cmd_IMAGE_RECT_Entry__FP15BsSCDEntControl_0x104060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_IMAGE_RECT_Entry__FP15BsSCDEntControl_0x104060");
#endif

    switch (ctx->pc) {
        case 0x10407cu: goto label_10407c;
        default: break;
    }

    ctx->pc = 0x104060u;

    // 0x104060: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x104060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x104064: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104068: 0x24a5b000  addiu       $a1, $a1, -0x5000
    ctx->pc = 0x104068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946816));
    // 0x10406c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10406cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x104070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104074: 0xc06a324  jal         func_1A8C90
    ctx->pc = 0x104074u;
    SET_GPR_U32(ctx, 31, 0x10407Cu);
    ctx->pc = 0x104078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104074u;
    // 0x104078: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8C90u, 0x104074u, 0x10407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10407Cu;
label_10407c:
    // 0x10407c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10407cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104080: 0x3e00008  jr          $ra
    ctx->pc = 0x104080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104080u;
        // 0x104084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104088u;
}
