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

// Function: entry_001a8580
// Address: 0x1a8580 - 0x1a859c
void entry_001a8580_0x1a8580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8580_0x1a8580");
#endif

    ctx->pc = 0x1a8580u;

    // 0x1a8580: 0x2c620200  sltiu       $v0, $v1, 0x200
    ctx->pc = 0x1a8580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1a8584: 0x0  nop
    ctx->pc = 0x1a8584u;
    // NOP
    // 0x1a8588: 0x0  nop
    ctx->pc = 0x1a8588u;
    // NOP
    // 0x1a858c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A858Cu;
    {
        const bool branch_taken_0x1a858c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A858Cu;
        // 0x1a8590: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a858c) {
            ctx->pc = 0x1A8578u;
            return;
        }
    }
    ctx->pc = 0x1A8594u;
    // 0x1a8594: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A859Cu;
}
