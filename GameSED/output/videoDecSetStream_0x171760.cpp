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

// Function: videoDecSetStream
// Address: 0x171760 - 0x171780
void videoDecSetStream_0x171760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecSetStream_0x171760");
#endif

    switch (ctx->pc) {
        case 0x171770u: goto label_171770;
        default: break;
    }

    ctx->pc = 0x171760u;

    // 0x171760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171768: 0xc06f330  jal         func_1BCCC0
    ctx->pc = 0x171768u;
    SET_GPR_U32(ctx, 31, 0x171770u);
    ctx->pc = 0x1BCCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCCC0u, 0x171768u, 0x171770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171770u;
label_171770:
    // 0x171770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171778: 0x3e00008  jr          $ra
    ctx->pc = 0x171778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171778u;
        // 0x17177c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171780u;
}
