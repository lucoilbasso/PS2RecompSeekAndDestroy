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

// Function: BUtilitySmooth__FPsii
// Address: 0x19ee50 - 0x19ee88
void BUtilitySmooth__FPsii_0x19ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilitySmooth__FPsii_0x19ee50");
#endif

    ctx->pc = 0x19ee50u;

    // 0x19ee50: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x19ee50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ee54: 0x94870000  lhu         $a3, 0x0($a0)
    ctx->pc = 0x19ee54u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ee58: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x19ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19ee5c: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x19ee5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19ee60: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19ee60u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19ee64: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19ee64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x19ee68: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EE68u;
    {
        const bool branch_taken_0x19ee68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE68u;
        // 0x19ee6c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee68) {
            ctx->pc = 0x19EE74u;
            goto label_19ee74;
        }
    }
    ctx->pc = 0x19EE70u;
    // 0x19ee70: 0x43180a  movz        $v1, $v0, $v1
    ctx->pc = 0x19ee70u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_19ee74:
    // 0x19ee74: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x19ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x19ee78: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x19ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x19ee7c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x19ee7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x19ee80: 0x3e00008  jr          $ra
    ctx->pc = 0x19EE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE80u;
        // 0x19ee84: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EE88u;
}
