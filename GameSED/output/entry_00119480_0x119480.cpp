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

// Function: entry_00119480
// Address: 0x119480 - 0x119494
void entry_00119480_0x119480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119480_0x119480");
#endif

    switch (ctx->pc) {
        case 0x119488u: goto label_119488;
        default: break;
    }

    ctx->pc = 0x119480u;

    // 0x119480: 0xc06a1d8  jal         func_1A8760
    ctx->pc = 0x119480u;
    SET_GPR_U32(ctx, 31, 0x119488u);
    ctx->pc = 0x119484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119480u;
    // 0x119484: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8760u, 0x119480u, 0x119488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119488u;
label_119488:
    // 0x119488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11948c: 0x3e00008  jr          $ra
    ctx->pc = 0x11948Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11948Cu;
        // 0x119490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11948Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119494u;
}
