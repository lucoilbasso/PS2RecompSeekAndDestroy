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

// Function: entry_001a0b34
// Address: 0x1a0b34 - 0x1a0b48
void entry_001a0b34_0x1a0b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0b34_0x1a0b34");
#endif

    switch (ctx->pc) {
        case 0x1a0b3cu: goto label_1a0b3c;
        default: break;
    }

    ctx->pc = 0x1a0b34u;

    // 0x1a0b34: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A0B34u;
    SET_GPR_U32(ctx, 31, 0x1A0B3Cu);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A0B34u, 0x1A0B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B3Cu;
label_1a0b3c:
    // 0x1a0b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0b40: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B40u;
        // 0x1a0b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0B48u;
}
