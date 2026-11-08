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

// Function: entry_00138de8
// Address: 0x138de8 - 0x138df8
void entry_00138de8_0x138de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138de8_0x138de8");
#endif

    ctx->pc = 0x138de8u;

    // 0x138de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138dec: 0xac651400  sw          $a1, 0x1400($v1)
    ctx->pc = 0x138decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5120), GPR_U32(ctx, 5));
    // 0x138df0: 0x3e00008  jr          $ra
    ctx->pc = 0x138DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DF0u;
        // 0x138df4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138DF8u;
}
