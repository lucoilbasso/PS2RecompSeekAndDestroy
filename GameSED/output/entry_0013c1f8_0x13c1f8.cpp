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

// Function: entry_0013c1f8
// Address: 0x13c1f8 - 0x13c210
void entry_0013c1f8_0x13c1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c1f8_0x13c1f8");
#endif

    ctx->pc = 0x13c1f8u;

    // 0x13c1f8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13C1F8u;
    {
        const bool branch_taken_0x13c1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1F8u;
        // 0x13c1fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1f8) {
            ctx->pc = 0x13C260u;
            return;
        }
    }
    ctx->pc = 0x13C200u;
    // 0x13c200: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13C200u;
    {
        const bool branch_taken_0x13c200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c200) {
            ctx->pc = 0x13C204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C200u;
            // 0x13c204: 0x8ce301e0  lw          $v1, 0x1E0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C284u;
            return;
        }
    }
    ctx->pc = 0x13C208u;
    // 0x13c208: 0x3e00008  jr          $ra
    ctx->pc = 0x13C208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C210u;
}
