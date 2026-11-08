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

// Function: entry_001779e0
// Address: 0x1779e0 - 0x1779f4
void entry_001779e0_0x1779e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001779e0_0x1779e0");
#endif

    switch (ctx->pc) {
        case 0x1779e8u: goto label_1779e8;
        default: break;
    }

    ctx->pc = 0x1779e0u;

    // 0x1779e0: 0xc05de7e  jal         func_1779F8
    ctx->pc = 0x1779E0u;
    SET_GPR_U32(ctx, 31, 0x1779E8u);
    ctx->pc = 0x1779E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1779E0u;
    // 0x1779e4: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1779F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1779F8u, 0x1779E0u, 0x1779E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1779E8u;
label_1779e8:
    // 0x1779e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1779e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1779ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1779ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1779F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779ECu;
        // 0x1779f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1779ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1779F4u;
}
