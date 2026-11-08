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

// Function: entry_00179608
// Address: 0x179608 - 0x17961c
void entry_00179608_0x179608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179608_0x179608");
#endif

    switch (ctx->pc) {
        case 0x179610u: goto label_179610;
        default: break;
    }

    ctx->pc = 0x179608u;

    // 0x179608: 0xc05e482  jal         func_179208
    ctx->pc = 0x179608u;
    SET_GPR_U32(ctx, 31, 0x179610u);
    ctx->pc = 0x179208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179208u, 0x179608u, 0x179610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179610u;
label_179610:
    // 0x179610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179614: 0x3e00008  jr          $ra
    ctx->pc = 0x179614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179614u;
        // 0x179618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17961Cu;
}
