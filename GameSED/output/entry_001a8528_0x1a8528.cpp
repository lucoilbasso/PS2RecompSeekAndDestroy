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

// Function: entry_001a8528
// Address: 0x1a8528 - 0x1a853c
void entry_001a8528_0x1a8528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8528_0x1a8528");
#endif

    switch (ctx->pc) {
        case 0x1a8530u: goto label_1a8530;
        default: break;
    }

    ctx->pc = 0x1a8528u;

    // 0x1a8528: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A8528u;
    SET_GPR_U32(ctx, 31, 0x1A8530u);
    ctx->pc = 0x1A852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8528u;
    // 0x1a852c: 0x248493b0  addiu       $a0, $a0, -0x6C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A8528u, 0x1A8530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8530u;
label_1a8530:
    // 0x1a8530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8534: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8534u;
        // 0x1a8538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A853Cu;
}
