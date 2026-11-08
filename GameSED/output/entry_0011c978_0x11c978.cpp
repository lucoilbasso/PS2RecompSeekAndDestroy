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

// Function: entry_0011c978
// Address: 0x11c978 - 0x11c98c
void entry_0011c978_0x11c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c978_0x11c978");
#endif

    switch (ctx->pc) {
        case 0x11c980u: goto label_11c980;
        default: break;
    }

    ctx->pc = 0x11c978u;

    // 0x11c978: 0xc05e5b0  jal         func_1796C0
    ctx->pc = 0x11C978u;
    SET_GPR_U32(ctx, 31, 0x11C980u);
    ctx->pc = 0x1796C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1796C0u, 0x11C978u, 0x11C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C980u;
label_11c980:
    // 0x11c980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c984: 0x3e00008  jr          $ra
    ctx->pc = 0x11C984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C984u;
        // 0x11c988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C98Cu;
}
