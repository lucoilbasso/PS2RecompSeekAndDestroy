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

// Function: SetDataSpecialList__9ApcPtcSplPUiPP10WImageInfoiP16ST_EffectSpecialUi
// Address: 0x12bec0 - 0x12bf70
void SetDataSpecialList__9ApcPtcSplPUiPP10WImageInfoiP16ST_EffectSpecialUi_0x12bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDataSpecialList__9ApcPtcSplPUiPP10WImageInfoiP16ST_EffectSpecialUi_0x12bec0");
#endif

    switch (ctx->pc) {
        case 0x12bf18u: goto label_12bf18;
        case 0x12bf24u: goto label_12bf24;
        case 0x12bf40u: goto label_12bf40;
        default: break;
    }

    ctx->pc = 0x12bec0u;

    // 0x12bec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12bec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12bec4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12bec8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x12bec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12becc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12beccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bed0: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x12bed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bed4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12bed8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12bed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bedc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12bedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12bee0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12bee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bee4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12bee8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12bee8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12beec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12beecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12bef0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12bef0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bef4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BEF4u;
    {
        const bool branch_taken_0x12bef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEF4u;
        // 0x12bef8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bef4) {
            ctx->pc = 0x12BF04u;
            goto label_12bf04;
        }
    }
    ctx->pc = 0x12BEFCu;
    // 0x12befc: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BEFCu;
    {
        const bool branch_taken_0x12befc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12befc) {
            ctx->pc = 0x12BF10u;
            goto label_12bf10;
        }
    }
    ctx->pc = 0x12BF04u;
label_12bf04:
    // 0x12bf04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12BF04u;
    {
        const bool branch_taken_0x12bf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF04u;
        // 0x12bf08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf04) {
            ctx->pc = 0x12BF4Cu;
            goto label_12bf4c;
        }
    }
    ctx->pc = 0x12BF0Cu;
    // 0x12bf0c: 0x0  nop
    ctx->pc = 0x12bf0cu;
    // NOP
label_12bf10:
    // 0x12bf10: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x12BF10u;
    {
        const bool branch_taken_0x12bf10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF10u;
        // 0x12bf14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf10) {
            ctx->pc = 0x12BF4Cu;
            goto label_12bf4c;
        }
    }
    ctx->pc = 0x12BF18u;
label_12bf18:
    // 0x12bf18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12bf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf1c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x12BF1Cu;
    SET_GPR_U32(ctx, 31, 0x12BF24u);
    ctx->pc = 0x12BF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF1Cu;
    // 0x12bf20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x12BF1Cu, 0x12BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF24u;
label_12bf24:
    // 0x12bf24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12bf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12bf2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12bf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf30: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x12bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x12bf34: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x12bf34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf38: 0xc048d2c  jal         func_1234B0
    ctx->pc = 0x12BF38u;
    SET_GPR_U32(ctx, 31, 0x12BF40u);
    ctx->pc = 0x12BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF38u;
    // 0x12bf3c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1234B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1234B0u, 0x12BF38u, 0x12BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF40u;
label_12bf40:
    // 0x12bf40: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x12BF40u;
    {
        const bool branch_taken_0x12bf40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF40u;
        // 0x12bf44: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf40) {
            ctx->pc = 0x12BF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12bf18;
        }
    }
    ctx->pc = 0x12BF48u;
    // 0x12bf48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12bf4c:
    // 0x12bf4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bf4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bf50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bf50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bf54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12bf54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bf58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12bf58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bf5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12bf5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bf60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12bf60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12bf64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12bf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12bf68: 0x3e00008  jr          $ra
    ctx->pc = 0x12BF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF68u;
        // 0x12bf6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BF70u;
}
