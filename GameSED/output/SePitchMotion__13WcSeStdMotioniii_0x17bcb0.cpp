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

// Function: SePitchMotion__13WcSeStdMotioniii
// Address: 0x17bcb0 - 0x17bcd8
void SePitchMotion__13WcSeStdMotioniii_0x17bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SePitchMotion__13WcSeStdMotioniii_0x17bcb0");
#endif

    ctx->pc = 0x17bcb0u;

    // 0x17bcb0: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x17bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x17bcb4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x17bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x17bcb8: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x17bcb8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17bcbc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x17bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x17bcc0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x17bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x17bcc4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17BCC4u;
    {
        const bool branch_taken_0x17bcc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bcc4) {
            ctx->pc = 0x17BCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BCC4u;
            // 0x17bcc8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BCCCu;
            goto label_17bccc;
        }
    }
    ctx->pc = 0x17BCCCu;
label_17bccc:
    // 0x17bccc: 0x1012  mflo        $v0
    ctx->pc = 0x17bcccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x17bcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCD0u;
        // 0x17bcd4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BCD8u;
}
