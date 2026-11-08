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

// Function: entry_001197f8
// Address: 0x1197f8 - 0x11980c
void entry_001197f8_0x1197f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001197f8_0x1197f8");
#endif

    ctx->pc = 0x1197f8u;

    // 0x1197f8: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1197f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1197fc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1197fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x119800: 0xac24d52c  sw          $a0, -0x2AD4($at)
    ctx->pc = 0x119800u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956332), GPR_U32(ctx, 4));
    // 0x119804: 0x3e00008  jr          $ra
    ctx->pc = 0x119804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119804u;
        // 0x119808: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11980Cu;
}
