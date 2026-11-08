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

// Function: Cmd_CONSOLE_MAKE_Entry__FP15BsSCDEntControl
// Address: 0x10aac8 - 0x10b138
void Cmd_CONSOLE_MAKE_Entry__FP15BsSCDEntControl_0x10aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CONSOLE_MAKE_Entry__FP15BsSCDEntControl_0x10aac8");
#endif

    switch (ctx->pc) {
        case 0x10ab08u: goto label_10ab08;
        case 0x10ab14u: goto label_10ab14;
        case 0x10ab20u: goto label_10ab20;
        case 0x10ab30u: goto label_10ab30;
        case 0x10ab4cu: goto label_10ab4c;
        case 0x10ab58u: goto label_10ab58;
        case 0x10ab6cu: goto label_10ab6c;
        case 0x10ab78u: goto label_10ab78;
        case 0x10aba0u: goto label_10aba0;
        case 0x10abb0u: goto label_10abb0;
        case 0x10acf0u: goto label_10acf0;
        case 0x10ad5cu: goto label_10ad5c;
        case 0x10ad6cu: goto label_10ad6c;
        default: break;
    }

    ctx->pc = 0x10aac8u;

    // 0x10aac8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10aac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10aacc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x10aaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x10aad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10aad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aad4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x10aad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x10aad8: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x10aad8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aadc: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x10aadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x10aae0: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x10aae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x10aae4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x10aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x10aae8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x10aae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x10aaec: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x10aaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x10aaf0: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x10aaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x10aaf4: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x10aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x10aaf8: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x10aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x10aafc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10ab00: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10AB00u;
    SET_GPR_U32(ctx, 31, 0x10AB08u);
    ctx->pc = 0x10AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB00u;
    // 0x10ab04: 0x8c570044  lw          $s7, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10AB00u, 0x10AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB08u;
label_10ab08:
    // 0x10ab08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab0c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10AB0Cu;
    SET_GPR_U32(ctx, 31, 0x10AB14u);
    ctx->pc = 0x10AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB0Cu;
    // 0x10ab10: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10AB0Cu, 0x10AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB14u;
label_10ab14:
    // 0x10ab14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab18: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10AB18u;
    SET_GPR_U32(ctx, 31, 0x10AB20u);
    ctx->pc = 0x10AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB18u;
    // 0x10ab1c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10AB18u, 0x10AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB20u;
label_10ab20:
    // 0x10ab20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab24: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x10ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x10ab28: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10AB28u;
    SET_GPR_U32(ctx, 31, 0x10AB30u);
    ctx->pc = 0x10AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB28u;
    // 0x10ab2c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10AB28u, 0x10AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB30u;
label_10ab30:
    // 0x10ab30: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10ab34: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x10ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x10ab38: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x10ab38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x10ab3c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AB3Cu;
    {
        const bool branch_taken_0x10ab3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB3Cu;
        // 0x10ab40: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab3c) {
            ctx->pc = 0x10AB5Cu;
            goto label_10ab5c;
        }
    }
    ctx->pc = 0x10AB44u;
    // 0x10ab44: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10AB44u;
    SET_GPR_U32(ctx, 31, 0x10AB4Cu);
    ctx->pc = 0x10AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB44u;
    // 0x10ab48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10AB44u, 0x10AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB4Cu;
label_10ab4c:
    // 0x10ab4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab50: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10AB50u;
    SET_GPR_U32(ctx, 31, 0x10AB58u);
    ctx->pc = 0x10AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB50u;
    // 0x10ab54: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10AB50u, 0x10AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB58u;
label_10ab58:
    // 0x10ab58: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x10ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_10ab5c:
    // 0x10ab5c: 0x24040166  addiu       $a0, $zero, 0x166
    ctx->pc = 0x10ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10ab60: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x10ab60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x10ab64: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x10AB64u;
    SET_GPR_U32(ctx, 31, 0x10AB6Cu);
    ctx->pc = 0x10AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB64u;
    // 0x10ab68: 0x27b20050  addiu       $s2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10AB64u, 0x10AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB6Cu;
label_10ab6c:
    // 0x10ab6c: 0x240402a0  addiu       $a0, $zero, 0x2A0
    ctx->pc = 0x10ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x10ab70: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x10AB70u;
    SET_GPR_U32(ctx, 31, 0x10AB78u);
    ctx->pc = 0x10AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB70u;
    // 0x10ab74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10AB70u, 0x10AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB78u;
label_10ab78:
    // 0x10ab78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10ab78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ab7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab80: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10ab84: 0x24420320  addiu       $v0, $v0, 0x320
    ctx->pc = 0x10ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
    // 0x10ab88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10ab88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab8c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x10ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x10ab90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ab90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab94: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x10ab94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab98: 0xc063114  jal         func_18C450
    ctx->pc = 0x10AB98u;
    SET_GPR_U32(ctx, 31, 0x10ABA0u);
    ctx->pc = 0x10AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB98u;
    // 0x10ab9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C450u, 0x10AB98u, 0x10ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABA0u;
label_10aba0:
    // 0x10aba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10aba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aba8: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x10ABA8u;
    SET_GPR_U32(ctx, 31, 0x10ABB0u);
    ctx->pc = 0x10ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABA8u;
    // 0x10abac: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x10ABA8u, 0x10ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABB0u;
label_10abb0:
    // 0x10abb0: 0x26a3fff5  addiu       $v1, $s5, -0xB
    ctx->pc = 0x10abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967285));
    // 0x10abb4: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x10abb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x10abb8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x10ABB8u;
    {
        const bool branch_taken_0x10abb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABB8u;
        // 0x10abbc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abb8) {
            ctx->pc = 0x10ACE0u;
            goto label_10ace0;
        }
    }
    ctx->pc = 0x10ABC0u;
    // 0x10abc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10abc4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x10abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x10abc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10abcc: 0x8c633c00  lw          $v1, 0x3C00($v1)
    ctx->pc = 0x10abccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15360)));
    // 0x10abd0: 0x600008  jr          $v1
    ctx->pc = 0x10ABD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10ABD8u: goto label_10abd8;
            case 0x10ABF0u: goto label_10abf0;
            case 0x10AC08u: goto label_10ac08;
            case 0x10AC20u: goto label_10ac20;
            case 0x10AC38u: goto label_10ac38;
            case 0x10AC50u: goto label_10ac50;
            case 0x10AC68u: goto label_10ac68;
            case 0x10AC80u: goto label_10ac80;
            case 0x10AC98u: goto label_10ac98;
            case 0x10ACB0u: goto label_10acb0;
            case 0x10ACC8u: goto label_10acc8;
            case 0x10ACE0u: goto label_10ace0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ABD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10ABD8u;
label_10abd8:
    // 0x10abd8: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10abd8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10abdc: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x10abdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10abe0: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x10abe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10abe4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x10ABE4u;
    {
        const bool branch_taken_0x10abe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABE4u;
        // 0x10abe8: 0x36730014  ori         $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abe4) {
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10ABECu;
    // 0x10abec: 0x0  nop
    ctx->pc = 0x10abecu;
    // NOP
label_10abf0:
    // 0x10abf0: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10abf0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10abf4: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x10abf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10abf8: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x10abf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10abfc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x10ABFCu;
    {
        const bool branch_taken_0x10abfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABFCu;
        // 0x10ac00: 0x36730015  ori         $s3, $s3, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)21);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abfc) {
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10AC04u;
    // 0x10ac04: 0x0  nop
    ctx->pc = 0x10ac04u;
    // NOP
label_10ac08:
    // 0x10ac08: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac08u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac0c: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x10ac0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10ac10: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x10ac10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10ac14: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x10AC14u;
    {
        const bool branch_taken_0x10ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC14u;
        // 0x10ac18: 0x36730016  ori         $s3, $s3, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac14) {
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10AC1Cu;
    // 0x10ac1c: 0x0  nop
    ctx->pc = 0x10ac1cu;
    // NOP
label_10ac20:
    // 0x10ac20: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac24: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x10ac24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10ac28: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x10ac28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10ac2c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x10AC2Cu;
    {
        const bool branch_taken_0x10ac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC2Cu;
        // 0x10ac30: 0x36730017  ori         $s3, $s3, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac2c) {
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10AC34u;
    // 0x10ac34: 0x0  nop
    ctx->pc = 0x10ac34u;
    // NOP
label_10ac38:
    // 0x10ac38: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac3c: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x10ac3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10ac40: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x10ac40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10ac44: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x10AC44u;
    {
        const bool branch_taken_0x10ac44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC44u;
        // 0x10ac48: 0x36730018  ori         $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac44) {
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10AC4Cu;
    // 0x10ac4c: 0x0  nop
    ctx->pc = 0x10ac4cu;
    // NOP
label_10ac50:
    // 0x10ac50: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac54: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x10ac54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10ac58: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x10ac58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10ac5c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x10AC5Cu;
    {
        const bool branch_taken_0x10ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC5Cu;
        // 0x10ac60: 0x3673001e  ori         $s3, $s3, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac5c) {
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10AC64u;
    // 0x10ac64: 0x0  nop
    ctx->pc = 0x10ac64u;
    // NOP
label_10ac68:
    // 0x10ac68: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac6c: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x10ac6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10ac70: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x10ac70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10ac74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10AC74u;
    {
        const bool branch_taken_0x10ac74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC74u;
        // 0x10ac78: 0x3673001f  ori         $s3, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac74) {
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10AC7Cu;
    // 0x10ac7c: 0x0  nop
    ctx->pc = 0x10ac7cu;
    // NOP
label_10ac80:
    // 0x10ac80: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac84: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x10ac84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10ac88: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x10ac88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10ac8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10AC8Cu;
    {
        const bool branch_taken_0x10ac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC8Cu;
        // 0x10ac90: 0x36730020  ori         $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac8c) {
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10AC94u;
    // 0x10ac94: 0x0  nop
    ctx->pc = 0x10ac94u;
    // NOP
label_10ac98:
    // 0x10ac98: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10ac98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10ac9c: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x10ac9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10aca0: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x10aca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10aca4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10ACA4u;
    {
        const bool branch_taken_0x10aca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACA4u;
        // 0x10aca8: 0x36730021  ori         $s3, $s3, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)33);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aca4) {
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10ACACu;
    // 0x10acac: 0x0  nop
    ctx->pc = 0x10acacu;
    // NOP
label_10acb0:
    // 0x10acb0: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10acb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10acb4: 0x24110030  addiu       $s1, $zero, 0x30
    ctx->pc = 0x10acb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10acb8: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x10acb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10acbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10ACBCu;
    {
        const bool branch_taken_0x10acbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACBCu;
        // 0x10acc0: 0x36730022  ori         $s3, $s3, 0x22 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)34);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acbc) {
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10ACC4u;
    // 0x10acc4: 0x0  nop
    ctx->pc = 0x10acc4u;
    // NOP
label_10acc8:
    // 0x10acc8: 0x3c130005  lui         $s3, 0x5
    ctx->pc = 0x10acc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)5 << 16));
    // 0x10accc: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x10acccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10acd0: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x10acd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10acd4: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x10acd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
    // 0x10acd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10ACD8u;
    {
        const bool branch_taken_0x10acd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACD8u;
        // 0x10acdc: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acd8) {
            ctx->pc = 0x10ACF0u;
            goto label_10acf0;
        }
    }
    ctx->pc = 0x10ACE0u;
label_10ace0:
    // 0x10ace0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x10ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x10ace4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10ace4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ace8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x10ACE8u;
    SET_GPR_U32(ctx, 31, 0x10ACF0u);
    ctx->pc = 0x10ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACE8u;
    // 0x10acec: 0x24843bd8  addiu       $a0, $a0, 0x3BD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x10ACE8u, 0x10ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACF0u;
label_10acf0:
    // 0x10acf0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x10acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10acf4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10acf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acf8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x10acf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10acfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad00: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x10ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x10ad04: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x10ad04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x10ad08: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x10ad08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10ad0c: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x10ad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x10ad10: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x10ad10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x10ad14: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x10ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x10ad18: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x10ad18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x10ad1c: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x10ad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x10ad20: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x10ad20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x10ad24: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x10ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
    // 0x10ad28: 0xdce30020  ld          $v1, 0x20($a3)
    ctx->pc = 0x10ad28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x10ad2c: 0xfe830020  sd          $v1, 0x20($s4)
    ctx->pc = 0x10ad2cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 3));
    // 0x10ad30: 0xdce20028  ld          $v0, 0x28($a3)
    ctx->pc = 0x10ad30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x10ad34: 0xfe820028  sd          $v0, 0x28($s4)
    ctx->pc = 0x10ad34u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 2));
    // 0x10ad38: 0xdce30030  ld          $v1, 0x30($a3)
    ctx->pc = 0x10ad38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x10ad3c: 0xfe830030  sd          $v1, 0x30($s4)
    ctx->pc = 0x10ad3cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 3));
    // 0x10ad40: 0xdce20038  ld          $v0, 0x38($a3)
    ctx->pc = 0x10ad40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x10ad44: 0xae900048  sw          $s0, 0x48($s4)
    ctx->pc = 0x10ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 16));
    // 0x10ad48: 0xfe820038  sd          $v0, 0x38($s4)
    ctx->pc = 0x10ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 2));
    // 0x10ad4c: 0xae91004c  sw          $s1, 0x4C($s4)
    ctx->pc = 0x10ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 17));
    // 0x10ad50: 0xae800040  sw          $zero, 0x40($s4)
    ctx->pc = 0x10ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 0));
    // 0x10ad54: 0xc0631a2  jal         func_18C688
    ctx->pc = 0x10AD54u;
    SET_GPR_U32(ctx, 31, 0x10AD5Cu);
    ctx->pc = 0x10AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD54u;
    // 0x10ad58: 0xae800044  sw          $zero, 0x44($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C688u, 0x10AD54u, 0x10AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD5Cu;
label_10ad5c:
    // 0x10ad5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x10ad5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad60: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10ad60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad64: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10AD64u;
    SET_GPR_U32(ctx, 31, 0x10AD6Cu);
    ctx->pc = 0x10AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD64u;
    // 0x10ad68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10AD64u, 0x10AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AD6Cu;
label_10ad6c:
    // 0x10ad6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ad70: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x10AD70u;
    {
        const bool branch_taken_0x10ad70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD70u;
        // 0x10ad74: 0x26470150  addiu       $a3, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad70) {
            ctx->pc = 0x10AF3Cu;
            goto label_10af3c;
        }
    }
    ctx->pc = 0x10AD78u;
    // 0x10ad78: 0xc783803c  lwc1        $f3, -0x7FC4($gp)
    ctx->pc = 0x10ad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10ad7c: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x10ad7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x10ad80: 0x24e80030  addiu       $t0, $a3, 0x30
    ctx->pc = 0x10ad80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x10ad84: 0x94e30052  lhu         $v1, 0x52($a3)
    ctx->pc = 0x10ad84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x10ad88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ad88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ad8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10ad8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10ad90: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x10ad90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10ad94: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x10ad94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10ad98: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x10ad98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x10ad9c: 0x94e40054  lhu         $a0, 0x54($a3)
    ctx->pc = 0x10ad9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10ada0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x10ada0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10ada4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x10ada4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x10ada8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10ada8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10adac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10adacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10adb0: 0x44843800  mtc1        $a0, $f7
    ctx->pc = 0x10adb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x10adb4: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x10adb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x10adb8: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10adb8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10adbc: 0x0  nop
    ctx->pc = 0x10adbcu;
    // NOP
    // 0x10adc0: 0x0  nop
    ctx->pc = 0x10adc0u;
    // NOP
    // 0x10adc4: 0x46001843  div.s       $f1, $f3, $f0
    ctx->pc = 0x10adc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x10adc8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x10adc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x10adcc: 0x0  nop
    ctx->pc = 0x10adccu;
    // NOP
    // 0x10add0: 0x0  nop
    ctx->pc = 0x10add0u;
    // NOP
    // 0x10add4: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x10add4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x10add8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10add8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10addc: 0xe4e10068  swc1        $f1, 0x68($a3)
    ctx->pc = 0x10addcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
    // 0x10ade0: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x10ade0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x10ade4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x10ade4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x10ade8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x10ade8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x10adec: 0xe4e3006c  swc1        $f3, 0x6C($a3)
    ctx->pc = 0x10adecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
    // 0x10adf0: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x10adf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10adf4: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x10adf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10adf8: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x10adf8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
    // 0x10adfc: 0x46051942  mul.s       $f5, $f3, $f5
    ctx->pc = 0x10adfcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x10ae00: 0xe4e30064  swc1        $f3, 0x64($a3)
    ctx->pc = 0x10ae00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10ae04: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x10ae04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10ae08: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x10ae08u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x10ae0c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x10ae0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x10ae10: 0xe4e5002c  swc1        $f5, 0x2C($a3)
    ctx->pc = 0x10ae10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10ae14: 0xe4e20024  swc1        $f2, 0x24($a3)
    ctx->pc = 0x10ae14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10ae18: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x10ae18u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x10ae1c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10ae1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10ae20: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x10ae20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10ae24: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10ae24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10ae28: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10ae2c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10ae2cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10ae30: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10ae30u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10ae34: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10ae34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10ae38: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10ae3c: 0xc4e3002c  lwc1        $f3, 0x2C($a3)
    ctx->pc = 0x10ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10ae40: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x10ae40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x10ae44: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10ae44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10ae48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10ae48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10ae4c: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x10ae4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10ae50: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10ae50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10ae54: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10ae54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10ae58: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10ae58u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10ae5c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10ae5cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10ae60: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10ae60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10ae64: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10ae64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10ae68: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10ae68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10ae6c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x10ae6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10ae70: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10ae70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10ae74: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10ae74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10ae78: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x10ae78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x10ae7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ae7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ae80: 0x94e20054  lhu         $v0, 0x54($a3)
    ctx->pc = 0x10ae80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10ae84: 0x94e30056  lhu         $v1, 0x56($a3)
    ctx->pc = 0x10ae84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10ae88: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x10ae88u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x10ae8c: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x10ae8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10ae90: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x10ae90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10ae94: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x10ae94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x10ae98: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x10ae98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10ae9c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x10ae9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x10aea0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10aea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10aea4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10aea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10aea8: 0xc4e20064  lwc1        $f2, 0x64($a3)
    ctx->pc = 0x10aea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10aeac: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x10aeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x10aeb0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x10aeb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x10aeb4: 0x46003106  mov.s       $f4, $f6
    ctx->pc = 0x10aeb4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[6]);
    // 0x10aeb8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x10aeb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x10aebc: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10aebcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10aec0: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x10aec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10aec4: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x10aec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10aec8: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x10aec8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x10aecc: 0xe4e2002c  swc1        $f2, 0x2C($a3)
    ctx->pc = 0x10aeccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10aed0: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x10aed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10aed4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x10aed4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x10aed8: 0xe4e30024  swc1        $f3, 0x24($a3)
    ctx->pc = 0x10aed8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10aedc: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x10aedcu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x10aee0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10aee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10aee4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x10aee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10aee8: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x10aee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10aeec: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10aef0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10aef0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10aef4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10aef4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10aef8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10aef8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10aefc: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10aefcu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10af00: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x10af00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10af04: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10af04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10af08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10af08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10af0c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10af0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10af10: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x10af10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10af14: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10af14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10af18: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10af18u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10af1c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10af1cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10af20: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10af20u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10af24: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10af24u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10af28: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10af28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10af2c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x10af2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10af30: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10af30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10af34: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10af34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10af38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10af38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10af3c:
    // 0x10af3c: 0x17c20073  bne         $fp, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x10AF3Cu;
    {
        const bool branch_taken_0x10af3c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF3Cu;
        // 0x10af40: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af3c) {
            ctx->pc = 0x10B10Cu;
            goto label_10b10c;
        }
    }
    ctx->pc = 0x10AF44u;
    // 0x10af44: 0x26470150  addiu       $a3, $s2, 0x150
    ctx->pc = 0x10af44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x10af48: 0xc7838040  lwc1        $f3, -0x7FC0($gp)
    ctx->pc = 0x10af48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10af4c: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x10af4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x10af50: 0x24e80030  addiu       $t0, $a3, 0x30
    ctx->pc = 0x10af50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x10af54: 0x94e30052  lhu         $v1, 0x52($a3)
    ctx->pc = 0x10af54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x10af58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10af58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10af5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10af5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10af60: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x10af60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10af64: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x10af64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10af68: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x10af68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x10af6c: 0x94e40054  lhu         $a0, 0x54($a3)
    ctx->pc = 0x10af6cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10af70: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x10af70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10af74: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x10af74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x10af78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10af78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10af7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10af7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10af80: 0x44843800  mtc1        $a0, $f7
    ctx->pc = 0x10af80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x10af84: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x10af84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x10af88: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10af88u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10af8c: 0x0  nop
    ctx->pc = 0x10af8cu;
    // NOP
    // 0x10af90: 0x0  nop
    ctx->pc = 0x10af90u;
    // NOP
    // 0x10af94: 0x46001843  div.s       $f1, $f3, $f0
    ctx->pc = 0x10af94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x10af98: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x10af98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x10af9c: 0x0  nop
    ctx->pc = 0x10af9cu;
    // NOP
    // 0x10afa0: 0x0  nop
    ctx->pc = 0x10afa0u;
    // NOP
    // 0x10afa4: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x10afa4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x10afa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10afa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10afac: 0xe4e10068  swc1        $f1, 0x68($a3)
    ctx->pc = 0x10afacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
    // 0x10afb0: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x10afb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x10afb4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x10afb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x10afb8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x10afb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x10afbc: 0xe4e3006c  swc1        $f3, 0x6C($a3)
    ctx->pc = 0x10afbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
    // 0x10afc0: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x10afc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10afc4: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x10afc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10afc8: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x10afc8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
    // 0x10afcc: 0x46051942  mul.s       $f5, $f3, $f5
    ctx->pc = 0x10afccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x10afd0: 0xe4e30064  swc1        $f3, 0x64($a3)
    ctx->pc = 0x10afd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10afd4: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x10afd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10afd8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x10afd8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x10afdc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x10afdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x10afe0: 0xe4e5002c  swc1        $f5, 0x2C($a3)
    ctx->pc = 0x10afe0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10afe4: 0xe4e20024  swc1        $f2, 0x24($a3)
    ctx->pc = 0x10afe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10afe8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x10afe8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x10afec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10afecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10aff0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x10aff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10aff4: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10aff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10aff8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10affc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10affcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b000: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10b000u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10b004: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10b004u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10b008: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10b008u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10b00c: 0xc4e3002c  lwc1        $f3, 0x2C($a3)
    ctx->pc = 0x10b00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10b010: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x10b010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x10b014: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b018: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10b018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b01c: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x10b01cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b020: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10b020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10b024: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10b024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10b028: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10b028u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b02c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10b02cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10b030: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10b030u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10b034: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10b034u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10b038: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10b038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b03c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x10b03cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10b040: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10b040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10b044: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10b044u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10b048: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x10b048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x10b04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10b04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b050: 0x94e20054  lhu         $v0, 0x54($a3)
    ctx->pc = 0x10b050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10b054: 0x94e30056  lhu         $v1, 0x56($a3)
    ctx->pc = 0x10b054u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10b058: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x10b058u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x10b05c: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x10b05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10b060: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x10b060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10b064: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x10b064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x10b068: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x10b068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10b06c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x10b06cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x10b070: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10b070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10b074: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10b074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10b078: 0xc4e20064  lwc1        $f2, 0x64($a3)
    ctx->pc = 0x10b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10b07c: 0xe4e00060  swc1        $f0, 0x60($a3)
    ctx->pc = 0x10b07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x10b080: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x10b080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x10b084: 0x46003106  mov.s       $f4, $f6
    ctx->pc = 0x10b084u;
    ctx->f[4] = FPU_MOV_S(ctx->f[6]);
    // 0x10b088: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x10b088u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x10b08c: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10b08cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10b090: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x10b090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10b094: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x10b094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10b098: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x10b098u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x10b09c: 0xe4e2002c  swc1        $f2, 0x2C($a3)
    ctx->pc = 0x10b09cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10b0a0: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x10b0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10b0a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x10b0a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x10b0a8: 0xe4e30024  swc1        $f3, 0x24($a3)
    ctx->pc = 0x10b0a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10b0ac: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x10b0acu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x10b0b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10b0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b0b4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x10b0b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b0b8: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x10b0b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10b0bc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10b0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10b0c0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10b0c0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b0c4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10b0c4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10b0c8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10b0c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10b0cc: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10b0d0: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x10b0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b0d4: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b0d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10b0d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b0dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10b0dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b0e0: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x10b0e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10b0e4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10b0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10b0e8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10b0e8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b0ec: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10b0ecu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10b0f0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10b0f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10b0f4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10b0f8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10b0f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b0fc: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x10b0fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10b100: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10b100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10b104: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10b104u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10b108: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x10b108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10b10c:
    // 0x10b10c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x10b10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10b110: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x10b110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b114: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x10b114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x10b118: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x10b118u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10b11c: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x10b11cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x10b120: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x10b120u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10b124: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x10b124u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x10b128: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x10b128u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10b12c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x10b12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x10b130: 0x3e00008  jr          $ra
    ctx->pc = 0x10B130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B130u;
        // 0x10b134: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B138u;
}
