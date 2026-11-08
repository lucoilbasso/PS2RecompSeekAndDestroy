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

// Function: entry_0017a5c0
// Address: 0x17a5c0 - 0x17a5d4
void entry_0017a5c0_0x17a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a5c0_0x17a5c0");
#endif

    switch (ctx->pc) {
        case 0x17a5c8u: goto label_17a5c8;
        default: break;
    }

    ctx->pc = 0x17a5c0u;

    // 0x17a5c0: 0xc05e976  jal         func_17A5D8
    ctx->pc = 0x17A5C0u;
    SET_GPR_U32(ctx, 31, 0x17A5C8u);
    ctx->pc = 0x17A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5C0u;
    // 0x17a5c4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A5D8u, 0x17A5C0u, 0x17A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A5C8u;
label_17a5c8:
    // 0x17a5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x17A5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5CCu;
        // 0x17a5d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A5D4u;
}
