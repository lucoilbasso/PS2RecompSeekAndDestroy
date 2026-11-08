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

// Function: UVScrollDelaySetV__8WcObjecti
// Address: 0x1dfca8 - 0x1dfce0
void UVScrollDelaySetV__8WcObjecti_0x1dfca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UVScrollDelaySetV__8WcObjecti_0x1dfca8");
#endif

    ctx->pc = 0x1dfca8u;

    // 0x1dfca8: 0x9482017a  lhu         $v0, 0x17A($a0)
    ctx->pc = 0x1dfca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 378)));
    // 0x1dfcac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1dfcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1dfcb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dfcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dfcb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFCB4u;
    {
        const bool branch_taken_0x1dfcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCB4u;
        // 0x1dfcb8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcb4) {
            ctx->pc = 0x1DFCD8u;
            goto label_1dfcd8;
        }
    }
    ctx->pc = 0x1DFCBCu;
    // 0x1dfcbc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1dfcbcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1dfcc0: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1dfcc0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dfcc4: 0xa483017e  sh          $v1, 0x17E($a0)
    ctx->pc = 0x1dfcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 382), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dfcc8: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DFCC8u;
    {
        const bool branch_taken_0x1dfcc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfcc8) {
            ctx->pc = 0x1DFCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFCC8u;
            // 0x1dfccc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFCD0u;
            goto label_1dfcd0;
        }
    }
    ctx->pc = 0x1DFCD0u;
label_1dfcd0:
    // 0x1dfcd0: 0x1012  mflo        $v0
    ctx->pc = 0x1dfcd0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1dfcd4: 0xa482017a  sh          $v0, 0x17A($a0)
    ctx->pc = 0x1dfcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 378), (uint16_t)GPR_U32(ctx, 2));
label_1dfcd8:
    // 0x1dfcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFCE0u;
}
