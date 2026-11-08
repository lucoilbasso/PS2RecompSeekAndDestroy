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

// Function: entry_00112b88
// Address: 0x112b88 - 0x112b9c
void entry_00112b88_0x112b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112b88_0x112b88");
#endif

    switch (ctx->pc) {
        case 0x112b90u: goto label_112b90;
        default: break;
    }

    ctx->pc = 0x112b88u;

    // 0x112b88: 0xc044722  jal         func_111C88
    ctx->pc = 0x112B88u;
    SET_GPR_U32(ctx, 31, 0x112B90u);
    ctx->pc = 0x112B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B88u;
    // 0x112b8c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C88u, 0x112B88u, 0x112B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112B90u;
label_112b90:
    // 0x112b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112b94: 0x3e00008  jr          $ra
    ctx->pc = 0x112B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B94u;
        // 0x112b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112B9Cu;
}
