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

// Function: Cmd_MIDI_STOP_Entry__FP15BsSCDEntControl
// Address: 0x11da28 - 0x11da48
void Cmd_MIDI_STOP_Entry__FP15BsSCDEntControl_0x11da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MIDI_STOP_Entry__FP15BsSCDEntControl_0x11da28");
#endif

    switch (ctx->pc) {
        case 0x11da3cu: goto label_11da3c;
        default: break;
    }

    ctx->pc = 0x11da28u;

    // 0x11da28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11da28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11da2c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11da30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11da30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11da34: 0xc04779a  jal         func_11DE68
    ctx->pc = 0x11DA34u;
    SET_GPR_U32(ctx, 31, 0x11DA3Cu);
    ctx->pc = 0x11DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA34u;
    // 0x11da38: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE68u, 0x11DA34u, 0x11DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA3Cu;
label_11da3c:
    // 0x11da3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11da3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11da40: 0x3e00008  jr          $ra
    ctx->pc = 0x11DA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA40u;
        // 0x11da44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DA48u;
}
