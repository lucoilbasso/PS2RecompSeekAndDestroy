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

// Function: entry_00105970
// Address: 0x105970 - 0x105988
void entry_00105970_0x105970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105970_0x105970");
#endif

    switch (ctx->pc) {
        case 0x105978u: goto label_105978;
        default: break;
    }

    ctx->pc = 0x105970u;

    // 0x105970: 0xc060e0e  jal         func_183838
    ctx->pc = 0x105970u;
    SET_GPR_U32(ctx, 31, 0x105978u);
    ctx->pc = 0x105974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105970u;
    // 0x105974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183838u, 0x105970u, 0x105978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105978u;
label_105978:
    // 0x105978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10597c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10597cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105980: 0x3e00008  jr          $ra
    ctx->pc = 0x105980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105980u;
        // 0x105984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105988u;
}
