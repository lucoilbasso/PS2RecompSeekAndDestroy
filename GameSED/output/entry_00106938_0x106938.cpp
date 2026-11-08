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

// Function: entry_00106938
// Address: 0x106938 - 0x106954
void entry_00106938_0x106938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106938_0x106938");
#endif

    switch (ctx->pc) {
        case 0x106944u: goto label_106944;
        default: break;
    }

    ctx->pc = 0x106938u;

    // 0x106938: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x106938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10693c: 0xc046df8  jal         func_11B7E0
    ctx->pc = 0x10693Cu;
    SET_GPR_U32(ctx, 31, 0x106944u);
    ctx->pc = 0x106940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10693Cu;
    // 0x106940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B7E0u, 0x10693Cu, 0x106944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106944u;
label_106944:
    // 0x106944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106948: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x106948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10694c: 0x3e00008  jr          $ra
    ctx->pc = 0x10694Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10694Cu;
        // 0x106950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10694Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106954u;
}
