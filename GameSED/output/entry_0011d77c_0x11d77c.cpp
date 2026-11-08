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

// Function: entry_0011d77c
// Address: 0x11d77c - 0x11d794
void entry_0011d77c_0x11d77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d77c_0x11d77c");
#endif

    switch (ctx->pc) {
        case 0x11d784u: goto label_11d784;
        default: break;
    }

    ctx->pc = 0x11d77cu;

    // 0x11d77c: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x11D77Cu;
    SET_GPR_U32(ctx, 31, 0x11D784u);
    ctx->pc = 0x11D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D77Cu;
    // 0x11d780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x11D77Cu, 0x11D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D784u;
label_11d784:
    // 0x11d784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d788: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11d788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d78c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D78Cu;
        // 0x11d790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D794u;
}
