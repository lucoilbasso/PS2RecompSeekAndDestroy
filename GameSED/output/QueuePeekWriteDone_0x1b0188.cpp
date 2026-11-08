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

// Function: QueuePeekWriteDone
// Address: 0x1b0188 - 0x1b01c4
void QueuePeekWriteDone_0x1b0188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QueuePeekWriteDone_0x1b0188");
#endif

    ctx->pc = 0x1b0188u;

    // 0x1b0188: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b0188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b018c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1b018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b0190: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1b0190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b0194: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b0194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b0198: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b019c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b019cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b01a0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1b01a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1b01a4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b01a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1b01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b01ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B01ACu;
    {
        const bool branch_taken_0x1b01ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01ACu;
        // 0x1b01b0: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01ac) {
            ctx->pc = 0x1B01BCu;
            goto label_1b01bc;
        }
    }
    ctx->pc = 0x1B01B4u;
    // 0x1b01b4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1b01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1b01b8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1b01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1b01bc:
    // 0x1b01bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B01BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B01C4u;
}
