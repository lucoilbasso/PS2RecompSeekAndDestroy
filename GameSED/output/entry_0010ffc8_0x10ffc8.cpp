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

// Function: entry_0010ffc8
// Address: 0x10ffc8 - 0x10ffdc
void entry_0010ffc8_0x10ffc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ffc8_0x10ffc8");
#endif

    switch (ctx->pc) {
        case 0x10ffd0u: goto label_10ffd0;
        default: break;
    }

    ctx->pc = 0x10ffc8u;

    // 0x10ffc8: 0xc061d98  jal         func_187660
    ctx->pc = 0x10FFC8u;
    SET_GPR_U32(ctx, 31, 0x10FFD0u);
    ctx->pc = 0x187660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187660u, 0x10FFC8u, 0x10FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFD0u;
label_10ffd0:
    // 0x10ffd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ffd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ffd4: 0x3e00008  jr          $ra
    ctx->pc = 0x10FFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFD4u;
        // 0x10ffd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FFDCu;
}
