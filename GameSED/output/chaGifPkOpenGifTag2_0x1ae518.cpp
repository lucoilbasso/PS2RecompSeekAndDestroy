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

// Function: chaGifPkOpenGifTag2
// Address: 0x1ae518 - 0x1ae538
void chaGifPkOpenGifTag2_0x1ae518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chaGifPkOpenGifTag2_0x1ae518");
#endif

    ctx->pc = 0x1ae518u;

    // 0x1ae518: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ae518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ae51c: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x1ae51cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x1ae520: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1ae520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1ae524: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1ae524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1ae528: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x1ae528u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x1ae52c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1ae52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1ae530: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE530u;
        // 0x1ae534: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE538u;
}
