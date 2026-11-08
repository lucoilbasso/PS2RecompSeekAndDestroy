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

// Function: WImageTransferToFBufferProc__FP7WcImage
// Address: 0x17def8 - 0x17e080
void WImageTransferToFBufferProc__FP7WcImage_0x17def8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WImageTransferToFBufferProc__FP7WcImage_0x17def8");
#endif

    switch (ctx->pc) {
        case 0x17df34u: goto label_17df34;
        case 0x17df58u: goto label_17df58;
        case 0x17df70u: goto label_17df70;
        case 0x17dfa8u: goto label_17dfa8;
        case 0x17dfc8u: goto label_17dfc8;
        case 0x17dfecu: goto label_17dfec;
        case 0x17e00cu: goto label_17e00c;
        case 0x17e03cu: goto label_17e03c;
        case 0x17e050u: goto label_17e050;
        default: break;
    }

    ctx->pc = 0x17def8u;

    // 0x17def8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17def8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17defc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17defcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17df00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17df00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df04: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17df08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17df08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17df10: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17df10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17df14: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x17df14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x17df18: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x17df18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x17df1c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x17df1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x17df20: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x17df20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x17df24: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x17df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x17df28: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x17df28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x17df2c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17DF2Cu;
    SET_GPR_U32(ctx, 31, 0x17DF34u);
    ctx->pc = 0x17DF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF2Cu;
    // 0x17df30: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17DF2Cu, 0x17DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF34u;
label_17df34:
    // 0x17df34: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x17df34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17df38: 0x58600032  blezl       $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x17DF38u;
    {
        const bool branch_taken_0x17df38 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x17df38) {
            ctx->pc = 0x17DF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DF38u;
            // 0x17df3c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E004u;
            goto label_17e004;
        }
    }
    ctx->pc = 0x17DF40u;
    // 0x17df40: 0x3c1e0025  lui         $fp, 0x25
    ctx->pc = 0x17df40u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)37 << 16));
    // 0x17df44: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x17df44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17df48: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x17df48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17df4c: 0x2415ffb0  addiu       $s5, $zero, -0x50
    ctx->pc = 0x17df4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967216));
    // 0x17df50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17df50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df54: 0x0  nop
    ctx->pc = 0x17df54u;
    // NOP
label_17df58:
    // 0x17df58: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x17df58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17df5c: 0x27c47c78  addiu       $a0, $fp, 0x7C78
    ctx->pc = 0x17df5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 31864));
    // 0x17df60: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x17df60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17df64: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x17df64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x17df68: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x17DF68u;
    SET_GPR_U32(ctx, 31, 0x17DF70u);
    ctx->pc = 0x17DF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF68u;
    // 0x17df6c: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x17DF68u, 0x17DF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF70u;
label_17df70:
    // 0x17df70: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x17df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x17df74: 0x14570014  bne         $v0, $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x17DF74u;
    {
        const bool branch_taken_0x17df74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x17DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF74u;
        // 0x17df78: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df74) {
            ctx->pc = 0x17DFC8u;
            goto label_17dfc8;
        }
    }
    ctx->pc = 0x17DF7Cu;
    // 0x17df7c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x17df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17df80: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DF80u;
    {
        const bool branch_taken_0x17df80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF80u;
        // 0x17df84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df80) {
            ctx->pc = 0x17DFA8u;
            goto label_17dfa8;
        }
    }
    ctx->pc = 0x17DF88u;
    // 0x17df88: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x17df88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17df8c: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x17df8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x17df90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x17df90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df94: 0xa7a30004  sh          $v1, 0x4($sp)
    ctx->pc = 0x17df94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x17df98: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x17df98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x17df9c: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x17df9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dfa0: 0xc05dc0a  jal         func_177028
    ctx->pc = 0x17DFA0u;
    SET_GPR_U32(ctx, 31, 0x17DFA8u);
    ctx->pc = 0x17DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFA0u;
    // 0x17dfa4: 0xa7a00002  sh          $zero, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177028u, 0x17DFA0u, 0x17DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFA8u;
label_17dfa8:
    // 0x17dfa8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x17dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17dfac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DFACu;
    {
        const bool branch_taken_0x17dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dfac) {
            ctx->pc = 0x17DFC8u;
            goto label_17dfc8;
        }
    }
    ctx->pc = 0x17DFB4u;
    // 0x17dfb4: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x17dfb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17dfb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DFB8u;
    {
        const bool branch_taken_0x17dfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dfb8) {
            ctx->pc = 0x17DFC8u;
            goto label_17dfc8;
        }
    }
    ctx->pc = 0x17DFC0u;
    // 0x17dfc0: 0xc05f6f6  jal         func_17DBD8
    ctx->pc = 0x17DFC0u;
    SET_GPR_U32(ctx, 31, 0x17DFC8u);
    ctx->pc = 0x17DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFC0u;
    // 0x17dfc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DBD8u, 0x17DFC0u, 0x17DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFC8u;
label_17dfc8:
    // 0x17dfc8: 0x5a600009  blezl       $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DFC8u;
    {
        const bool branch_taken_0x17dfc8 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x17dfc8) {
            ctx->pc = 0x17DFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DFC8u;
            // 0x17dfcc: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DFF0u;
            goto label_17dff0;
        }
    }
    ctx->pc = 0x17DFD0u;
    // 0x17dfd0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x17dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17dfd4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x17dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x17dfd8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x17dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17dfdc: 0x10760003  beq         $v1, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DFDCu;
    {
        const bool branch_taken_0x17dfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x17DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFDCu;
        // 0x17dfe0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfdc) {
            ctx->pc = 0x17DFECu;
            goto label_17dfec;
        }
    }
    ctx->pc = 0x17DFE4u;
    // 0x17dfe4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17DFE4u;
    SET_GPR_U32(ctx, 31, 0x17DFECu);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17DFE4u, 0x17DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFECu;
label_17dfec:
    // 0x17dfec: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x17dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_17dff0:
    // 0x17dff0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17dff0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17dff4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x17dff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17dff8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x17DFF8u;
    {
        const bool branch_taken_0x17dff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFF8u;
        // 0x17dffc: 0x26b50050  addiu       $s5, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dff8) {
            ctx->pc = 0x17DF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17df58;
        }
    }
    ctx->pc = 0x17E000u;
    // 0x17e000: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x17e000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_17e004:
    // 0x17e004: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17E004u;
    SET_GPR_U32(ctx, 31, 0x17E00Cu);
    ctx->pc = 0x17E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E004u;
    // 0x17e008: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17E004u, 0x17E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E00Cu;
label_17e00c:
    // 0x17e00c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x17e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17e010: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x17e010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x17e014: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17e014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17e018: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17e018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17e01c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e020: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17e020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17e024: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17e028: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x17e028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17e02c: 0x50900004  beql        $a0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E02Cu;
    {
        const bool branch_taken_0x17e02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x17e02c) {
            ctx->pc = 0x17E030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E02Cu;
            // 0x17e030: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E040u;
            goto label_17e040;
        }
    }
    ctx->pc = 0x17E034u;
    // 0x17e034: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17E034u;
    SET_GPR_U32(ctx, 31, 0x17E03Cu);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17E034u, 0x17E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E03Cu;
label_17e03c:
    // 0x17e03c: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x17e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_17e040:
    // 0x17e040: 0x50900004  beql        $a0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E040u;
    {
        const bool branch_taken_0x17e040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x17e040) {
            ctx->pc = 0x17E044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E040u;
            // 0x17e044: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E054u;
            goto label_17e054;
        }
    }
    ctx->pc = 0x17E048u;
    // 0x17e048: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17E048u;
    SET_GPR_U32(ctx, 31, 0x17E050u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17E048u, 0x17E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E050u;
label_17e050:
    // 0x17e050: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17e050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17e054:
    // 0x17e054: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17e054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e058: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17e058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e05c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17e05cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17e060: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x17e060u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e064: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x17e064u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17e068: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x17e068u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e06c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x17e06cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17e070: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x17e070u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e074: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x17e074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17e078: 0x3e00008  jr          $ra
    ctx->pc = 0x17E078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E078u;
        // 0x17e07c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E080u;
}
