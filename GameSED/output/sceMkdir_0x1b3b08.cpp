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

// Function: sceMkdir
// Address: 0x1b3b08 - 0x1b3cb4
void sceMkdir_0x1b3b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMkdir_0x1b3b08");
#endif

    switch (ctx->pc) {
        case 0x1b3b48u: goto label_1b3b48;
        case 0x1b3b60u: goto label_1b3b60;
        case 0x1b3b88u: goto label_1b3b88;
        case 0x1b3bf4u: goto label_1b3bf4;
        case 0x1b3c30u: goto label_1b3c30;
        case 0x1b3c40u: goto label_1b3c40;
        case 0x1b3c48u: goto label_1b3c48;
        case 0x1b3c5cu: goto label_1b3c5c;
        case 0x1b3c6cu: goto label_1b3c6c;
        case 0x1b3c7cu: goto label_1b3c7c;
        case 0x1b3c84u: goto label_1b3c84;
        default: break;
    }

    ctx->pc = 0x1b3b08u;

    // 0x1b3b08: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b3b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1b3b0c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b3b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b3b10: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b3b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b3b14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3b14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b18: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1b3b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1b3b1c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1b3b1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b20: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b3b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b3b24: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b3b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b3b28: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1b3b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1b3b2c: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x1b3b2cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x1b3b30: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b3b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b3b34: 0x26f29a80  addiu       $s2, $s7, -0x6580
    ctx->pc = 0x1b3b34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b3b38: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b3b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b3b3c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1b3b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1b3b40: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B3B40u;
    SET_GPR_U32(ctx, 31, 0x1B3B48u);
    ctx->pc = 0x1B3B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3B40u;
    // 0x1b3b44: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B3B40u, 0x1B3B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B48u;
label_1b3b48:
    // 0x1b3b48: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b3b4c: 0x8c43aa04  lw          $v1, -0x55FC($v0)
    ctx->pc = 0x1b3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b3b50: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3B50u;
    {
        const bool branch_taken_0x1b3b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b50) {
            ctx->pc = 0x1B3B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3B50u;
            // 0x1b3b54: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3B64u;
            goto label_1b3b64;
        }
    }
    ctx->pc = 0x1B3B58u;
    // 0x1b3b58: 0xc06c96e  jal         func_1B25B8
    ctx->pc = 0x1B3B58u;
    SET_GPR_U32(ctx, 31, 0x1B3B60u);
    ctx->pc = 0x1B25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B25B8u, 0x1B3B58u, 0x1B3B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B60u;
label_1b3b60:
    // 0x1b3b60: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b3b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1b3b64:
    // 0x1b3b64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b3b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b68: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b3b6c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B3B6Cu;
    {
        const bool branch_taken_0x1b3b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B6Cu;
        // 0x1b3b70: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b6c) {
            ctx->pc = 0x1B3BB4u;
            goto label_1b3bb4;
        }
    }
    ctx->pc = 0x1B3B74u;
    // 0x1b3b74: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b3b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3b78: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b3b78u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b3b7c: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b3b7cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b3b80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b3b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b3b84: 0x0  nop
    ctx->pc = 0x1b3b84u;
    // NOP
label_1b3b88:
    // 0x1b3b88: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1b3b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b3b8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B3B8Cu;
    {
        const bool branch_taken_0x1b3b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B8Cu;
        // 0x1b3b90: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b8c) {
            ctx->pc = 0x1B3BC0u;
            goto label_1b3bc0;
        }
    }
    ctx->pc = 0x1B3B94u;
    // 0x1b3b94: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1b3b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1b3b98: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b3b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3b9c: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x1b3b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b3ba0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1b3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b3ba4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B3BA4u;
    {
        const bool branch_taken_0x1b3ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ba4) {
            ctx->pc = 0x1B3BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3BA4u;
            // 0x1b3ba8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3b88;
        }
    }
    ctx->pc = 0x1B3BACu;
    // 0x1b3bac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3BACu;
    {
        const bool branch_taken_0x1b3bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3BACu;
        // 0x1b3bb0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3bac) {
            ctx->pc = 0x1B3BC4u;
            goto label_1b3bc4;
        }
    }
    ctx->pc = 0x1B3BB4u;
label_1b3bb4:
    // 0x1b3bb4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b3bb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3bb8: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b3bb8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b3bbc: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b3bbcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_1b3bc0:
    // 0x1b3bc0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1b3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1b3bc4:
    // 0x1b3bc4: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3BC4u;
    {
        const bool branch_taken_0x1b3bc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b3bc4) {
            ctx->pc = 0x1B3BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3BC4u;
            // 0x1b3bc8: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3BD8u;
            goto label_1b3bd8;
        }
    }
    ctx->pc = 0x1B3BCCu;
    // 0x1b3bcc: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x1b3bccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3bd0: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1b3bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1b3bd4: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x1b3bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_1b3bd8:
    // 0x1b3bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3bdc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b3bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b3be0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b3be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3be4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b3be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b3be8: 0x2694a6c0  addiu       $s4, $s4, -0x5940
    ctx->pc = 0x1b3be8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    // 0x1b3bec: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B3BECu;
    SET_GPR_U32(ctx, 31, 0x1B3BF4u);
    ctx->pc = 0x1B3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3BECu;
    // 0x1b3bf0: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B3BECu, 0x1B3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3BF4u;
label_1b3bf4:
    // 0x1b3bf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bf8: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b3bfc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3c00: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b3c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b3c04: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b3c08: 0x26a4b180  addiu       $a0, $s5, -0x4E80
    ctx->pc = 0x1b3c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947200));
    // 0x1b3c0c: 0x26e79a80  addiu       $a3, $s7, -0x6580
    ctx->pc = 0x1b3c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941312));
    // 0x1b3c10: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x1b3c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x1b3c14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b3c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b3c18: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b3c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b3c1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c20: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b3c20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c24: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b3c24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3c28: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B3C28u;
    SET_GPR_U32(ctx, 31, 0x1B3C30u);
    ctx->pc = 0x1B3C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C28u;
    // 0x1b3c2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B3C28u, 0x1B3C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C30u;
label_1b3c30:
    // 0x1b3c30: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3C30u;
    {
        const bool branch_taken_0x1b3c30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C30u;
        // 0x1b3c34: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c30) {
            ctx->pc = 0x1B3C50u;
            goto label_1b3c50;
        }
    }
    ctx->pc = 0x1B3C38u;
    // 0x1b3c38: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3C38u;
    SET_GPR_U32(ctx, 31, 0x1B3C40u);
    ctx->pc = 0x1B3C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C38u;
    // 0x1b3c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3C38u, 0x1B3C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C40u;
label_1b3c40:
    // 0x1b3c40: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3C40u;
    SET_GPR_U32(ctx, 31, 0x1B3C48u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3C40u, 0x1B3C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C48u;
label_1b3c48:
    // 0x1b3c48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B3C48u;
    {
        const bool branch_taken_0x1b3c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C48u;
        // 0x1b3c4c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c48) {
            ctx->pc = 0x1B3C88u;
            goto label_1b3c88;
        }
    }
    ctx->pc = 0x1B3C50u;
label_1b3c50:
    // 0x1b3c50: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b3c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b3c54: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B3C54u;
    SET_GPR_U32(ctx, 31, 0x1B3C5Cu);
    ctx->pc = 0x1B3C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C54u;
    // 0x1b3c58: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B3C54u, 0x1B3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C5Cu;
label_1b3c5c:
    // 0x1b3c5c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3C5Cu;
    {
        const bool branch_taken_0x1b3c5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c5c) {
            ctx->pc = 0x1B3C74u;
            goto label_1b3c74;
        }
    }
    ctx->pc = 0x1B3C64u;
    // 0x1b3c64: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3C64u;
    SET_GPR_U32(ctx, 31, 0x1B3C6Cu);
    ctx->pc = 0x1B3C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C64u;
    // 0x1b3c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3C64u, 0x1B3C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C6Cu;
label_1b3c6c:
    // 0x1b3c6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3C6Cu;
    {
        const bool branch_taken_0x1b3c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C6Cu;
        // 0x1b3c70: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c6c) {
            ctx->pc = 0x1B3C88u;
            goto label_1b3c88;
        }
    }
    ctx->pc = 0x1B3C74u;
label_1b3c74:
    // 0x1b3c74: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B3C74u;
    SET_GPR_U32(ctx, 31, 0x1B3C7Cu);
    ctx->pc = 0x1B3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C74u;
    // 0x1b3c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B3C74u, 0x1B3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C7Cu;
label_1b3c7c:
    // 0x1b3c7c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B3C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B3C84u);
    ctx->pc = 0x1B3C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3C7Cu;
    // 0x1b3c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B3C7Cu, 0x1B3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3C84u;
label_1b3c84:
    // 0x1b3c84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3c88:
    // 0x1b3c88: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1b3c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b3c8c: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1b3c8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b3c90: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b3c90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b3c94: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b3c94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3c98: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b3c98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b3c9c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b3c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3ca0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b3ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b3ca4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b3ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3ca8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b3ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3cac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CACu;
        // 0x1b3cb0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3CB4u;
}
