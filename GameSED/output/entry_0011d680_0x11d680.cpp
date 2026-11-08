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

// Function: entry_0011d680
// Address: 0x11d680 - 0x11d694
void entry_0011d680_0x11d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d680_0x11d680");
#endif

    switch (ctx->pc) {
        case 0x11d688u: goto label_11d688;
        default: break;
    }

    ctx->pc = 0x11d680u;

    // 0x11d680: 0xc0475a6  jal         func_11D698
    ctx->pc = 0x11D680u;
    SET_GPR_U32(ctx, 31, 0x11D688u);
    ctx->pc = 0x11D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D680u;
    // 0x11d684: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D698u, 0x11D680u, 0x11D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D688u;
label_11d688:
    // 0x11d688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d68c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D68Cu;
        // 0x11d690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D694u;
}
