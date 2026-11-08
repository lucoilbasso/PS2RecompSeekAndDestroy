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

// Function: CommandMidiStop__9ApcSndDrv
// Address: 0x11de68 - 0x11de88
void CommandMidiStop__9ApcSndDrv_0x11de68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandMidiStop__9ApcSndDrv_0x11de68");
#endif

    switch (ctx->pc) {
        case 0x11de7cu: goto label_11de7c;
        default: break;
    }

    ctx->pc = 0x11de68u;

    // 0x11de68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11de68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11de6c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11de70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11de70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11de74: 0xc05f09c  jal         func_17C270
    ctx->pc = 0x11DE74u;
    SET_GPR_U32(ctx, 31, 0x11DE7Cu);
    ctx->pc = 0x11DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE74u;
    // 0x11de78: 0x8c440038  lw          $a0, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C270u, 0x11DE74u, 0x11DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE7Cu;
label_11de7c:
    // 0x11de7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11de7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11de80: 0x3e00008  jr          $ra
    ctx->pc = 0x11DE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE80u;
        // 0x11de84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DE88u;
}
