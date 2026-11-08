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

// Function: entry_0016fc40
// Address: 0x16fc40 - 0x16fc54
void entry_0016fc40_0x16fc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fc40_0x16fc40");
#endif

    switch (ctx->pc) {
        case 0x16fc48u: goto label_16fc48;
        default: break;
    }

    ctx->pc = 0x16fc40u;

    // 0x16fc40: 0xc06b5b0  jal         func_1AD6C0
    ctx->pc = 0x16FC40u;
    SET_GPR_U32(ctx, 31, 0x16FC48u);
    ctx->pc = 0x16FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC40u;
    // 0x16fc44: 0xaf829154  sw          $v0, -0x6EAC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938964), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD6C0u, 0x16FC40u, 0x16FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC48u;
label_16fc48:
    // 0x16fc48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x16FC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC4Cu;
        // 0x16fc50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FC54u;
}
