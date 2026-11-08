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

// Function: entry_0017e828
// Address: 0x17e828 - 0x17e83c
void entry_0017e828_0x17e828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e828_0x17e828");
#endif

    switch (ctx->pc) {
        case 0x17e830u: goto label_17e830;
        default: break;
    }

    ctx->pc = 0x17e828u;

    // 0x17e828: 0xc05f452  jal         func_17D148
    ctx->pc = 0x17E828u;
    SET_GPR_U32(ctx, 31, 0x17E830u);
    ctx->pc = 0x17D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D148u, 0x17E828u, 0x17E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E830u;
label_17e830:
    // 0x17e830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e834: 0x3e00008  jr          $ra
    ctx->pc = 0x17E834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E834u;
        // 0x17e838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E83Cu;
}
