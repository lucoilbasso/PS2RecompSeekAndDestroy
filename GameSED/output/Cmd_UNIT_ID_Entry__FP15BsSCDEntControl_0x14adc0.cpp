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

// Function: Cmd_UNIT_ID_Entry__FP15BsSCDEntControl
// Address: 0x14adc0 - 0x14aea0
void Cmd_UNIT_ID_Entry__FP15BsSCDEntControl_0x14adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_UNIT_ID_Entry__FP15BsSCDEntControl_0x14adc0");
#endif

    switch (ctx->pc) {
        case 0x14ae0cu: goto label_14ae0c;
        case 0x14ae14u: goto label_14ae14;
        case 0x14ae50u: goto label_14ae50;
        case 0x14ae70u: goto label_14ae70;
        default: break;
    }

    ctx->pc = 0x14adc0u;

    // 0x14adc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14adc4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14adc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14adcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14adccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14add0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14add0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14add4: 0x24050118  addiu       $a1, $zero, 0x118
    ctx->pc = 0x14add4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x14add8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14add8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14addc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14addcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14ade0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x14ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x14ade4: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x14ade4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14ade8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14adec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14adecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adf0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14adf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14adf4: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14ADF4u;
    {
        const bool branch_taken_0x14adf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x14ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ADF4u;
        // 0x14adf8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14adf4) {
            ctx->pc = 0x14AE0Cu;
            goto label_14ae0c;
        }
    }
    ctx->pc = 0x14ADFCu;
    // 0x14adfc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14ae00: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x14ae00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x14ae04: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14AE04u;
    SET_GPR_U32(ctx, 31, 0x14AE0Cu);
    ctx->pc = 0x14AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE04u;
    // 0x14ae08: 0x24a56bf0  addiu       $a1, $a1, 0x6BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14AE04u, 0x14AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE0Cu;
label_14ae0c:
    // 0x14ae0c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AE0Cu;
    SET_GPR_U32(ctx, 31, 0x14AE14u);
    ctx->pc = 0x14AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE0Cu;
    // 0x14ae10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AE0Cu, 0x14AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE14u;
label_14ae14:
    // 0x14ae14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ae18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14ae18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae1c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14ae20: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14AE20u;
    {
        const bool branch_taken_0x14ae20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14ae20) {
            ctx->pc = 0x14AE40u;
            goto label_14ae40;
        }
    }
    ctx->pc = 0x14AE28u;
    // 0x14ae28: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x14ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x14ae2c: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14ae2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14ae30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14ae34: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14AE34u;
    {
        const bool branch_taken_0x14ae34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE34u;
        // 0x14ae38: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae34) {
            ctx->pc = 0x14AE88u;
            goto label_14ae88;
        }
    }
    ctx->pc = 0x14AE3Cu;
    // 0x14ae3c: 0x0  nop
    ctx->pc = 0x14ae3cu;
    // NOP
label_14ae40:
    // 0x14ae40: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14AE40u;
    {
        const bool branch_taken_0x14ae40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ae40) {
            ctx->pc = 0x14AE60u;
            goto label_14ae60;
        }
    }
    ctx->pc = 0x14AE48u;
    // 0x14ae48: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x14AE48u;
    SET_GPR_U32(ctx, 31, 0x14AE50u);
    ctx->pc = 0x14AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE48u;
    // 0x14ae4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x14AE48u, 0x14AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE50u;
label_14ae50:
    // 0x14ae50: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x14ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x14ae54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14AE54u;
    {
        const bool branch_taken_0x14ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE54u;
        // 0x14ae58: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae54) {
            ctx->pc = 0x14AE88u;
            goto label_14ae88;
        }
    }
    ctx->pc = 0x14AE5Cu;
    // 0x14ae5c: 0x0  nop
    ctx->pc = 0x14ae5cu;
    // NOP
label_14ae60:
    // 0x14ae60: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x14AE60u;
    {
        const bool branch_taken_0x14ae60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x14AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE60u;
        // 0x14ae64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ae60) {
            ctx->pc = 0x14AE8Cu;
            goto label_14ae8c;
        }
    }
    ctx->pc = 0x14AE68u;
    // 0x14ae68: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14AE68u;
    SET_GPR_U32(ctx, 31, 0x14AE70u);
    ctx->pc = 0x14AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AE68u;
    // 0x14ae6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14AE68u, 0x14AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE70u;
label_14ae70:
    // 0x14ae70: 0x2403f0ff  addiu       $v1, $zero, -0xF01
    ctx->pc = 0x14ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963455));
    // 0x14ae74: 0x8e44017c  lw          $a0, 0x17C($s2)
    ctx->pc = 0x14ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x14ae78: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x14ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x14ae7c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x14ae7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14ae80: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x14ae80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x14ae84: 0xae44017c  sw          $a0, 0x17C($s2)
    ctx->pc = 0x14ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 4));
label_14ae88:
    // 0x14ae88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ae88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14ae8c:
    // 0x14ae8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ae8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ae90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14ae90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ae94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14ae94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ae98: 0x3e00008  jr          $ra
    ctx->pc = 0x14AE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AE98u;
        // 0x14ae9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AEA0u;
}
