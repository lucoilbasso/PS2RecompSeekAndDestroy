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

// Function: WTxPanelCodeConvertsFontMan__FP9WcTxPanelPUsi
// Address: 0x18edc0 - 0x18ee68
void WTxPanelCodeConvertsFontMan__FP9WcTxPanelPUsi_0x18edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WTxPanelCodeConvertsFontMan__FP9WcTxPanelPUsi_0x18edc0");
#endif

    switch (ctx->pc) {
        case 0x18ee14u: goto label_18ee14;
        case 0x18ee44u: goto label_18ee44;
        default: break;
    }

    ctx->pc = 0x18edc0u;

    // 0x18edc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18edc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18edc4: 0x8f878d10  lw          $a3, -0x72F0($gp)
    ctx->pc = 0x18edc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18edc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18edc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18edcc: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x18edccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x18edd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18edd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18edd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18edd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18edd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18edd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18eddc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18eddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ede0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18ede0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18ede4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18ede8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x18ede8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x18edec: 0x8e630238  lw          $v1, 0x238($s3)
    ctx->pc = 0x18edecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 568)));
    // 0x18edf0: 0x8e620214  lw          $v0, 0x214($s3)
    ctx->pc = 0x18edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
    // 0x18edf4: 0x8c710020  lw          $s1, 0x20($v1)
    ctx->pc = 0x18edf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18edf8: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x18edf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18edfc: 0x8ce40044  lw          $a0, 0x44($a3)
    ctx->pc = 0x18edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x18ee00: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x18ee00u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x18ee04: 0x8e700220  lw          $s0, 0x220($s3)
    ctx->pc = 0x18ee04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
    // 0x18ee08: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x18ee08u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18ee0c: 0xc05f262  jal         func_17C988
    ctx->pc = 0x18EE0Cu;
    SET_GPR_U32(ctx, 31, 0x18EE14u);
    ctx->pc = 0x18EE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE0Cu;
    // 0x18ee10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C988u, 0x18EE0Cu, 0x18EE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EE14u;
label_18ee14:
    // 0x18ee14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18ee14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee18: 0x8e640250  lw          $a0, 0x250($s3)
    ctx->pc = 0x18ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    // 0x18ee1c: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x18ee1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x18ee20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ee24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18ee24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee28: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EE28u;
    {
        const bool branch_taken_0x18ee28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE28u;
        // 0x18ee2c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee28) {
            ctx->pc = 0x18EE48u;
            goto label_18ee48;
        }
    }
    ctx->pc = 0x18EE30u;
    // 0x18ee30: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18ee34: 0x8e700224  lw          $s0, 0x224($s3)
    ctx->pc = 0x18ee34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
    // 0x18ee38: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x18ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x18ee3c: 0xc05f27c  jal         func_17C9F0
    ctx->pc = 0x18EE3Cu;
    SET_GPR_U32(ctx, 31, 0x18EE44u);
    ctx->pc = 0x18EE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE3Cu;
    // 0x18ee40: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C9F0u, 0x18EE3Cu, 0x18EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EE44u;
label_18ee44:
    // 0x18ee44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_18ee48:
    // 0x18ee48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18ee48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ee4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18ee4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18ee50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18ee50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ee54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18ee54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ee58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18ee58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ee5c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x18ee5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18ee60: 0x3e00008  jr          $ra
    ctx->pc = 0x18EE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE60u;
        // 0x18ee64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EE68u;
}
