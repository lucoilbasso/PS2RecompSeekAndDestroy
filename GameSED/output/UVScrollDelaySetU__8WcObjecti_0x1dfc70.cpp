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

// Function: UVScrollDelaySetU__8WcObjecti
// Address: 0x1dfc70 - 0x1dfca8
void UVScrollDelaySetU__8WcObjecti_0x1dfc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UVScrollDelaySetU__8WcObjecti_0x1dfc70");
#endif

    ctx->pc = 0x1dfc70u;

    // 0x1dfc70: 0x94820178  lhu         $v0, 0x178($a0)
    ctx->pc = 0x1dfc70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x1dfc74: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1dfc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1dfc78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dfc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dfc7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFC7Cu;
    {
        const bool branch_taken_0x1dfc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC7Cu;
        // 0x1dfc80: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc7c) {
            ctx->pc = 0x1DFCA0u;
            goto label_1dfca0;
        }
    }
    ctx->pc = 0x1DFC84u;
    // 0x1dfc84: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1dfc84u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1dfc88: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1dfc88u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dfc8c: 0xa483017c  sh          $v1, 0x17C($a0)
    ctx->pc = 0x1dfc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 380), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dfc90: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DFC90u;
    {
        const bool branch_taken_0x1dfc90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfc90) {
            ctx->pc = 0x1DFC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFC90u;
            // 0x1dfc94: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFC98u;
            goto label_1dfc98;
        }
    }
    ctx->pc = 0x1DFC98u;
label_1dfc98:
    // 0x1dfc98: 0x1012  mflo        $v0
    ctx->pc = 0x1dfc98u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1dfc9c: 0xa4820178  sh          $v0, 0x178($a0)
    ctx->pc = 0x1dfc9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 376), (uint16_t)GPR_U32(ctx, 2));
label_1dfca0:
    // 0x1dfca0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFCA8u;
}
