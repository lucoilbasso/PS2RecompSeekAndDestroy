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

// Function: entry_00143544
// Address: 0x143544 - 0x14355c
void entry_00143544_0x143544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143544_0x143544");
#endif

    ctx->pc = 0x143544u;

    // 0x143544: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x143544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x143548: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x143548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x14354c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x14354Cu;
    {
        const bool branch_taken_0x14354c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14354Cu;
        // 0x143550: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14354c) {
            ctx->pc = 0x143518u;
            return;
        }
    }
    ctx->pc = 0x143554u;
    // 0x143554: 0x3e00008  jr          $ra
    ctx->pc = 0x143554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14355Cu;
}
