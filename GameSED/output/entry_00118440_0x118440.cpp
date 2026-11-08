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

// Function: entry_00118440
// Address: 0x118440 - 0x118458
void entry_00118440_0x118440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118440_0x118440");
#endif

    switch (ctx->pc) {
        case 0x118448u: goto label_118448;
        default: break;
    }

    ctx->pc = 0x118440u;

    // 0x118440: 0xc046286  jal         func_118A18
    ctx->pc = 0x118440u;
    SET_GPR_U32(ctx, 31, 0x118448u);
    ctx->pc = 0x118444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118440u;
    // 0x118444: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A18u, 0x118440u, 0x118448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118448u;
label_118448:
    // 0x118448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11844c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11844cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118450: 0x3e00008  jr          $ra
    ctx->pc = 0x118450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118450u;
        // 0x118454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118458u;
}
