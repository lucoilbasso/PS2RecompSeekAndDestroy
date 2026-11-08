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

// Function: sceSifLoadStartModuleBuffer
// Address: 0x1b6348 - 0x1b6364
void sceSifLoadStartModuleBuffer_0x1b6348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifLoadStartModuleBuffer_0x1b6348");
#endif

    switch (ctx->pc) {
        case 0x1b6358u: goto label_1b6358;
        default: break;
    }

    ctx->pc = 0x1b6348u;

    // 0x1b6348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b634c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b634cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6350: 0xc06d756  jal         func_1B5D58
    ctx->pc = 0x1B6350u;
    SET_GPR_U32(ctx, 31, 0x1B6358u);
    ctx->pc = 0x1B5D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5D58u, 0x1B6350u, 0x1B6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6358u;
label_1b6358:
    // 0x1b6358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b635c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B635Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B635Cu;
        // 0x1b6360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B635Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6364u;
}
