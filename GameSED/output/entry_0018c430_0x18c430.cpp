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

// Function: entry_0018c430
// Address: 0x18c430 - 0x18c444
void entry_0018c430_0x18c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c430_0x18c430");
#endif

    switch (ctx->pc) {
        case 0x18c438u: goto label_18c438;
        default: break;
    }

    ctx->pc = 0x18c430u;

    // 0x18c430: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x18C430u;
    SET_GPR_U32(ctx, 31, 0x18C438u);
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x18C430u, 0x18C438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C438u;
label_18c438:
    // 0x18c438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c43c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C43Cu;
        // 0x18c440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C444u;
}
