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

// Function: GetLastFloorAttr__8ApcRsc3D
// Address: 0x1d8df8 - 0x1d8e18
void GetLastFloorAttr__8ApcRsc3D_0x1d8df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLastFloorAttr__8ApcRsc3D_0x1d8df8");
#endif

    ctx->pc = 0x1d8df8u;

    // 0x1d8df8: 0x8c830328  lw          $v1, 0x328($a0)
    ctx->pc = 0x1d8df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x1d8dfc: 0x9062402c  lbu         $v0, 0x402C($v1)
    ctx->pc = 0x1d8dfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16428)));
    // 0x1d8e00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8E00u;
    {
        const bool branch_taken_0x1d8e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e00) {
            ctx->pc = 0x1D8E10u;
            goto label_1d8e10;
        }
    }
    ctx->pc = 0x1D8E08u;
    // 0x1d8e08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E08u;
        // 0x1d8e0c: 0x8c624018  lw          $v0, 0x4018($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16408)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8E10u;
label_1d8e10:
    // 0x1d8e10: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E10u;
        // 0x1d8e14: 0x8c62402c  lw          $v0, 0x402C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16428)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8E18u;
}
