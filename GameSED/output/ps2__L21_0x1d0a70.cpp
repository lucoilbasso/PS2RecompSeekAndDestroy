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

// Function: $L21
// Address: 0x1d0a70 - 0x1d0a8c
void ps2__L21_0x1d0a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L21_0x1d0a70");
#endif

    ctx->pc = 0x1d0a70u;

    // 0x1d0a70: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x1d0a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x1d0a74: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1d0a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x1d0a78: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1d0a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1d0a7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0A7Cu;
    {
        const bool branch_taken_0x1d0a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A7Cu;
        // 0x1d0a80: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a7c) {
            ctx->pc = 0x1D0A8Cu;
            return;
        }
    }
    ctx->pc = 0x1D0A84u;
    // 0x1d0a84: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A84u;
        // 0x1d0a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0A8Cu;
}
