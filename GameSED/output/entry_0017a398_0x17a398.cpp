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

// Function: entry_0017a398
// Address: 0x17a398 - 0x17a3ac
void entry_0017a398_0x17a398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a398_0x17a398");
#endif

    switch (ctx->pc) {
        case 0x17a3a0u: goto label_17a3a0;
        default: break;
    }

    ctx->pc = 0x17a398u;

    // 0x17a398: 0xc05e8ec  jal         func_17A3B0
    ctx->pc = 0x17A398u;
    SET_GPR_U32(ctx, 31, 0x17A3A0u);
    ctx->pc = 0x17A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A3B0u, 0x17A398u, 0x17A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A3A0u;
label_17a3a0:
    // 0x17a3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3A4u;
        // 0x17a3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A3ACu;
}
