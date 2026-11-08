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

// Function: sceDevVu0CheckBusy
// Address: 0x1ac8f8 - 0x1ac90c
void sceDevVu0CheckBusy_0x1ac8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVu0CheckBusy_0x1ac8f8");
#endif

    ctx->pc = 0x1ac8f8u;

    // 0x1ac8f8: 0x4842e800  cfc2.ni     $v0, $vi29
    ctx->pc = 0x1ac8f8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_vpu_stat);
    // 0x1ac8fc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1ac8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1ac900: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ac900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ac904: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC904u;
        // 0x1ac908: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC90Cu;
}
