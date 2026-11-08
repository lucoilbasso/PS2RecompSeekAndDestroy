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

// Function: entry_00189408
// Address: 0x189408 - 0x18941c
void entry_00189408_0x189408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189408_0x189408");
#endif

    switch (ctx->pc) {
        case 0x189410u: goto label_189410;
        default: break;
    }

    ctx->pc = 0x189408u;

    // 0x189408: 0xc06184c  jal         func_186130
    ctx->pc = 0x189408u;
    SET_GPR_U32(ctx, 31, 0x189410u);
    ctx->pc = 0x186130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186130u, 0x189408u, 0x189410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189410u;
label_189410:
    // 0x189410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189414: 0x3e00008  jr          $ra
    ctx->pc = 0x189414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189414u;
        // 0x189418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18941Cu;
}
