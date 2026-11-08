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

// Function: sceSync
// Address: 0x1b4a00 - 0x1b4b98
void sceSync_0x1b4a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSync_0x1b4a00");
#endif

    switch (ctx->pc) {
        case 0x1b4a3cu: goto label_1b4a3c;
        case 0x1b4a54u: goto label_1b4a54;
        case 0x1b4a78u: goto label_1b4a78;
        case 0x1b4adcu: goto label_1b4adc;
        case 0x1b4b18u: goto label_1b4b18;
        case 0x1b4b28u: goto label_1b4b28;
        case 0x1b4b30u: goto label_1b4b30;
        case 0x1b4b44u: goto label_1b4b44;
        case 0x1b4b54u: goto label_1b4b54;
        case 0x1b4b64u: goto label_1b4b64;
        case 0x1b4b6cu: goto label_1b4b6c;
        default: break;
    }

    ctx->pc = 0x1b4a00u;

    // 0x1b4a00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b4a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1b4a04: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b4a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b4a08: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b4a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b4a0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a10: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b4a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b4a14: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b4a14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a18: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b4a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b4a1c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1b4a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1b4a20: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1b4a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1b4a24: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b4a24u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b4a28: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b4a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b4a2c: 0x26d09a80  addiu       $s0, $s6, -0x6580
    ctx->pc = 0x1b4a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941312));
    // 0x1b4a30: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1b4a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1b4a34: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B4A34u;
    SET_GPR_U32(ctx, 31, 0x1B4A3Cu);
    ctx->pc = 0x1B4A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4A34u;
    // 0x1b4a38: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B4A34u, 0x1B4A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A3Cu;
label_1b4a3c:
    // 0x1b4a3c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b4a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b4a40: 0x8c43aa04  lw          $v1, -0x55FC($v0)
    ctx->pc = 0x1b4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b4a44: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4A44u;
    {
        const bool branch_taken_0x1b4a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a44) {
            ctx->pc = 0x1B4A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4A44u;
            // 0x1b4a48: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4A58u;
            goto label_1b4a58;
        }
    }
    ctx->pc = 0x1B4A4Cu;
    // 0x1b4a4c: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B4A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B4A54u);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B4A4Cu, 0x1B4A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A54u;
label_1b4a54:
    // 0x1b4a54: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b4a54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1b4a58:
    // 0x1b4a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a5c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b4a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b4a60: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4A60u;
    {
        const bool branch_taken_0x1b4a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A60u;
        // 0x1b4a64: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a60) {
            ctx->pc = 0x1B4AA4u;
            goto label_1b4aa4;
        }
    }
    ctx->pc = 0x1B4A68u;
    // 0x1b4a68: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1b4a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4a6c: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b4a6cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b4a70: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x1b4a70u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x1b4a74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b4a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b4a78:
    // 0x1b4a78: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1b4a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b4a7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B4A7Cu;
    {
        const bool branch_taken_0x1b4a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A7Cu;
        // 0x1b4a80: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a7c) {
            ctx->pc = 0x1B4AB0u;
            goto label_1b4ab0;
        }
    }
    ctx->pc = 0x1B4A84u;
    // 0x1b4a84: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x1b4a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1b4a88: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b4a88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4a8c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x1b4a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b4a90: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b4a94: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B4A94u;
    {
        const bool branch_taken_0x1b4a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a94) {
            ctx->pc = 0x1B4A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4A94u;
            // 0x1b4a98: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4a78;
        }
    }
    ctx->pc = 0x1B4A9Cu;
    // 0x1b4a9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4A9Cu;
    {
        const bool branch_taken_0x1b4a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A9Cu;
        // 0x1b4aa0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a9c) {
            ctx->pc = 0x1B4AB4u;
            goto label_1b4ab4;
        }
    }
    ctx->pc = 0x1B4AA4u;
label_1b4aa4:
    // 0x1b4aa4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1b4aa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4aa8: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b4aa8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b4aac: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x1b4aacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
label_1b4ab0:
    // 0x1b4ab0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1b4ab4:
    // 0x1b4ab4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4AB4u;
    {
        const bool branch_taken_0x1b4ab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4ab4) {
            ctx->pc = 0x1B4AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4AB4u;
            // 0x1b4ab8: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4ABCu;
            goto label_1b4abc;
        }
    }
    ctx->pc = 0x1B4ABCu;
label_1b4abc:
    // 0x1b4abc: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x1b4abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x1b4ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4ac4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b4ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b4ac8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4acc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b4accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b4ad0: 0x2673a6c0  addiu       $s3, $s3, -0x5940
    ctx->pc = 0x1b4ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944448));
    // 0x1b4ad4: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B4AD4u;
    SET_GPR_U32(ctx, 31, 0x1B4ADCu);
    ctx->pc = 0x1B4AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AD4u;
    // 0x1b4ad8: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B4AD4u, 0x1B4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4ADCu;
label_1b4adc:
    // 0x1b4adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ae0: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1b4ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1b4ae4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4ae8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1b4ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1b4aec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b4aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b4af0: 0x2684b180  addiu       $a0, $s4, -0x4E80
    ctx->pc = 0x1b4af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947200));
    // 0x1b4af4: 0x26c79a80  addiu       $a3, $s6, -0x6580
    ctx->pc = 0x1b4af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941312));
    // 0x1b4af8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1b4af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1b4afc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4b00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b04: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b4b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b4b08: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1b4b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b0c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4b0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4b10: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4B10u;
    SET_GPR_U32(ctx, 31, 0x1B4B18u);
    ctx->pc = 0x1B4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B10u;
    // 0x1b4b14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4B10u, 0x1B4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B18u;
label_1b4b18:
    // 0x1b4b18: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4B18u;
    {
        const bool branch_taken_0x1b4b18 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B18u;
        // 0x1b4b1c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b18) {
            ctx->pc = 0x1B4B38u;
            goto label_1b4b38;
        }
    }
    ctx->pc = 0x1B4B20u;
    // 0x1b4b20: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4B20u;
    SET_GPR_U32(ctx, 31, 0x1B4B28u);
    ctx->pc = 0x1B4B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B20u;
    // 0x1b4b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4B20u, 0x1B4B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B28u;
label_1b4b28:
    // 0x1b4b28: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4B28u;
    SET_GPR_U32(ctx, 31, 0x1B4B30u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4B28u, 0x1B4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B30u;
label_1b4b30:
    // 0x1b4b30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B4B30u;
    {
        const bool branch_taken_0x1b4b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B30u;
        // 0x1b4b34: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b30) {
            ctx->pc = 0x1B4B70u;
            goto label_1b4b70;
        }
    }
    ctx->pc = 0x1B4B38u;
label_1b4b38:
    // 0x1b4b38: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1b4b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1b4b3c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B44u);
    ctx->pc = 0x1B4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B3Cu;
    // 0x1b4b40: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4B3Cu, 0x1B4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B44u;
label_1b4b44:
    // 0x1b4b44: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4B44u;
    {
        const bool branch_taken_0x1b4b44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4b44) {
            ctx->pc = 0x1B4B5Cu;
            goto label_1b4b5c;
        }
    }
    ctx->pc = 0x1B4B4Cu;
    // 0x1b4b4c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4B4Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B54u);
    ctx->pc = 0x1B4B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B4Cu;
    // 0x1b4b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4B4Cu, 0x1B4B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B54u;
label_1b4b54:
    // 0x1b4b54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4B54u;
    {
        const bool branch_taken_0x1b4b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B54u;
        // 0x1b4b58: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b54) {
            ctx->pc = 0x1B4B70u;
            goto label_1b4b70;
        }
    }
    ctx->pc = 0x1B4B5Cu;
label_1b4b5c:
    // 0x1b4b5c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B4B5Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B64u);
    ctx->pc = 0x1B4B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B5Cu;
    // 0x1b4b60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B4B5Cu, 0x1B4B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B64u;
label_1b4b64:
    // 0x1b4b64: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4B64u;
    SET_GPR_U32(ctx, 31, 0x1B4B6Cu);
    ctx->pc = 0x1B4B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B64u;
    // 0x1b4b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4B64u, 0x1B4B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B6Cu;
label_1b4b6c:
    // 0x1b4b6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b4b70:
    // 0x1b4b70: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b4b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b4b74: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b4b74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b4b78: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b4b78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4b7c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b4b7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b4b80: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b4b80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4b84: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b4b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b4b88: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b4b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4b8c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b4b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4b90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B90u;
        // 0x1b4b94: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4B98u;
}
