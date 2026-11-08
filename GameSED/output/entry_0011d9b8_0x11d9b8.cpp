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

// Function: entry_0011d9b8
// Address: 0x11d9b8 - 0x11d9d4
void entry_0011d9b8_0x11d9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d9b8_0x11d9b8");
#endif

    switch (ctx->pc) {
        case 0x11d9c8u: goto label_11d9c8;
        default: break;
    }

    ctx->pc = 0x11d9b8u;

    // 0x11d9b8: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x11d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d9bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9c0: 0xc047772  jal         func_11DDC8
    ctx->pc = 0x11D9C0u;
    SET_GPR_U32(ctx, 31, 0x11D9C8u);
    ctx->pc = 0x11D9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D9C0u;
    // 0x11d9c4: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DDC8u, 0x11D9C0u, 0x11D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D9C8u;
label_11d9c8:
    // 0x11d9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D9CCu;
        // 0x11d9d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D9D4u;
}
