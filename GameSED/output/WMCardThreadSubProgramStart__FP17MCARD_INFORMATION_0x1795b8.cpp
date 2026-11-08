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

// Function: WMCardThreadSubProgramStart__FP17MCARD_INFORMATION
// Address: 0x1795b8 - 0x1795e8
void WMCardThreadSubProgramStart__FP17MCARD_INFORMATION_0x1795b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardThreadSubProgramStart__FP17MCARD_INFORMATION_0x1795b8");
#endif

    ctx->pc = 0x1795b8u;

    // 0x1795b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1795b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1795bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1795bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1795c0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1795C0u;
    {
        const bool branch_taken_0x1795c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1795C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795C0u;
        // 0x1795c4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795c0) {
            ctx->pc = 0x1795E0u;
            goto label_1795e0;
        }
    }
    ctx->pc = 0x1795C8u;
    // 0x1795c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1795c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1795cc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1795ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1795d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1795d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1795d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1795D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1795D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1795DCu;
    // 0x1795dc: 0x0  nop
    ctx->pc = 0x1795dcu;
    // NOP
label_1795e0:
    // 0x1795e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1795E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1795E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795E0u;
        // 0x1795e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1795E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1795E8u;
}
