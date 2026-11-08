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

// Function: BMemPMgrSearchBank__FPv
// Address: 0x1a0028 - 0x1a0084
void BMemPMgrSearchBank__FPv_0x1a0028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrSearchBank__FPv_0x1a0028");
#endif

    switch (ctx->pc) {
        case 0x1a0038u: goto label_1a0038;
        default: break;
    }

    ctx->pc = 0x1a0028u;

    // 0x1a0028: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a0028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a002c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a002cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0030: 0x2449f640  addiu       $t1, $v0, -0x9C0
    ctx->pc = 0x1a0030u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x1a0034: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x1a0034u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x23F640u));
label_1a0038:
    // 0x1a0038: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1a0038u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1a003c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A003Cu;
    {
        const bool branch_taken_0x1a003c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A003Cu;
        // 0x1a0040: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a003c) {
            ctx->pc = 0x1A0068u;
            goto label_1a0068;
        }
    }
    ctx->pc = 0x1A0044u;
    // 0x1a0044: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1a0044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a0048: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x1a0048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1a004c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A004Cu;
    {
        const bool branch_taken_0x1a004c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A004Cu;
        // 0x1a0050: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a004c) {
            ctx->pc = 0x1A0060u;
            goto label_1a0060;
        }
    }
    ctx->pc = 0x1A0054u;
    // 0x1a0054: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a0054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a0058: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1a0058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a005c: 0x83382b  sltu        $a3, $a0, $v1
    ctx->pc = 0x1a005cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a0060:
    // 0x1a0060: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0060u;
    {
        const bool branch_taken_0x1a0060 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0060) {
            ctx->pc = 0x1A007Cu;
            goto label_1a007c;
        }
    }
    ctx->pc = 0x1A0068u;
label_1a0068:
    // 0x1a0068: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a0068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a006c: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x1a006cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1a0070: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A0070u;
    {
        const bool branch_taken_0x1a0070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0070) {
            ctx->pc = 0x1A0074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0070u;
            // 0x1a0074: 0x8d250000  lw          $a1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0038;
        }
    }
    ctx->pc = 0x1A0078u;
    // 0x1a0078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a0078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a007c:
    // 0x1a007c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A007Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A007Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0084u;
}
