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

// Function: entry_0011db70
// Address: 0x11db70 - 0x11db90
void entry_0011db70_0x11db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011db70_0x11db70");
#endif

    switch (ctx->pc) {
        case 0x11db80u: goto label_11db80;
        default: break;
    }

    ctx->pc = 0x11db70u;

    // 0x11db70: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11db74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11db74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db78: 0xc0477d4  jal         func_11DF50
    ctx->pc = 0x11DB78u;
    SET_GPR_U32(ctx, 31, 0x11DB80u);
    ctx->pc = 0x11DB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB78u;
    // 0x11db7c: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF50u, 0x11DB78u, 0x11DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB80u;
label_11db80:
    // 0x11db80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11db80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11db84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11db84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11db88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11db88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11db8c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DB94u;
}
