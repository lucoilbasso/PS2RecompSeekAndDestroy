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

// Function: entry_001325c8
// Address: 0x1325c8 - 0x1325e0
void entry_001325c8_0x1325c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001325c8_0x1325c8");
#endif

    switch (ctx->pc) {
        case 0x1325d0u: goto label_1325d0;
        default: break;
    }

    ctx->pc = 0x1325c8u;

    // 0x1325c8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x1325C8u;
    SET_GPR_U32(ctx, 31, 0x1325D0u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x1325C8u, 0x1325D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1325D0u;
label_1325d0:
    // 0x1325d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1325d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1325d4: 0xaf828a10  sw          $v0, -0x75F0($gp)
    ctx->pc = 0x1325d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937104), GPR_U32(ctx, 2));
    // 0x1325d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1325D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1325DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325D8u;
        // 0x1325dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1325D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1325E0u;
}
