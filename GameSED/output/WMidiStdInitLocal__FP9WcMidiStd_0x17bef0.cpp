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

// Function: WMidiStdInitLocal__FP9WcMidiStd
// Address: 0x17bef0 - 0x17bf8c
void WMidiStdInitLocal__FP9WcMidiStd_0x17bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMidiStdInitLocal__FP9WcMidiStd_0x17bef0");
#endif

    switch (ctx->pc) {
        case 0x17bf20u: goto label_17bf20;
        case 0x17bf2cu: goto label_17bf2c;
        case 0x17bf50u: goto label_17bf50;
        default: break;
    }

    ctx->pc = 0x17bef0u;

    // 0x17bef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bef4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17bef8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17bef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17befc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17befcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bf04: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x17bf04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17bf08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17bf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17bf0c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17bf0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17bf10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17bf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17bf14: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x17bf14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17bf18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17bf1c: 0xac520038  sw          $s2, 0x38($v0)
    ctx->pc = 0x17bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 18));
label_17bf20:
    // 0x17bf20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf24: 0xc05e9ca  jal         func_17A728
    ctx->pc = 0x17BF24u;
    SET_GPR_U32(ctx, 31, 0x17BF2Cu);
    ctx->pc = 0x17BF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF24u;
    // 0x17bf28: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A728u, 0x17BF24u, 0x17BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF2Cu;
label_17bf2c:
    // 0x17bf2c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x17bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x17bf30: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x17bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x17bf34: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x17bf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
    // 0x17bf38: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17BF38u;
    {
        const bool branch_taken_0x17bf38 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF38u;
        // 0x17bf3c: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf38) {
            ctx->pc = 0x17BF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bf20;
        }
    }
    ctx->pc = 0x17BF40u;
    // 0x17bf40: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17bf44: 0x26440254  addiu       $a0, $s2, 0x254
    ctx->pc = 0x17bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 596));
    // 0x17bf48: 0x2445e9b0  addiu       $a1, $v0, -0x1650
    ctx->pc = 0x17bf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961584));
    // 0x17bf4c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x17bf4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_17bf50:
    // 0x17bf50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17bf54: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17bf54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17bf58: 0xac82fffc  sw          $v0, -0x4($a0)
    ctx->pc = 0x17bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 2));
    // 0x17bf5c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x17bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17bf60: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x17bf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x17bf64: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x17bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x17bf68: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17BF68u;
    {
        const bool branch_taken_0x17bf68 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF68u;
        // 0x17bf6c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf68) {
            ctx->pc = 0x17BF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bf50;
        }
    }
    ctx->pc = 0x17BF70u;
    // 0x17bf70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17bf70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bf74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17bf74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bf78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17bf78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bf7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17bf7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bf80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17bf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bf84: 0x3e00008  jr          $ra
    ctx->pc = 0x17BF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF84u;
        // 0x17bf88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BF8Cu;
}
