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

// Function: voBufDecCount
// Address: 0x173eb8 - 0x173ed8
void voBufDecCount_0x173eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufDecCount_0x173eb8");
#endif

    ctx->pc = 0x173eb8u;

    // 0x173eb8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x173eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x173ebc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173EBCu;
    {
        const bool branch_taken_0x173ebc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x173ebc) {
            ctx->pc = 0x173ED0u;
            goto label_173ed0;
        }
    }
    ctx->pc = 0x173EC4u;
    // 0x173ec4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x173ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x173ec8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x173ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x173ecc: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x173eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_173ed0:
    // 0x173ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x173ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173ED8u;
}
