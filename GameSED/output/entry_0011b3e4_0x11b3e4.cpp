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

// Function: entry_0011b3e4
// Address: 0x11b3e4 - 0x11b3f8
void entry_0011b3e4_0x11b3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b3e4_0x11b3e4");
#endif

    switch (ctx->pc) {
        case 0x11b3ecu: goto label_11b3ec;
        default: break;
    }

    ctx->pc = 0x11b3e4u;

    // 0x11b3e4: 0xc04169c  jal         func_105A70
    ctx->pc = 0x11B3E4u;
    SET_GPR_U32(ctx, 31, 0x11B3ECu);
    ctx->pc = 0x105A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A70u, 0x11B3E4u, 0x11B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B3ECu;
label_11b3ec:
    // 0x11b3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3F0u;
        // 0x11b3f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B3F8u;
}
