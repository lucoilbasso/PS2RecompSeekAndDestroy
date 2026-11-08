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

// Function: Cmd_DPRINT_Entry__FP15BsSCDEntControl
// Address: 0x1a7ec0 - 0x1a7ffc
void Cmd_DPRINT_Entry__FP15BsSCDEntControl_0x1a7ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DPRINT_Entry__FP15BsSCDEntControl_0x1a7ec0");
#endif

    switch (ctx->pc) {
        case 0x1a7f20u: goto label_1a7f20;
        case 0x1a7f3cu: goto label_1a7f3c;
        case 0x1a7f68u: goto label_1a7f68;
        case 0x1a7f74u: goto label_1a7f74;
        case 0x1a7f98u: goto label_1a7f98;
        case 0x1a7fa4u: goto label_1a7fa4;
        case 0x1a7fb8u: goto label_1a7fb8;
        case 0x1a7fbcu: goto label_1a7fbc;
        default: break;
    }

    ctx->pc = 0x1a7ec0u;

    // 0x1a7ec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a7ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a7ec4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7ec8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a7ecc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a7eccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7ed4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a7ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a7ed8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a7ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a7edc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a7edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a7ee0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a7ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a7ee4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1a7ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1a7ee8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1a7ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1a7eec: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1a7eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1a7ef0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a7ef4: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1A7EF4u;
    {
        const bool branch_taken_0x1a7ef4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A7EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EF4u;
        // 0x1a7ef8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ef4) {
            ctx->pc = 0x1A7FCCu;
            goto label_1a7fcc;
        }
    }
    ctx->pc = 0x1A7EFCu;
    // 0x1a7efc: 0x3c167ffe  lui         $s6, 0x7FFE
    ctx->pc = 0x1a7efcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7f00: 0x2653001c  addiu       $s3, $s2, 0x1C
    ctx->pc = 0x1a7f00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a7f04: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x1a7f04u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x1a7f08: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1a7f08u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x1a7f0c: 0x3c140026  lui         $s4, 0x26
    ctx->pc = 0x1a7f0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)38 << 16));
    // 0x1a7f10: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1a7f10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7f14: 0x3c170026  lui         $s7, 0x26
    ctx->pc = 0x1a7f14u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)38 << 16));
    // 0x1a7f18: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a7f1c: 0x0  nop
    ctx->pc = 0x1a7f1cu;
    // NOP
label_1a7f20:
    // 0x1a7f20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7f24: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7f28: 0x2c5182a  slt         $v1, $s6, $a1
    ctx->pc = 0x1a7f28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a7f2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7F2Cu;
    {
        const bool branch_taken_0x1a7f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F2Cu;
        // 0x1a7f30: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f2c) {
            ctx->pc = 0x1A7F48u;
            goto label_1a7f48;
        }
    }
    ctx->pc = 0x1A7F34u;
    // 0x1a7f34: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7F34u;
    SET_GPR_U32(ctx, 31, 0x1A7F3Cu);
    ctx->pc = 0x1A7F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F34u;
    // 0x1a7f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7F34u, 0x1A7F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F3Cu;
label_1a7f3c:
    // 0x1a7f3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7F3Cu;
    {
        const bool branch_taken_0x1a7f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F3Cu;
        // 0x1a7f40: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f3c) {
            ctx->pc = 0x1A7F4Cu;
            goto label_1a7f4c;
        }
    }
    ctx->pc = 0x1A7F44u;
    // 0x1a7f44: 0x0  nop
    ctx->pc = 0x1a7f44u;
    // NOP
label_1a7f48:
    // 0x1a7f48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a7f4c:
    // 0x1a7f4c: 0x8f829080  lw          $v0, -0x6F80($gp)
    ctx->pc = 0x1a7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938752)));
    // 0x1a7f50: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7F50u;
    {
        const bool branch_taken_0x1a7f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f50) {
            ctx->pc = 0x1A7F80u;
            goto label_1a7f80;
        }
    }
    ctx->pc = 0x1A7F58u;
    // 0x1a7f58: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7F58u;
    {
        const bool branch_taken_0x1a7f58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F58u;
        // 0x1a7f5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f58) {
            ctx->pc = 0x1A7F6Cu;
            goto label_1a7f6c;
        }
    }
    ctx->pc = 0x1A7F60u;
    // 0x1a7f60: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A7F60u;
    SET_GPR_U32(ctx, 31, 0x1A7F68u);
    ctx->pc = 0x1A7F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F60u;
    // 0x1a7f64: 0x26a4d8f8  addiu       $a0, $s5, -0x2708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A7F60u, 0x1A7F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F68u;
label_1a7f68:
    // 0x1a7f68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7f6c:
    // 0x1a7f6c: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A7F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A7F74u);
    ctx->pc = 0x1A7F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F6Cu;
    // 0x1a7f70: 0x2684d900  addiu       $a0, $s4, -0x2700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A7F6Cu, 0x1A7F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F74u;
label_1a7f74:
    // 0x1a7f74: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A7F74u;
    {
        const bool branch_taken_0x1a7f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F74u;
        // 0x1a7f78: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f74) {
            ctx->pc = 0x1A7FBCu;
            goto label_1a7fbc;
        }
    }
    ctx->pc = 0x1A7F7Cu;
    // 0x1a7f7c: 0x0  nop
    ctx->pc = 0x1a7f7cu;
    // NOP
label_1a7f80:
    // 0x1a7f80: 0x145e000b  bne         $v0, $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7F80u;
    {
        const bool branch_taken_0x1a7f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x1A7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F80u;
        // 0x1a7f84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f80) {
            ctx->pc = 0x1A7FB0u;
            goto label_1a7fb0;
        }
    }
    ctx->pc = 0x1A7F88u;
    // 0x1a7f88: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7F88u;
    {
        const bool branch_taken_0x1a7f88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f88) {
            ctx->pc = 0x1A7F9Cu;
            goto label_1a7f9c;
        }
    }
    ctx->pc = 0x1A7F90u;
    // 0x1a7f90: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A7F90u;
    SET_GPR_U32(ctx, 31, 0x1A7F98u);
    ctx->pc = 0x1A7F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F90u;
    // 0x1a7f94: 0x26a4d8f8  addiu       $a0, $s5, -0x2708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A7F90u, 0x1A7F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F98u;
label_1a7f98:
    // 0x1a7f98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7f9c:
    // 0x1a7f9c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A7F9Cu;
    SET_GPR_U32(ctx, 31, 0x1A7FA4u);
    ctx->pc = 0x1A7FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F9Cu;
    // 0x1a7fa0: 0x2684d900  addiu       $a0, $s4, -0x2700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A7F9Cu, 0x1A7FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FA4u;
label_1a7fa4:
    // 0x1a7fa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7FA4u;
    {
        const bool branch_taken_0x1a7fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FA4u;
        // 0x1a7fa8: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fa4) {
            ctx->pc = 0x1A7FBCu;
            goto label_1a7fbc;
        }
    }
    ctx->pc = 0x1A7FACu;
    // 0x1a7fac: 0x0  nop
    ctx->pc = 0x1a7facu;
    // NOP
label_1a7fb0:
    // 0x1a7fb0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A7FB0u;
    SET_GPR_U32(ctx, 31, 0x1A7FB8u);
    ctx->pc = 0x1A7FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7FB0u;
    // 0x1a7fb4: 0x26e4d908  addiu       $a0, $s7, -0x26F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A7FB0u, 0x1A7FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FB8u;
label_1a7fb8:
    // 0x1a7fb8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1a7fbc:
    // 0x1a7fbc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a7fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a7fc0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a7fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7fc4: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1A7FC4u;
    {
        const bool branch_taken_0x1a7fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7fc4) {
            ctx->pc = 0x1A7FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7FC4u;
            // 0x1a7fc8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7f20;
        }
    }
    ctx->pc = 0x1A7FCCu;
label_1a7fcc:
    // 0x1a7fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7fd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a7fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7fd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7fd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7fdc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a7fdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7fe0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a7fe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a7fe4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a7fe4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7fe8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1a7fe8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a7fec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1a7fecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7ff0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1a7ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a7ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FF4u;
        // 0x1a7ff8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7FFCu;
}
