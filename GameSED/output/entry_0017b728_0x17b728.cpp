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

// Function: entry_0017b728
// Address: 0x17b728 - 0x17b73c
void entry_0017b728_0x17b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b728_0x17b728");
#endif

    switch (ctx->pc) {
        case 0x17b730u: goto label_17b730;
        default: break;
    }

    ctx->pc = 0x17b728u;

    // 0x17b728: 0xc05ec2e  jal         func_17B0B8
    ctx->pc = 0x17B728u;
    SET_GPR_U32(ctx, 31, 0x17B730u);
    ctx->pc = 0x17B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B728u;
    // 0x17b72c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B0B8u, 0x17B728u, 0x17B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B730u;
label_17b730:
    // 0x17b730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b734: 0x3e00008  jr          $ra
    ctx->pc = 0x17B734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B734u;
        // 0x17b738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B73Cu;
}
