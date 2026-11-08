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

// Function: _isVColorEnable__8WcObject
// Address: 0x1dfef8 - 0x1dff14
void _isVColorEnable__8WcObject_0x1dfef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_isVColorEnable__8WcObject_0x1dfef8");
#endif

    ctx->pc = 0x1dfef8u;

    // 0x1dfef8: 0x8c8301ac  lw          $v1, 0x1AC($a0)
    ctx->pc = 0x1dfef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x1dfefc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFEFCu;
    {
        const bool branch_taken_0x1dfefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEFCu;
        // 0x1dff00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfefc) {
            ctx->pc = 0x1DFF0Cu;
            goto label_1dff0c;
        }
    }
    ctx->pc = 0x1DFF04u;
    // 0x1dff04: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dff08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dff08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1dff0c:
    // 0x1dff0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFF14u;
}
