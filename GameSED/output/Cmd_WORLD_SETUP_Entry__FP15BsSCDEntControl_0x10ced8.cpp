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

// Function: Cmd_WORLD_SETUP_Entry__FP15BsSCDEntControl
// Address: 0x10ced8 - 0x10d044
void Cmd_WORLD_SETUP_Entry__FP15BsSCDEntControl_0x10ced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_WORLD_SETUP_Entry__FP15BsSCDEntControl_0x10ced8");
#endif

    switch (ctx->pc) {
        case 0x10cf04u: goto label_10cf04;
        case 0x10cf24u: goto label_10cf24;
        case 0x10cf34u: goto label_10cf34;
        case 0x10cf68u: goto label_10cf68;
        case 0x10cf70u: goto label_10cf70;
        case 0x10cf78u: goto label_10cf78;
        case 0x10cf90u: goto label_10cf90;
        case 0x10cfd0u: goto label_10cfd0;
        case 0x10d004u: goto label_10d004;
        case 0x10d00cu: goto label_10d00c;
        case 0x10d018u: goto label_10d018;
        case 0x10d028u: goto label_10d028;
        default: break;
    }

    ctx->pc = 0x10ced8u;

    // 0x10ced8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ced8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10cedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cee4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10cee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10cee8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10cee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ceec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10ceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10cef0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10cef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10cef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cef8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10cefc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CEFCu;
    SET_GPR_U32(ctx, 31, 0x10CF04u);
    ctx->pc = 0x10CF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CEFCu;
    // 0x10cf00: 0x8c520044  lw          $s2, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CEFCu, 0x10CF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF04u;
label_10cf04:
    // 0x10cf04: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10cf08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10cf08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf0c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10cf10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10cf14: 0x10450014  beq         $v0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x10CF14u;
    {
        const bool branch_taken_0x10cf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF14u;
        // 0x10cf18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf14) {
            ctx->pc = 0x10CF68u;
            goto label_10cf68;
        }
    }
    ctx->pc = 0x10CF1Cu;
    // 0x10cf1c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10CF1Cu;
    SET_GPR_U32(ctx, 31, 0x10CF24u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10CF1Cu, 0x10CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF24u;
label_10cf24:
    // 0x10cf24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10cf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10cf28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf2c: 0xc0410e4  jal         func_104390
    ctx->pc = 0x10CF2Cu;
    SET_GPR_U32(ctx, 31, 0x10CF34u);
    ctx->pc = 0x10CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF2Cu;
    // 0x10cf30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104390u, 0x10CF2Cu, 0x10CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF34u;
label_10cf34:
    // 0x10cf34: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10cf38: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x10cf38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cf3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf40: 0x24a53c60  addiu       $a1, $a1, 0x3C60
    ctx->pc = 0x10cf40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15456));
    // 0x10cf44: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10cf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10cf48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10cf48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf4c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CF4Cu;
    {
        const bool branch_taken_0x10cf4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF4Cu;
        // 0x10cf50: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf4c) {
            ctx->pc = 0x10CF60u;
            goto label_10cf60;
        }
    }
    ctx->pc = 0x10CF54u;
    // 0x10cf54: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x10cf54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10cf58: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CF58u;
    {
        const bool branch_taken_0x10cf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10cf58) {
            ctx->pc = 0x10CF68u;
            goto label_10cf68;
        }
    }
    ctx->pc = 0x10CF60u;
label_10cf60:
    // 0x10cf60: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10CF60u;
    SET_GPR_U32(ctx, 31, 0x10CF68u);
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10CF60u, 0x10CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF68u;
label_10cf68:
    // 0x10cf68: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x10CF68u;
    SET_GPR_U32(ctx, 31, 0x10CF70u);
    ctx->pc = 0x10CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF68u;
    // 0x10cf6c: 0x24040116  addiu       $a0, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x10CF68u, 0x10CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF70u;
label_10cf70:
    // 0x10cf70: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x10CF70u;
    SET_GPR_U32(ctx, 31, 0x10CF78u);
    ctx->pc = 0x10CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF70u;
    // 0x10cf74: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x10CF70u, 0x10CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF78u;
label_10cf78:
    // 0x10cf78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10cf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf7c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x10cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x10cf80: 0x2442e6e0  addiu       $v0, $v0, -0x1920
    ctx->pc = 0x10cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960864));
    // 0x10cf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf88: 0xc061d70  jal         func_1875C0
    ctx->pc = 0x10CF88u;
    SET_GPR_U32(ctx, 31, 0x10CF90u);
    ctx->pc = 0x10CF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CF88u;
    // 0x10cf8c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1875C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1875C0u, 0x10CF88u, 0x10CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CF90u;
label_10cf90:
    // 0x10cf90: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x10cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x10cf94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10cf98: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x10cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x10cf9c: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x10cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x10cfa0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x10cfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x10cfa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10cfa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10cfa8: 0x8c62d630  lw          $v0, -0x29D0($v1)
    ctx->pc = 0x10cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x10cfac: 0x3c014302  lui         $at, 0x4302
    ctx->pc = 0x10cfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17154 << 16));
    // 0x10cfb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10cfb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10cfb4: 0xe60101d4  swc1        $f1, 0x1D4($s0)
    ctx->pc = 0x10cfb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 468), bits); }
    // 0x10cfb8: 0xe60001d8  swc1        $f0, 0x1D8($s0)
    ctx->pc = 0x10cfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 472), bits); }
    // 0x10cfbc: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x10cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x10cfc0: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10CFC0u;
    {
        const bool branch_taken_0x10cfc0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cfc0) {
            ctx->pc = 0x10CFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CFC0u;
            // 0x10cfc4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CFE8u;
            goto label_10cfe8;
        }
    }
    ctx->pc = 0x10CFC8u;
    // 0x10cfc8: 0xc061cb0  jal         func_1872C0
    ctx->pc = 0x10CFC8u;
    SET_GPR_U32(ctx, 31, 0x10CFD0u);
    ctx->pc = 0x1872C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1872C0u, 0x10CFC8u, 0x10CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CFD0u;
label_10cfd0:
    // 0x10cfd0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x10cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x10cfd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10cfd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfd8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x10cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x10cfdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10cfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10cfe0: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x10cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x10cfe4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_10cfe8:
    // 0x10cfe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cfec: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x10cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x10cff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cff4: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x10cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
    // 0x10cff8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x10cff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10cffc: 0xc06215a  jal         func_188568
    ctx->pc = 0x10CFFCu;
    SET_GPR_U32(ctx, 31, 0x10D004u);
    ctx->pc = 0x10D000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CFFCu;
    // 0x10d000: 0xae110164  sw          $s1, 0x164($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188568u, 0x10CFFCu, 0x10D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D004u;
label_10d004:
    // 0x10d004: 0xc044206  jal         func_110818
    ctx->pc = 0x10D004u;
    SET_GPR_U32(ctx, 31, 0x10D00Cu);
    ctx->pc = 0x110818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110818u, 0x10D004u, 0x10D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D00Cu;
label_10d00c:
    // 0x10d00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d010: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x10D010u;
    SET_GPR_U32(ctx, 31, 0x10D018u);
    ctx->pc = 0x10D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D010u;
    // 0x10d014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x10D010u, 0x10D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D018u;
label_10d018:
    // 0x10d018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d01c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10d01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d020: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x10D020u;
    SET_GPR_U32(ctx, 31, 0x10D028u);
    ctx->pc = 0x10D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D020u;
    // 0x10d024: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x10D020u, 0x10D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D028u;
label_10d028:
    // 0x10d028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d02c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d02cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d030: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10d030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d034: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10d034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d038: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10d038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d03c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D03Cu;
        // 0x10d040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D044u;
}
