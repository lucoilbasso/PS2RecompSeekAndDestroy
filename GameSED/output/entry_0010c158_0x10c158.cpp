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

// Function: entry_0010c158
// Address: 0x10c158 - 0x10c16c
void entry_0010c158_0x10c158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c158_0x10c158");
#endif

    switch (ctx->pc) {
        case 0x10c160u: goto label_10c160;
        default: break;
    }

    ctx->pc = 0x10c158u;

    // 0x10c158: 0xc041da8  jal         func_1076A0
    ctx->pc = 0x10C158u;
    SET_GPR_U32(ctx, 31, 0x10C160u);
    ctx->pc = 0x10C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C158u;
    // 0x10c15c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1076A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1076A0u, 0x10C158u, 0x10C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C160u;
label_10c160:
    // 0x10c160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c164: 0x3e00008  jr          $ra
    ctx->pc = 0x10C164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C164u;
        // 0x10c168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C16Cu;
}
