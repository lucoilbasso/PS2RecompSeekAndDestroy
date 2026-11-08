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

// Function: SeVolumeMotion__13WcSeStdMotioniii
// Address: 0x17bcd8 - 0x17bd00
void SeVolumeMotion__13WcSeStdMotioniii_0x17bcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeVolumeMotion__13WcSeStdMotioniii_0x17bcd8");
#endif

    ctx->pc = 0x17bcd8u;

    // 0x17bcd8: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x17bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x17bcdc: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x17bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x17bce0: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x17bce0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17bce4: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x17bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x17bce8: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x17bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x17bcec: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17BCECu;
    {
        const bool branch_taken_0x17bcec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bcec) {
            ctx->pc = 0x17BCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BCECu;
            // 0x17bcf0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BCF4u;
            goto label_17bcf4;
        }
    }
    ctx->pc = 0x17BCF4u;
label_17bcf4:
    // 0x17bcf4: 0x1012  mflo        $v0
    ctx->pc = 0x17bcf4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x17bcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCF8u;
        // 0x17bcfc: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BD00u;
}
