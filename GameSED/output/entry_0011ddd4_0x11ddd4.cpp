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

// Function: entry_0011ddd4
// Address: 0x11ddd4 - 0x11dde8
void entry_0011ddd4_0x11ddd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ddd4_0x11ddd4");
#endif

    switch (ctx->pc) {
        case 0x11dddcu: goto label_11dddc;
        default: break;
    }

    ctx->pc = 0x11ddd4u;

    // 0x11ddd4: 0xc05eac0  jal         func_17AB00
    ctx->pc = 0x11DDD4u;
    SET_GPR_U32(ctx, 31, 0x11DDDCu);
    ctx->pc = 0x11DDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDD4u;
    // 0x11ddd8: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AB00u, 0x11DDD4u, 0x11DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDDCu;
label_11dddc:
    // 0x11dddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dde0: 0x3e00008  jr          $ra
    ctx->pc = 0x11DDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDE0u;
        // 0x11dde4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DDE8u;
}
