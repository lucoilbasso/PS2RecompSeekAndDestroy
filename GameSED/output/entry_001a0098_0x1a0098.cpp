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

// Function: entry_001a0098
// Address: 0x1a0098 - 0x1a00ac
void entry_001a0098_0x1a0098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0098_0x1a0098");
#endif

    switch (ctx->pc) {
        case 0x1a00a0u: goto label_1a00a0;
        default: break;
    }

    ctx->pc = 0x1a0098u;

    // 0x1a0098: 0xc067d58  jal         func_19F560
    ctx->pc = 0x1A0098u;
    SET_GPR_U32(ctx, 31, 0x1A00A0u);
    ctx->pc = 0x1A009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0098u;
    // 0x1a009c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F560u, 0x1A0098u, 0x1A00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A00A0u;
label_1a00a0:
    // 0x1a00a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a00a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a00a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A00A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00A4u;
        // 0x1a00a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A00A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A00ACu;
}
