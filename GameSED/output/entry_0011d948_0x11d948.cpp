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

// Function: entry_0011d948
// Address: 0x11d948 - 0x11d964
void entry_0011d948_0x11d948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d948_0x11d948");
#endif

    switch (ctx->pc) {
        case 0x11d958u: goto label_11d958;
        default: break;
    }

    ctx->pc = 0x11d948u;

    // 0x11d948: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11d948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d94c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x11d94cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11d950: 0xc047762  jal         func_11DD88
    ctx->pc = 0x11D950u;
    SET_GPR_U32(ctx, 31, 0x11D958u);
    ctx->pc = 0x11D954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D950u;
    // 0x11d954: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD88u, 0x11D950u, 0x11D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D958u;
label_11d958:
    // 0x11d958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d95c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D95Cu;
        // 0x11d960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D964u;
}
