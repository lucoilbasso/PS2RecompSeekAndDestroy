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

// Function: entry_00106168
// Address: 0x106168 - 0x106188
void entry_00106168_0x106168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106168_0x106168");
#endif

    switch (ctx->pc) {
        case 0x106178u: goto label_106178;
        default: break;
    }

    ctx->pc = 0x106168u;

    // 0x106168: 0x8f8288a0  lw          $v0, -0x7760($gp)
    ctx->pc = 0x106168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x10616c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10616cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106170: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x106170u;
    SET_GPR_U32(ctx, 31, 0x106178u);
    ctx->pc = 0x106174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106170u;
    // 0x106174: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x106170u, 0x106178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106178u;
label_106178:
    // 0x106178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10617c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106180: 0x3e00008  jr          $ra
    ctx->pc = 0x106180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106180u;
        // 0x106184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106188u;
}
