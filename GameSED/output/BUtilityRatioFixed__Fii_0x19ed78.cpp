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

// Function: BUtilityRatioFixed__Fii
// Address: 0x19ed78 - 0x19ed9c
void BUtilityRatioFixed__Fii_0x19ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityRatioFixed__Fii_0x19ed78");
#endif

    ctx->pc = 0x19ed78u;

    // 0x19ed78: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x19ed78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19ed7c: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19ed7cu;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19ed80: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19ed80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19ed84: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19ED84u;
    {
        const bool branch_taken_0x19ed84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed84) {
            ctx->pc = 0x19ED94u;
            goto label_19ed94;
        }
    }
    ctx->pc = 0x19ED8Cu;
    // 0x19ed8c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x19ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ed90: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19ed90u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_19ed94:
    // 0x19ed94: 0x3e00008  jr          $ra
    ctx->pc = 0x19ED94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED94u;
        // 0x19ed98: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ED94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ED9Cu;
}
