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

// Function: DoOTSorting__8ApcField
// Address: 0x13ebf0 - 0x13ec0c
void DoOTSorting__8ApcField_0x13ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoOTSorting__8ApcField_0x13ebf0");
#endif

    switch (ctx->pc) {
        case 0x13ec00u: goto label_13ec00;
        default: break;
    }

    ctx->pc = 0x13ebf0u;

    // 0x13ebf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13ebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13ebf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ebf8: 0xc06227c  jal         func_1889F0
    ctx->pc = 0x13EBF8u;
    SET_GPR_U32(ctx, 31, 0x13EC00u);
    ctx->pc = 0x1889F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1889F0u, 0x13EBF8u, 0x13EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC00u;
label_13ec00:
    // 0x13ec00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ec00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ec04: 0x3e00008  jr          $ra
    ctx->pc = 0x13EC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC04u;
        // 0x13ec08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EC0Cu;
}
