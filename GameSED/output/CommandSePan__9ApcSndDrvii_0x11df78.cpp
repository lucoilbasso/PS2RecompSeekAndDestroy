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

// Function: CommandSePan__9ApcSndDrvii
// Address: 0x11df78 - 0x11df9c
void CommandSePan__9ApcSndDrvii_0x11df78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandSePan__9ApcSndDrvii_0x11df78");
#endif

    switch (ctx->pc) {
        case 0x11df90u: goto label_11df90;
        default: break;
    }

    ctx->pc = 0x11df78u;

    // 0x11df78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11df78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11df7c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DF7Cu;
    {
        const bool branch_taken_0x11df7c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x11DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF7Cu;
        // 0x11df80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df7c) {
            ctx->pc = 0x11DF90u;
            goto label_11df90;
        }
    }
    ctx->pc = 0x11DF84u;
    // 0x11df84: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11df88: 0xc05ee74  jal         func_17B9D0
    ctx->pc = 0x11DF88u;
    SET_GPR_U32(ctx, 31, 0x11DF90u);
    ctx->pc = 0x11DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF88u;
    // 0x11df8c: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B9D0u, 0x11DF88u, 0x11DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF90u;
label_11df90:
    // 0x11df90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11df90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11df94: 0x3e00008  jr          $ra
    ctx->pc = 0x11DF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF94u;
        // 0x11df98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DF9Cu;
}
