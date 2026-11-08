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

// Function: entry_0017a844
// Address: 0x17a844 - 0x17a85c
void entry_0017a844_0x17a844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a844_0x17a844");
#endif

    switch (ctx->pc) {
        case 0x17a850u: goto label_17a850;
        default: break;
    }

    ctx->pc = 0x17a844u;

    // 0x17a844: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x17a844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x17a848: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17A848u;
    SET_GPR_U32(ctx, 31, 0x17A850u);
    ctx->pc = 0x17A84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A848u;
    // 0x17a84c: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17A848u, 0x17A850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A850u;
label_17a850:
    // 0x17a850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a854: 0x3e00008  jr          $ra
    ctx->pc = 0x17A854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A854u;
        // 0x17a858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A85Cu;
}
