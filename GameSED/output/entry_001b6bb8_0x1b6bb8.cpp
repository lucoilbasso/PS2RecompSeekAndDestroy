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

// Function: entry_001b6bb8
// Address: 0x1b6bb8 - 0x1b6bdc
void entry_001b6bb8_0x1b6bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6bb8_0x1b6bb8");
#endif

    ctx->pc = 0x1b6bb8u;

label_1b6bb8:
    // 0x1b6bb8: 0x42000039  di
    ctx->pc = 0x1b6bb8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1b6bbc: 0x40f  sync.p
    ctx->pc = 0x1b6bbcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1b6bc0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x1b6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x1b6bc4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1b6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1b6bc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b6bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b6bcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B6BCCu;
    {
        const bool branch_taken_0x1b6bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6bcc) {
            ctx->pc = 0x1B6BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6bb8;
        }
    }
    ctx->pc = 0x1B6BD4u;
    // 0x1b6bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BD4u;
        // 0x1b6bd8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6BDCu;
}
