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

// Function: entry_0017bed8
// Address: 0x17bed8 - 0x17beec
void entry_0017bed8_0x17bed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bed8_0x17bed8");
#endif

    switch (ctx->pc) {
        case 0x17bee0u: goto label_17bee0;
        default: break;
    }

    ctx->pc = 0x17bed8u;

    // 0x17bed8: 0xc05efbc  jal         func_17BEF0
    ctx->pc = 0x17BED8u;
    SET_GPR_U32(ctx, 31, 0x17BEE0u);
    ctx->pc = 0x17BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BED8u;
    // 0x17bedc: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BEF0u, 0x17BED8u, 0x17BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BEE0u;
label_17bee0:
    // 0x17bee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bee4: 0x3e00008  jr          $ra
    ctx->pc = 0x17BEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEE4u;
        // 0x17bee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BEECu;
}
