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

// Function: entry_001cdb5c
// Address: 0x1cdb5c - 0x1cdb78
void entry_001cdb5c_0x1cdb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdb5c_0x1cdb5c");
#endif

    ctx->pc = 0x1cdb5cu;

    // 0x1cdb5c: 0x11220006  beq         $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDB5Cu;
    {
        const bool branch_taken_0x1cdb5c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CDB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB5Cu;
        // 0x1cdb60: 0x91840  sll         $v1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb5c) {
            ctx->pc = 0x1CDB78u;
            return;
        }
    }
    ctx->pc = 0x1CDB64u;
    // 0x1cdb64: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1cdb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1cdb68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cdb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cdb6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cdb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cdb70: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB70u;
        // 0x1cdb74: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDB78u;
}
