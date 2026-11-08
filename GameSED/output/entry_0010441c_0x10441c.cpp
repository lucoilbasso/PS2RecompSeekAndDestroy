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

// Function: entry_0010441c
// Address: 0x10441c - 0x104430
void entry_0010441c_0x10441c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010441c_0x10441c");
#endif

    switch (ctx->pc) {
        case 0x104424u: goto label_104424;
        default: break;
    }

    ctx->pc = 0x10441cu;

    // 0x10441c: 0xc04171a  jal         func_105C68
    ctx->pc = 0x10441Cu;
    SET_GPR_U32(ctx, 31, 0x104424u);
    ctx->pc = 0x104420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10441Cu;
    // 0x104420: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x10441Cu, 0x104424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104424u;
label_104424:
    // 0x104424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104428: 0x3e00008  jr          $ra
    ctx->pc = 0x104428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104428u;
        // 0x10442c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104430u;
}
