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

// Function: field_blower__FP8ApcField
// Address: 0x13cc40 - 0x13d078
void field_blower__FP8ApcField_0x13cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("field_blower__FP8ApcField_0x13cc40");
#endif

    switch (ctx->pc) {
        case 0x13cc74u: goto label_13cc74;
        case 0x13ccb8u: goto label_13ccb8;
        case 0x13ccc0u: goto label_13ccc0;
        case 0x13cce8u: goto label_13cce8;
        case 0x13cf60u: goto label_13cf60;
        case 0x13cfb4u: goto label_13cfb4;
        case 0x13cfc0u: goto label_13cfc0;
        case 0x13cfe0u: goto label_13cfe0;
        case 0x13cfe8u: goto label_13cfe8;
        case 0x13d010u: goto label_13d010;
        default: break;
    }

    ctx->pc = 0x13cc40u;

    // 0x13cc40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x13cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x13cc44: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x13cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x13cc48: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x13cc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x13cc4c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x13cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x13cc50: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x13cc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x13cc54: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x13cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x13cc58: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x13cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x13cc5c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x13cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x13cc60: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x13cc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x13cc64: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x13cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x13cc68: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x13cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x13cc6c: 0xc04f2cc  jal         func_13CB30
    ctx->pc = 0x13CC6Cu;
    SET_GPR_U32(ctx, 31, 0x13CC74u);
    ctx->pc = 0x13CC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CC6Cu;
    // 0x13cc70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CB30u, 0x13CC6Cu, 0x13CC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC74u;
label_13cc74:
    // 0x13cc74: 0x8f828a40  lw          $v0, -0x75C0($gp)
    ctx->pc = 0x13cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937152)));
    // 0x13cc78: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x13CC78u;
    {
        const bool branch_taken_0x13cc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC78u;
        // 0x13cc7c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cc78) {
            ctx->pc = 0x13D048u;
            goto label_13d048;
        }
    }
    ctx->pc = 0x13CC80u;
    // 0x13cc80: 0x2477d650  addiu       $s7, $v1, -0x29B0
    ctx->pc = 0x13cc80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x13cc84: 0x8ee20094  lw          $v0, 0x94($s7)
    ctx->pc = 0x13cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 148)));
    // 0x13cc88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13CC88u;
    {
        const bool branch_taken_0x13cc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc88) {
            ctx->pc = 0x13CCB0u;
            goto label_13ccb0;
        }
    }
    ctx->pc = 0x13CC90u;
    // 0x13cc90: 0x8ee20098  lw          $v0, 0x98($s7)
    ctx->pc = 0x13cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 152)));
    // 0x13cc94: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cc98: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13cc9c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x13cc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13cca0: 0x57f021  addu        $fp, $v0, $s7
    ctx->pc = 0x13cca0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x13cca4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13CCA4u;
    {
        const bool branch_taken_0x13cca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCA4u;
        // 0x13cca8: 0xaee30098  sw          $v1, 0x98($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cca4) {
            ctx->pc = 0x13CCE8u;
            goto label_13cce8;
        }
    }
    ctx->pc = 0x13CCACu;
    // 0x13ccac: 0x0  nop
    ctx->pc = 0x13ccacu;
    // NOP
label_13ccb0:
    // 0x13ccb0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13CCB0u;
    SET_GPR_U32(ctx, 31, 0x13CCB8u);
    ctx->pc = 0x13CCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CCB0u;
    // 0x13ccb4: 0x8ee40084  lw          $a0, 0x84($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13CCB0u, 0x13CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CCB8u;
label_13ccb8:
    // 0x13ccb8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13CCB8u;
    SET_GPR_U32(ctx, 31, 0x13CCC0u);
    ctx->pc = 0x13CCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CCB8u;
    // 0x13ccbc: 0x8ee40088  lw          $a0, 0x88($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13CCB8u, 0x13CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CCC0u;
label_13ccc0:
    // 0x13ccc0: 0x8ee3008c  lw          $v1, 0x8C($s7)
    ctx->pc = 0x13ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 140)));
    // 0x13ccc4: 0x8ee20080  lw          $v0, 0x80($s7)
    ctx->pc = 0x13ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 128)));
    // 0x13ccc8: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x13ccc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x13cccc: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x13ccccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ccd0: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x13ccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x13ccd4: 0x8ee40088  lw          $a0, 0x88($s7)
    ctx->pc = 0x13ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 136)));
    // 0x13ccd8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13ccd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13ccdc: 0xaee5008c  sw          $a1, 0x8C($s7)
    ctx->pc = 0x13ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 140), GPR_U32(ctx, 5));
    // 0x13cce0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13CCE0u;
    SET_GPR_U32(ctx, 31, 0x13CCE8u);
    ctx->pc = 0x13CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CCE0u;
    // 0x13cce4: 0xaee20080  sw          $v0, 0x80($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13CCE0u, 0x13CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CCE8u;
label_13cce8:
    // 0x13cce8: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x13cce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x13ccec: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x13ccecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13ccf0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x13ccf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x13ccf4: 0x34a5000d  ori         $a1, $a1, 0xD
    ctx->pc = 0x13ccf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
    // 0x13ccf8: 0x24150047  addiu       $s5, $zero, 0x47
    ctx->pc = 0x13ccf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x13ccfc: 0x24f60020  addiu       $s6, $a3, 0x20
    ctx->pc = 0x13ccfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x13cd00: 0x24e20030  addiu       $v0, $a3, 0x30
    ctx->pc = 0x13cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x13cd04: 0xafd0001c  sw          $s0, 0x1C($fp)
    ctx->pc = 0x13cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 16));
    // 0x13cd08: 0x3410e000  ori         $s0, $zero, 0xE000
    ctx->pc = 0x13cd08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x13cd0c: 0x108538  dsll        $s0, $s0, 20
    ctx->pc = 0x13cd0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 20);
    // 0x13cd10: 0xafc70008  sw          $a3, 0x8($fp)
    ctx->pc = 0x13cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 7));
    // 0x13cd14: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x13cd14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x13cd18: 0xfec40008  sd          $a0, 0x8($s6)
    ctx->pc = 0x13cd18u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 4));
    // 0x13cd1c: 0x24e30060  addiu       $v1, $a3, 0x60
    ctx->pc = 0x13cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x13cd20: 0xfec00000  sd          $zero, 0x0($s6)
    ctx->pc = 0x13cd20u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 0));
    // 0x13cd24: 0x24f60090  addiu       $s6, $a3, 0x90
    ctx->pc = 0x13cd24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x13cd28: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x13cd28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x13cd2c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x13cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x13cd30: 0xfc550008  sd          $s5, 0x8($v0)
    ctx->pc = 0x13cd30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 21));
    // 0x13cd34: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x13cd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x13cd38: 0x8f8c8a38  lw          $t4, -0x75C8($gp)
    ctx->pc = 0x13cd38u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937144)));
    // 0x13cd3c: 0x24ea0050  addiu       $t2, $a3, 0x50
    ctx->pc = 0x13cd3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x13cd40: 0xdf848c90  ld          $a0, -0x7370($gp)
    ctx->pc = 0x13cd40u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x13cd44: 0x24ef0070  addiu       $t7, $a3, 0x70
    ctx->pc = 0x13cd44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x13cd48: 0xc103c  dsll32      $v0, $t4, 0
    ctx->pc = 0x13cd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
    // 0x13cd4c: 0x2414004e  addiu       $s4, $zero, 0x4E
    ctx->pc = 0x13cd4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x13cd50: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x13cd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x13cd54: 0x24e90010  addiu       $t1, $a3, 0x10
    ctx->pc = 0x13cd54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x13cd58: 0x240d0064  addiu       $t5, $zero, 0x64
    ctx->pc = 0x13cd58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x13cd5c: 0x24080042  addiu       $t0, $zero, 0x42
    ctx->pc = 0x13cd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x13cd60: 0x24180060  addiu       $t8, $zero, 0x60
    ctx->pc = 0x13cd60u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x13cd64: 0x240e0014  addiu       $t6, $zero, 0x14
    ctx->pc = 0x13cd64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13cd68: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x13cd68u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x13cd6c: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x13cd6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd70: 0xfcd40008  sd          $s4, 0x8($a2)
    ctx->pc = 0x13cd70u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 20));
    // 0x13cd74: 0x3c062802  lui         $a2, 0x2802
    ctx->pc = 0x13cd74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)10242 << 16));
    // 0x13cd78: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x13cd78u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x13cd7c: 0x1692023  subu        $a0, $t3, $t1
    ctx->pc = 0x13cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x13cd80: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x13cd80u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x13cd84: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x13cd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13cd88: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x13cd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x13cd8c: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x13cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x13cd90: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x13cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x13cd94: 0xac6d0000  sw          $t5, 0x0($v1)
    ctx->pc = 0x13cd94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 13));
    // 0x13cd98: 0x24ed00a0  addiu       $t5, $a3, 0xA0
    ctx->pc = 0x13cd98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x13cd9c: 0xac6c0004  sw          $t4, 0x4($v1)
    ctx->pc = 0x13cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 12));
    // 0x13cda0: 0x24ec0080  addiu       $t4, $a3, 0x80
    ctx->pc = 0x13cda0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x13cda4: 0xfdee0008  sd          $t6, 0x8($t7)
    ctx->pc = 0x13cda4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 14));
    // 0x13cda8: 0x3c0e40ab  lui         $t6, 0x40AB
    ctx->pc = 0x13cda8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16555 << 16));
    // 0x13cdac: 0x35ce4000  ori         $t6, $t6, 0x4000
    ctx->pc = 0x13cdacu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16384);
    // 0x13cdb0: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x13cdb0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x13cdb4: 0x35ce0001  ori         $t6, $t6, 0x1
    ctx->pc = 0x13cdb4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)1);
    // 0x13cdb8: 0xfdf80000  sd          $t8, 0x0($t7)
    ctx->pc = 0x13cdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 24));
    // 0x13cdbc: 0x240f4343  addiu       $t7, $zero, 0x4343
    ctx->pc = 0x13cdbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 17219));
    // 0x13cdc0: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x13cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13cdc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13cdc8: 0xc7818a34  lwc1        $f1, -0x75CC($gp)
    ctx->pc = 0x13cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13cdcc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x13cdccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x13cdd0: 0x8c68001c  lw          $t0, 0x1C($v1)
    ctx->pc = 0x13cdd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x13cdd4: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x13cdd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x13cdd8: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x13cdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x13cddc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13cddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13cde0: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x13cde0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13cde4: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x13cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x13cde8: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x13cde8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13cdec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13cdecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13cdf0: 0x24f600b0  addiu       $s6, $a3, 0xB0
    ctx->pc = 0x13cdf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
    // 0x13cdf4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13cdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13cdf8: 0x3c130007  lui         $s3, 0x7
    ctx->pc = 0x13cdf8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)7 << 16));
    // 0x13cdfc: 0x3673000d  ori         $s3, $s3, 0xD
    ctx->pc = 0x13cdfcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)13);
    // 0x13ce00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13ce04: 0x27928c80  addiu       $s2, $gp, -0x7380
    ctx->pc = 0x13ce04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x13ce08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ce0c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x13ce0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13ce10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13ce14: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13ce14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13ce18: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x13ce18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13ce1c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x13ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x13ce20: 0x3c0144e0  lui         $at, 0x44E0
    ctx->pc = 0x13ce20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17632 << 16));
    // 0x13ce24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13ce24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ce28: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x13ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13ce2c: 0xfd8a0008  sd          $t2, 0x8($t4)
    ctx->pc = 0x13ce2cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 10));
    // 0x13ce30: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x13ce30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x13ce34: 0x52ac3  sra         $a1, $a1, 11
    ctx->pc = 0x13ce34u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    // 0x13ce38: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13ce3c: 0x3c0144e4  lui         $at, 0x44E4
    ctx->pc = 0x13ce3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17636 << 16));
    // 0x13ce40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ce40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ce44: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x13ce44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x13ce48: 0xd0c025  or          $t8, $a2, $s0
    ctx->pc = 0x13ce48u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x13ce4c: 0xfd980000  sd          $t8, 0x0($t4)
    ctx->pc = 0x13ce4cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 24));
    // 0x13ce50: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x13ce50u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x13ce54: 0xfd310008  sd          $s1, 0x8($t1)
    ctx->pc = 0x13ce54u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 17));
    // 0x13ce58: 0xfd6f0008  sd          $t7, 0x8($t3)
    ctx->pc = 0x13ce58u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 15));
    // 0x13ce5c: 0xfd6e0000  sd          $t6, 0x0($t3)
    ctx->pc = 0x13ce5cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 14));
    // 0x13ce60: 0xada50004  sw          $a1, 0x4($t5)
    ctx->pc = 0x13ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 5));
    // 0x13ce64: 0xada00000  sw          $zero, 0x0($t5)
    ctx->pc = 0x13ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
    // 0x13ce68: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x13ce68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13ce6c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13ce6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13ce70: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x13ce70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13ce74: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x13ce74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x13ce78: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x13ce78u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13ce7c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x13ce7cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x13ce80: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x13ce80u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13ce84: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13ce84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x13ce88: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x13ce88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ce8c: 0x24f600c0  addiu       $s6, $a3, 0xC0
    ctx->pc = 0x13ce8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 192));
    // 0x13ce90: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x13ce90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ce94: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x13ce94u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13ce98: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x13ce98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13ce9c: 0x24041ff0  addiu       $a0, $zero, 0x1FF0
    ctx->pc = 0x13ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8176));
    // 0x13cea0: 0xc7808a34  lwc1        $f0, -0x75CC($gp)
    ctx->pc = 0x13cea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13cea4: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x13cea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cea8: 0x3c01450e  lui         $at, 0x450E
    ctx->pc = 0x13cea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17678 << 16));
    // 0x13ceac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13ceacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ceb0: 0x24021bf0  addiu       $v0, $zero, 0x1BF0
    ctx->pc = 0x13ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7152));
    // 0x13ceb4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x13ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x13ceb8: 0x24f600d0  addiu       $s6, $a3, 0xD0
    ctx->pc = 0x13ceb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
    // 0x13cebc: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x13cebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x13cec0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x13cec0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13cec4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x13cec8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x13cecc: 0x3c014510  lui         $at, 0x4510
    ctx->pc = 0x13ceccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17680 << 16));
    // 0x13ced0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ced0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ced4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13ced4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13ced8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x13ced8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13cedc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x13cedcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13cee0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x13cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x13cee4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x13cee4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13cee8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x13cee8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x13ceec: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x13ceecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13cef0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13cef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x13cef4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x13cef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cef8: 0x24f600e0  addiu       $s6, $a3, 0xE0
    ctx->pc = 0x13cef8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 224));
    // 0x13cefc: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x13cefcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cf00: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x13cf00u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13cf04: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x13cf04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13cf08: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x13cf08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x13cf0c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x13cf0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13cf10: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x13cf10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x13cf14: 0x24e300f0  addiu       $v1, $a3, 0xF0
    ctx->pc = 0x13cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 240));
    // 0x13cf18: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x13cf18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf1c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x13cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x13cf20: 0x24f60110  addiu       $s6, $a3, 0x110
    ctx->pc = 0x13cf20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), 272));
    // 0x13cf24: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x13cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x13cf28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13cf28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf2c: 0xfc510008  sd          $s1, 0x8($v0)
    ctx->pc = 0x13cf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 17));
    // 0x13cf30: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x13cf30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf34: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x13cf34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x13cf38: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x13cf38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x13cf3c: 0xfc750008  sd          $s5, 0x8($v1)
    ctx->pc = 0x13cf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 21));
    // 0x13cf40: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x13cf40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf44: 0xfc730000  sd          $s3, 0x0($v1)
    ctx->pc = 0x13cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 19));
    // 0x13cf48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13cf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf4c: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x13cf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13cf50: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x13cf50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13cf54: 0xfcf40008  sd          $s4, 0x8($a3)
    ctx->pc = 0x13cf54u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 20));
    // 0x13cf58: 0xc06b1f6  jal         func_1AC7D8
    ctx->pc = 0x13CF58u;
    SET_GPR_U32(ctx, 31, 0x13CF60u);
    ctx->pc = 0x13CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CF58u;
    // 0x13cf5c: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC7D8u, 0x13CF58u, 0x13CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF60u;
label_13cf60:
    // 0x13cf60: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x13cf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13cf64: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x13cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x13cf68: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x13cf68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x13cf6c: 0x2c51823  subu        $v1, $s6, $a1
    ctx->pc = 0x13cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x13cf70: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x13cf70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x13cf74: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x13cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x13cf78: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x13cf78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x13cf7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13cf80: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x13cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x13cf84: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x13cf84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13cf88: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x13cf88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x13cf8c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x13cf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x13cf90: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x13cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x13cf94: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13cf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13cf98: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x13cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x13cf9c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13cfa0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13cfa4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x13cfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x13cfa8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x13cfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x13cfac: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13CFACu;
    SET_GPR_U32(ctx, 31, 0x13CFB4u);
    ctx->pc = 0x13CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFACu;
    // 0x13cfb0: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13CFACu, 0x13CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFB4u;
label_13cfb4:
    // 0x13cfb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13cfb8: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13cfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13cfbc: 0x0  nop
    ctx->pc = 0x13cfbcu;
    // NOP
label_13cfc0:
    // 0x13cfc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13cfc4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13cfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13cfc8: 0x0  nop
    ctx->pc = 0x13cfc8u;
    // NOP
    // 0x13cfcc: 0x0  nop
    ctx->pc = 0x13cfccu;
    // NOP
    // 0x13cfd0: 0x0  nop
    ctx->pc = 0x13cfd0u;
    // NOP
    // 0x13cfd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13CFD4u;
    {
        const bool branch_taken_0x13cfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cfd4) {
            ctx->pc = 0x13CFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cfc0;
        }
    }
    ctx->pc = 0x13CFDCu;
    // 0x13cfdc: 0x0  nop
    ctx->pc = 0x13cfdcu;
    // NOP
label_13cfe0:
    // 0x13cfe0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13CFE0u;
    SET_GPR_U32(ctx, 31, 0x13CFE8u);
    ctx->pc = 0x13CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CFE0u;
    // 0x13cfe4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13CFE0u, 0x13CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CFE8u;
label_13cfe8:
    // 0x13cfe8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13cfec: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13CFECu;
    {
        const bool branch_taken_0x13cfec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFECu;
        // 0x13cff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cfec) {
            ctx->pc = 0x13CFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cfe0;
        }
    }
    ctx->pc = 0x13CFF4u;
    // 0x13cff4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x13cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13cff8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13cff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13cffc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CFFCu;
    {
        const bool branch_taken_0x13cffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CFFCu;
        // 0x13d000: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cffc) {
            ctx->pc = 0x13D010u;
            goto label_13d010;
        }
    }
    ctx->pc = 0x13D004u;
    // 0x13d004: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x13d004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x13d008: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x13D008u;
    SET_GPR_U32(ctx, 31, 0x13D010u);
    ctx->pc = 0x13D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D008u;
    // 0x13d00c: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x13D008u, 0x13D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D010u;
label_13d010:
    // 0x13d010: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x13d010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13d014: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13d014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13d018: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13d01c: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x13d01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13d020: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13d024: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x13d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x13d028: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x13d028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x13d02c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x13d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x13d030: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x13d030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x13d034: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13d034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x13d038: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13d038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13d03c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x13d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x13d040: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x13d040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x13d044: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13d044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_13d048:
    // 0x13d048: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x13d048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d04c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x13d04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d050: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x13d050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d054: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x13d054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13d058: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x13d058u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13d05c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x13d05cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13d060: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x13d060u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13d064: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x13d064u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x13d068: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x13d068u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13d06c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x13d06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x13d070: 0x3e00008  jr          $ra
    ctx->pc = 0x13D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D070u;
        // 0x13d074: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D078u;
}
