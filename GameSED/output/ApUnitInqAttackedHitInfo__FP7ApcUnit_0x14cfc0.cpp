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

// Function: ApUnitInqAttackedHitInfo__FP7ApcUnit
// Address: 0x14cfc0 - 0x14cff0
void ApUnitInqAttackedHitInfo__FP7ApcUnit_0x14cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitInqAttackedHitInfo__FP7ApcUnit_0x14cfc0");
#endif

    ctx->pc = 0x14cfc0u;

    // 0x14cfc0: 0x8c840230  lw          $a0, 0x230($a0)
    ctx->pc = 0x14cfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x14cfc4: 0x18800008  blez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14CFC4u;
    {
        const bool branch_taken_0x14cfc4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x14cfc4) {
            ctx->pc = 0x14CFE8u;
            goto label_14cfe8;
        }
    }
    ctx->pc = 0x14CFCCu;
    // 0x14cfcc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x14cfccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14cfd0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x14cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14cfd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CFD4u;
    {
        const bool branch_taken_0x14cfd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14cfd4) {
            ctx->pc = 0x14CFE8u;
            goto label_14cfe8;
        }
    }
    ctx->pc = 0x14CFDCu;
    // 0x14cfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x14CFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFDCu;
        // 0x14cfe0: 0x8c820160  lw          $v0, 0x160($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CFE4u;
    // 0x14cfe4: 0x0  nop
    ctx->pc = 0x14cfe4u;
    // NOP
label_14cfe8:
    // 0x14cfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x14CFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFE8u;
        // 0x14cfec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CFF0u;
}
