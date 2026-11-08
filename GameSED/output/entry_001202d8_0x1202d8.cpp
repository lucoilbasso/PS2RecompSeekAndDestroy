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

// Function: entry_001202d8
// Address: 0x1202d8 - 0x1202f0
void entry_001202d8_0x1202d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001202d8_0x1202d8");
#endif

    ctx->pc = 0x1202d8u;

    // 0x1202d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1202d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1202dc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1202dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1202e0: 0x4a1fff7  bgez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1202E0u;
    {
        const bool branch_taken_0x1202e0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1202E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202E0u;
        // 0x1202e4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1202e0) {
            ctx->pc = 0x1202C0u;
            return;
        }
    }
    ctx->pc = 0x1202E8u;
    // 0x1202e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1202E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1202ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1202E8u;
        // 0x1202ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1202E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1202F0u;
}
