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

// Function: entry_001a9228
// Address: 0x1a9228 - 0x1a923c
void entry_001a9228_0x1a9228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9228_0x1a9228");
#endif

    switch (ctx->pc) {
        case 0x1a9230u: goto label_1a9230;
        default: break;
    }

    ctx->pc = 0x1a9228u;

    // 0x1a9228: 0xc06980a  jal         func_1A6028
    ctx->pc = 0x1A9228u;
    SET_GPR_U32(ctx, 31, 0x1A9230u);
    ctx->pc = 0x1A922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9228u;
    // 0x1a922c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6028u, 0x1A9228u, 0x1A9230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9230u;
label_1a9230:
    // 0x1a9230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9234: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9234u;
        // 0x1a9238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A923Cu;
}
