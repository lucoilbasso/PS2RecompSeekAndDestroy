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

// Function: SetProjection__8WcExtentPFP8WcExtentP8WWorldOTP7WcWorld_vPvb
// Address: 0x1de410 - 0x1de428
void SetProjection__8WcExtentPFP8WcExtentP8WWorldOTP7WcWorld_vPvb_0x1de410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetProjection__8WcExtentPFP8WcExtentP8WWorldOTP7WcWorld_vPvb_0x1de410");
#endif

    ctx->pc = 0x1de410u;

    // 0x1de410: 0xac850158  sw          $a1, 0x158($a0)
    ctx->pc = 0x1de410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 5));
    // 0x1de414: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE414u;
    {
        const bool branch_taken_0x1de414 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE414u;
        // 0x1de418: 0xac86015c  sw          $a2, 0x15C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de414) {
            ctx->pc = 0x1DE420u;
            goto label_1de420;
        }
    }
    ctx->pc = 0x1DE41Cu;
    // 0x1de41c: 0xac860164  sw          $a2, 0x164($a0)
    ctx->pc = 0x1de41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 6));
label_1de420:
    // 0x1de420: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE428u;
}
