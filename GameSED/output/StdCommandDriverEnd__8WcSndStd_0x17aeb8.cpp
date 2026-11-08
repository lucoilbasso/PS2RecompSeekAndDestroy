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

// Function: StdCommandDriverEnd__8WcSndStd
// Address: 0x17aeb8 - 0x17af34
void StdCommandDriverEnd__8WcSndStd_0x17aeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StdCommandDriverEnd__8WcSndStd_0x17aeb8");
#endif

    switch (ctx->pc) {
        case 0x17aed8u: goto label_17aed8;
        case 0x17aeecu: goto label_17aeec;
        default: break;
    }

    ctx->pc = 0x17aeb8u;

    // 0x17aeb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17aeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17aebc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17aebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aec0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17aec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17aec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17aec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17aecc: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x17aeccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x17aed0: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x17aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x17aed4: 0x0  nop
    ctx->pc = 0x17aed4u;
    // NOP
label_17aed8:
    // 0x17aed8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17aedc: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AEDCu;
    {
        const bool branch_taken_0x17aedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x17AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEDCu;
        // 0x17aee0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aedc) {
            ctx->pc = 0x17AEF8u;
            goto label_17aef8;
        }
    }
    ctx->pc = 0x17AEE4u;
    // 0x17aee4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17AEE4u;
    SET_GPR_U32(ctx, 31, 0x17AEECu);
    ctx->pc = 0x17AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEE4u;
    // 0x17aee8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17AEE4u, 0x17AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AEECu;
label_17aeec:
    // 0x17aeec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17AEECu;
    {
        const bool branch_taken_0x17aeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEECu;
        // 0x17aef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aeec) {
            ctx->pc = 0x17AF0Cu;
            goto label_17af0c;
        }
    }
    ctx->pc = 0x17AEF4u;
    // 0x17aef4: 0x0  nop
    ctx->pc = 0x17aef4u;
    // NOP
label_17aef8:
    // 0x17aef8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17aefc: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x17aefcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17af00: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17AF00u;
    {
        const bool branch_taken_0x17af00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF00u;
        // 0x17af04: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af00) {
            ctx->pc = 0x17AED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17aed8;
        }
    }
    ctx->pc = 0x17AF08u;
    // 0x17af08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17af08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17af0c:
    // 0x17af0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17af0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17af10: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x17af10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17af14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17af14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17af18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17af18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17af1c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x17af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x17af20: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x17af20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x17af24: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x17af24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x17af28: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17af28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x17af2c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF2Cu;
        // 0x17af30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AF34u;
}
