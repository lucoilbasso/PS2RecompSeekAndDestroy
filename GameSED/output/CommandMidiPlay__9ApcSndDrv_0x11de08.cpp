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

// Function: CommandMidiPlay__9ApcSndDrv
// Address: 0x11de08 - 0x11de38
void CommandMidiPlay__9ApcSndDrv_0x11de08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandMidiPlay__9ApcSndDrv_0x11de08");
#endif

    switch (ctx->pc) {
        case 0x11de1cu: goto label_11de1c;
        case 0x11de2cu: goto label_11de2c;
        default: break;
    }

    ctx->pc = 0x11de08u;

    // 0x11de08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11de08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11de0c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11de10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11de10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11de14: 0xc05ef40  jal         func_17BD00
    ctx->pc = 0x11DE14u;
    SET_GPR_U32(ctx, 31, 0x11DE1Cu);
    ctx->pc = 0x11DE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE14u;
    // 0x11de18: 0x8c440038  lw          $a0, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BD00u, 0x11DE14u, 0x11DE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE1Cu;
label_11de1c:
    // 0x11de1c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11de20: 0x2405599a  addiu       $a1, $zero, 0x599A
    ctx->pc = 0x11de20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22938));
    // 0x11de24: 0xc05eac0  jal         func_17AB00
    ctx->pc = 0x11DE24u;
    SET_GPR_U32(ctx, 31, 0x11DE2Cu);
    ctx->pc = 0x11DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE24u;
    // 0x11de28: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AB00u, 0x11DE24u, 0x11DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE2Cu;
label_11de2c:
    // 0x11de2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11de2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11de30: 0x3e00008  jr          $ra
    ctx->pc = 0x11DE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE30u;
        // 0x11de34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DE38u;
}
