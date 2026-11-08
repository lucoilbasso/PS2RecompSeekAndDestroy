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

// Function: entry_001194e8
// Address: 0x1194e8 - 0x1194fc
void entry_001194e8_0x1194e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001194e8_0x1194e8");
#endif

    switch (ctx->pc) {
        case 0x1194f0u: goto label_1194f0;
        default: break;
    }

    ctx->pc = 0x1194e8u;

    // 0x1194e8: 0xc06a1d8  jal         func_1A8760
    ctx->pc = 0x1194E8u;
    SET_GPR_U32(ctx, 31, 0x1194F0u);
    ctx->pc = 0x1194ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1194E8u;
    // 0x1194ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8760u, 0x1194E8u, 0x1194F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194F0u;
label_1194f0:
    // 0x1194f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1194f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1194f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1194F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1194F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194F4u;
        // 0x1194f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1194FCu;
}
