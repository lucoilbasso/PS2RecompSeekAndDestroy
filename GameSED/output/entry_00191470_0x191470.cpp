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

// Function: entry_00191470
// Address: 0x191470 - 0x19148c
void entry_00191470_0x191470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191470_0x191470");
#endif

    ctx->pc = 0x191470u;

    // 0x191470: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x191474: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x191474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x191478: 0x2ce20007  sltiu       $v0, $a3, 0x7
    ctx->pc = 0x191478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x19147c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19147Cu;
    {
        const bool branch_taken_0x19147c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19147Cu;
        // 0x191480: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19147c) {
            ctx->pc = 0x191440u;
            return;
        }
    }
    ctx->pc = 0x191484u;
    // 0x191484: 0x3e00008  jr          $ra
    ctx->pc = 0x191484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19148Cu;
}
