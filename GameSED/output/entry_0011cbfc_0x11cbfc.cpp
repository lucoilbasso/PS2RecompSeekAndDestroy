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

// Function: entry_0011cbfc
// Address: 0x11cbfc - 0x11cc10
void entry_0011cbfc_0x11cbfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cbfc_0x11cbfc");
#endif

    switch (ctx->pc) {
        case 0x11cc04u: goto label_11cc04;
        default: break;
    }

    ctx->pc = 0x11cbfcu;

    // 0x11cbfc: 0xc0452be  jal         func_114AF8
    ctx->pc = 0x11CBFCu;
    SET_GPR_U32(ctx, 31, 0x11CC04u);
    ctx->pc = 0x11CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBFCu;
    // 0x11cc00: 0xfcc30008  sd          $v1, 0x8($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114AF8u, 0x11CBFCu, 0x11CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC04u;
label_11cc04:
    // 0x11cc04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cc08: 0x3e00008  jr          $ra
    ctx->pc = 0x11CC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC08u;
        // 0x11cc0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CC10u;
}
