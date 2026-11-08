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

// Function: entry_001325a8
// Address: 0x1325a8 - 0x1325bc
void entry_001325a8_0x1325a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001325a8_0x1325a8");
#endif

    switch (ctx->pc) {
        case 0x1325b0u: goto label_1325b0;
        default: break;
    }

    ctx->pc = 0x1325a8u;

    // 0x1325a8: 0xc04ba82  jal         func_12EA08
    ctx->pc = 0x1325A8u;
    SET_GPR_U32(ctx, 31, 0x1325B0u);
    ctx->pc = 0x1325ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1325A8u;
    // 0x1325ac: 0x8c4402f8  lw          $a0, 0x2F8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EA08u, 0x1325A8u, 0x1325B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325B0u;
label_1325b0:
    // 0x1325b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1325b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1325b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1325B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1325B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325B4u;
        // 0x1325b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1325B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1325BCu;
}
