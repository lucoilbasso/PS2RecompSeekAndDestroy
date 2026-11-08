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

// Function: entry_0015e834
// Address: 0x15e834 - 0x15e848
void entry_0015e834_0x15e834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e834_0x15e834");
#endif

    switch (ctx->pc) {
        case 0x15e83cu: goto label_15e83c;
        default: break;
    }

    ctx->pc = 0x15e834u;

    // 0x15e834: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x15E834u;
    SET_GPR_U32(ctx, 31, 0x15E83Cu);
    ctx->pc = 0x15E838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E834u;
    // 0x15e838: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x15E834u, 0x15E83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E83Cu;
label_15e83c:
    // 0x15e83c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15e83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e840: 0x3e00008  jr          $ra
    ctx->pc = 0x15E840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E840u;
        // 0x15e844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E848u;
}
