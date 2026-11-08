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

// Function: _markOutput
// Address: 0x1c31f8 - 0x1c3220
void _markOutput_0x1c31f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_markOutput_0x1c31f8");
#endif

    ctx->pc = 0x1c31f8u;

    // 0x1c31f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1c31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c31fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c31fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3200: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3200u;
    {
        const bool branch_taken_0x1c3200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3200u;
        // 0x1c3204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3200) {
            ctx->pc = 0x1C3218u;
            goto label_1c3218;
        }
    }
    ctx->pc = 0x1C3208u;
    // 0x1c3208: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x1c3208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x1c320c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1c320cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1c3210: 0xac8200ac  sw          $v0, 0xAC($a0)
    ctx->pc = 0x1c3210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 2));
    // 0x1c3214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3218:
    // 0x1c3218: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3218u;
        // 0x1c321c: 0xac820820  sw          $v0, 0x820($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3220u;
}
