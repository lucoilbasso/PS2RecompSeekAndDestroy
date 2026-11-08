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

// Function: entry_00156a60
// Address: 0x156a60 - 0x156a74
void entry_00156a60_0x156a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156a60_0x156a60");
#endif

    switch (ctx->pc) {
        case 0x156a68u: goto label_156a68;
        default: break;
    }

    ctx->pc = 0x156a60u;

    // 0x156a60: 0xc055a9e  jal         func_156A78
    ctx->pc = 0x156A60u;
    SET_GPR_U32(ctx, 31, 0x156A68u);
    ctx->pc = 0x156A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156A60u;
    // 0x156a64: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A78u, 0x156A60u, 0x156A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156A68u;
label_156a68:
    // 0x156a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x156A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A6Cu;
        // 0x156a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156A74u;
}
