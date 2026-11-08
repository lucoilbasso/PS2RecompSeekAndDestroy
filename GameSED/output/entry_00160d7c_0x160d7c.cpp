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

// Function: entry_00160d7c
// Address: 0x160d7c - 0x160d90
void entry_00160d7c_0x160d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160d7c_0x160d7c");
#endif

    switch (ctx->pc) {
        case 0x160d84u: goto label_160d84;
        default: break;
    }

    ctx->pc = 0x160d7cu;

    // 0x160d7c: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x160D7Cu;
    SET_GPR_U32(ctx, 31, 0x160D84u);
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x160D7Cu, 0x160D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160D84u;
label_160d84:
    // 0x160d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160d88: 0x3e00008  jr          $ra
    ctx->pc = 0x160D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D88u;
        // 0x160d8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160D90u;
}
