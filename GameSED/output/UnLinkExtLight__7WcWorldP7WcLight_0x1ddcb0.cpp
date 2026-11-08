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

// Function: UnLinkExtLight__7WcWorldP7WcLight
// Address: 0x1ddcb0 - 0x1ddd00
void UnLinkExtLight__7WcWorldP7WcLight_0x1ddcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnLinkExtLight__7WcWorldP7WcLight_0x1ddcb0");
#endif

    switch (ctx->pc) {
        case 0x1ddcc8u: goto label_1ddcc8;
        default: break;
    }

    ctx->pc = 0x1ddcb0u;

    // 0x1ddcb0: 0x8c8201c4  lw          $v0, 0x1C4($a0)
    ctx->pc = 0x1ddcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x1ddcb4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DDCB4u;
    {
        const bool branch_taken_0x1ddcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCB4u;
        // 0x1ddcb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddcb4) {
            ctx->pc = 0x1DDCF8u;
            goto label_1ddcf8;
        }
    }
    ctx->pc = 0x1DDCBCu;
    // 0x1ddcbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DDCBCu;
    {
        const bool branch_taken_0x1ddcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCBCu;
        // 0x1ddcc0: 0x8c830134  lw          $v1, 0x134($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddcbc) {
            ctx->pc = 0x1DDCD4u;
            goto label_1ddcd4;
        }
    }
    ctx->pc = 0x1DDCC4u;
    // 0x1ddcc4: 0x0  nop
    ctx->pc = 0x1ddcc4u;
    // NOP
label_1ddcc8:
    // 0x1ddcc8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DDCC8u;
    {
        const bool branch_taken_0x1ddcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCC8u;
        // 0x1ddccc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddcc8) {
            ctx->pc = 0x1DDCF8u;
            goto label_1ddcf8;
        }
    }
    ctx->pc = 0x1DDCD0u;
    // 0x1ddcd0: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1ddcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_1ddcd4:
    // 0x1ddcd4: 0x0  nop
    ctx->pc = 0x1ddcd4u;
    // NOP
    // 0x1ddcd8: 0x0  nop
    ctx->pc = 0x1ddcd8u;
    // NOP
    // 0x1ddcdc: 0x0  nop
    ctx->pc = 0x1ddcdcu;
    // NOP
    // 0x1ddce0: 0x0  nop
    ctx->pc = 0x1ddce0u;
    // NOP
    // 0x1ddce4: 0x1465fff8  bne         $v1, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DDCE4u;
    {
        const bool branch_taken_0x1ddce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ddce4) {
            ctx->pc = 0x1DDCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddcc8;
        }
    }
    ctx->pc = 0x1DDCECu;
    // 0x1ddcec: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x1ddcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1ddcf0: 0xac820134  sw          $v0, 0x134($a0)
    ctx->pc = 0x1ddcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 2));
    // 0x1ddcf4: 0xac600134  sw          $zero, 0x134($v1)
    ctx->pc = 0x1ddcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 0));
label_1ddcf8:
    // 0x1ddcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDD00u;
}
