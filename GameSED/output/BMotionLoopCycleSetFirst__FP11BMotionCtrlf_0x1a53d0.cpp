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

// Function: BMotionLoopCycleSetFirst__FP11BMotionCtrlf
// Address: 0x1a53d0 - 0x1a53f4
void BMotionLoopCycleSetFirst__FP11BMotionCtrlf_0x1a53d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionLoopCycleSetFirst__FP11BMotionCtrlf_0x1a53d0");
#endif

    ctx->pc = 0x1a53d0u;

    // 0x1a53d0: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a53d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a53d4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1a53d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a53d8: 0x24422b00  addiu       $v0, $v0, 0x2B00
    ctx->pc = 0x1a53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11008));
    // 0x1a53dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A53DCu;
    {
        const bool branch_taken_0x1a53dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a53dc) {
            ctx->pc = 0x1A53ECu;
            goto label_1a53ec;
        }
    }
    ctx->pc = 0x1A53E4u;
    // 0x1a53e4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1a53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a53e8: 0xe44c0008  swc1        $f12, 0x8($v0)
    ctx->pc = 0x1a53e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a53ec:
    // 0x1a53ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A53ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A53ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A53F4u;
}
