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

// Function: entry_0011d980
// Address: 0x11d980 - 0x11d9a4
void entry_0011d980_0x11d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d980_0x11d980");
#endif

    switch (ctx->pc) {
        case 0x11d998u: goto label_11d998;
        default: break;
    }

    ctx->pc = 0x11d980u;

    // 0x11d980: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11d980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11d984: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11d984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11d988: 0x24a56fe0  addiu       $a1, $a1, 0x6FE0
    ctx->pc = 0x11d988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28640));
    // 0x11d98c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11d990: 0xc04776a  jal         func_11DDA8
    ctx->pc = 0x11D990u;
    SET_GPR_U32(ctx, 31, 0x11D998u);
    ctx->pc = 0x11D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D990u;
    // 0x11d994: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DDA8u, 0x11D990u, 0x11D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D998u;
label_11d998:
    // 0x11d998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d99c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D99Cu;
        // 0x11d9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D9A4u;
}
