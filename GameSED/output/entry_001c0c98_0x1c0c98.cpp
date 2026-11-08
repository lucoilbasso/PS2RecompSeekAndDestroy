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

// Function: entry_001c0c98
// Address: 0x1c0c98 - 0x1c0cbc
void entry_001c0c98_0x1c0c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0c98_0x1c0c98");
#endif

    ctx->pc = 0x1c0c98u;

    // 0x1c0c98: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1c0c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c0c9c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x1c0c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x1c0ca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ca4: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x1c0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x1c0ca8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0CA8u;
    {
        const bool branch_taken_0x1c0ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CA8u;
        // 0x1c0cac: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ca8) {
            ctx->pc = 0x1C0CBCu;
            return;
        }
    }
    ctx->pc = 0x1C0CB0u;
    // 0x1c0cb0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1c0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1c0cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CB4u;
        // 0x1c0cb8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0CBCu;
}
