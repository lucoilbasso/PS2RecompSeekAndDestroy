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

// Function: CommandSeVolume__9ApcSndDrvii
// Address: 0x11df50 - 0x11df74
void CommandSeVolume__9ApcSndDrvii_0x11df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandSeVolume__9ApcSndDrvii_0x11df50");
#endif

    switch (ctx->pc) {
        case 0x11df68u: goto label_11df68;
        default: break;
    }

    ctx->pc = 0x11df50u;

    // 0x11df50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11df50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11df54: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DF54u;
    {
        const bool branch_taken_0x11df54 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x11DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF54u;
        // 0x11df58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df54) {
            ctx->pc = 0x11DF68u;
            goto label_11df68;
        }
    }
    ctx->pc = 0x11DF5Cu;
    // 0x11df5c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11df60: 0xc05ee68  jal         func_17B9A0
    ctx->pc = 0x11DF60u;
    SET_GPR_U32(ctx, 31, 0x11DF68u);
    ctx->pc = 0x11DF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF60u;
    // 0x11df64: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B9A0u, 0x11DF60u, 0x11DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF68u;
label_11df68:
    // 0x11df68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11df68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11df6c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF6Cu;
        // 0x11df70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DF74u;
}
