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

// Function: LinkSemaVSync__5WcRsci
// Address: 0x1dc480 - 0x1dc49c
void LinkSemaVSync__5WcRsci_0x1dc480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LinkSemaVSync__5WcRsci_0x1dc480");
#endif

    switch (ctx->pc) {
        case 0x1dc490u: goto label_1dc490;
        default: break;
    }

    ctx->pc = 0x1dc480u;

    // 0x1dc480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc488: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x1DC488u;
    SET_GPR_U32(ctx, 31, 0x1DC490u);
    ctx->pc = 0x1DC48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC488u;
    // 0x1dc48c: 0x2484015c  addiu       $a0, $a0, 0x15C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1DC488u, 0x1DC490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC490u;
label_1dc490:
    // 0x1dc490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc494: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC494u;
        // 0x1dc498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC49Cu;
}
