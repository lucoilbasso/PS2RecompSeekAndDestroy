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

// Function: readBufBeginGet
// Address: 0x170d70 - 0x170dd4
void readBufBeginGet_0x170d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readBufBeginGet_0x170d70");
#endif

    ctx->pc = 0x170d70u;

    // 0x170d70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x170d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d74: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x170d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x170d78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x170d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x170d7c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x170d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x170d80: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x170D80u;
    {
        const bool branch_taken_0x170d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170d80) {
            ctx->pc = 0x170DCCu;
            goto label_170dcc;
        }
    }
    ctx->pc = 0x170D88u;
    // 0x170d88: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x170d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x170d8c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x170d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x170d90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x170d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170d94: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x170d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x170d98: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x170d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x170d9c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x170d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x170da0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x170da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170da4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170da8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x170DA8u;
    {
        const bool branch_taken_0x170da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x170da8) {
            ctx->pc = 0x170DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170DA8u;
            // 0x170dac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x170DB0u;
            goto label_170db0;
        }
    }
    ctx->pc = 0x170DB0u;
label_170db0:
    // 0x170db0: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x170db0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x170db4: 0x1010  mfhi        $v0
    ctx->pc = 0x170db4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x170db8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x170db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x170dbc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x170dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x170dc0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x170dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x170dc4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x170dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x170dc8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x170dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_170dcc:
    // 0x170dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x170DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170DD4u;
}
