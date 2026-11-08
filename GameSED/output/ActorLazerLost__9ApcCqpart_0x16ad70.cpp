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

// Function: ActorLazerLost__9ApcCqpart
// Address: 0x16ad70 - 0x16add4
void ActorLazerLost__9ApcCqpart_0x16ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ActorLazerLost__9ApcCqpart_0x16ad70");
#endif

    switch (ctx->pc) {
        case 0x16adb4u: goto label_16adb4;
        default: break;
    }

    ctx->pc = 0x16ad70u;

    // 0x16ad70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ad74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ad78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ad78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16ad7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16ad80: 0xae001268  sw          $zero, 0x1268($s0)
    ctx->pc = 0x16ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4712), GPR_U32(ctx, 0));
    // 0x16ad84: 0x8e031234  lw          $v1, 0x1234($s0)
    ctx->pc = 0x16ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
    // 0x16ad88: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16AD88u;
    {
        const bool branch_taken_0x16ad88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad88) {
            ctx->pc = 0x16AD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AD88u;
            // 0x16ad8c: 0x8e021258  lw          $v0, 0x1258($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ADA4u;
            goto label_16ada4;
        }
    }
    ctx->pc = 0x16AD90u;
    // 0x16ad90: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16ad94: 0xae001234  sw          $zero, 0x1234($s0)
    ctx->pc = 0x16ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4660), GPR_U32(ctx, 0));
    // 0x16ad98: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x16ad98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x16ad9c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x16ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x16ada0: 0x8e021258  lw          $v0, 0x1258($s0)
    ctx->pc = 0x16ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
label_16ada4:
    // 0x16ada4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16ADA4u;
    {
        const bool branch_taken_0x16ada4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADA4u;
        // 0x16ada8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ada4) {
            ctx->pc = 0x16ADC4u;
            goto label_16adc4;
        }
    }
    ctx->pc = 0x16ADACu;
    // 0x16adac: 0xc04c6c6  jal         func_131B18
    ctx->pc = 0x16ADACu;
    SET_GPR_U32(ctx, 31, 0x16ADB4u);
    ctx->pc = 0x131B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B18u, 0x16ADACu, 0x16ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADB4u;
label_16adb4:
    // 0x16adb4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x16adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16adb8: 0x8e021258  lw          $v0, 0x1258($s0)
    ctx->pc = 0x16adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4696)));
    // 0x16adbc: 0xae001258  sw          $zero, 0x1258($s0)
    ctx->pc = 0x16adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4696), GPR_U32(ctx, 0));
    // 0x16adc0: 0xac430134  sw          $v1, 0x134($v0)
    ctx->pc = 0x16adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 3));
label_16adc4:
    // 0x16adc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16adc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16adc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16adc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16adcc: 0x3e00008  jr          $ra
    ctx->pc = 0x16ADCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADCCu;
        // 0x16add0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ADCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ADD4u;
}
