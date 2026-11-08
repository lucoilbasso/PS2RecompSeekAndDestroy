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

// Function: BUtilitySmooth__FPiii
// Address: 0x19ee20 - 0x19ee50
void BUtilitySmooth__FPiii_0x19ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilitySmooth__FPiii_0x19ee20");
#endif

    ctx->pc = 0x19ee20u;

    // 0x19ee20: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x19ee20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ee24: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x19ee24u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x19ee28: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x19ee28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19ee2c: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19ee2cu;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19ee30: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19ee30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19ee34: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EE34u;
    {
        const bool branch_taken_0x19ee34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE34u;
        // 0x19ee38: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee34) {
            ctx->pc = 0x19EE40u;
            goto label_19ee40;
        }
    }
    ctx->pc = 0x19EE3Cu;
    // 0x19ee3c: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19ee3cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_19ee40:
    // 0x19ee40: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x19ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x19ee44: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19ee44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee48: 0x3e00008  jr          $ra
    ctx->pc = 0x19EE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE48u;
        // 0x19ee4c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EE50u;
}
