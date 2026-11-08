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

// Function: Cmd_MIDI_MASTER_VOLUME_Entry__FP15BsSCDEntControl
// Address: 0x11da48 - 0x11da74
void Cmd_MIDI_MASTER_VOLUME_Entry__FP15BsSCDEntControl_0x11da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MIDI_MASTER_VOLUME_Entry__FP15BsSCDEntControl_0x11da48");
#endif

    switch (ctx->pc) {
        case 0x11da58u: goto label_11da58;
        case 0x11da68u: goto label_11da68;
        default: break;
    }

    ctx->pc = 0x11da48u;

    // 0x11da48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11da48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11da4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11da4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11da50: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11DA50u;
    SET_GPR_U32(ctx, 31, 0x11DA58u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11DA50u, 0x11DA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA58u;
label_11da58:
    // 0x11da58: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11da58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11da5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11da5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da60: 0xc0477a2  jal         func_11DE88
    ctx->pc = 0x11DA60u;
    SET_GPR_U32(ctx, 31, 0x11DA68u);
    ctx->pc = 0x11DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA60u;
    // 0x11da64: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE88u, 0x11DA60u, 0x11DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA68u;
label_11da68:
    // 0x11da68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11da68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11da6c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA6Cu;
        // 0x11da70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DA74u;
}
