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

// Function: entry_001ce700
// Address: 0x1ce700 - 0x1ce720
void entry_001ce700_0x1ce700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce700_0x1ce700");
#endif

    ctx->pc = 0x1ce700u;

    // 0x1ce700: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE700u;
    {
        const bool branch_taken_0x1ce700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE700u;
        // 0x1ce704: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce700) {
            ctx->pc = 0x1CE720u;
            return;
        }
    }
    ctx->pc = 0x1CE708u;
    // 0x1ce708: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CE708u;
    {
        const bool branch_taken_0x1ce708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce708) {
            ctx->pc = 0x1CE70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE708u;
            // 0x1ce70c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE774u;
            return;
        }
    }
    ctx->pc = 0x1CE710u;
    // 0x1ce710: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1ce710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ce714: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ce714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ce718: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE718u;
        // 0x1ce71c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE720u;
}
