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

// Function: ApScreenProjection__FP8WcExtentP8WWorldOTP7WcWorld
// Address: 0x1476f8 - 0x147b3c
void ApScreenProjection__FP8WcExtentP8WWorldOTP7WcWorld_0x1476f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApScreenProjection__FP8WcExtentP8WWorldOTP7WcWorld_0x1476f8");
#endif

    switch (ctx->pc) {
        case 0x147750u: goto label_147750;
        case 0x147758u: goto label_147758;
        case 0x14777cu: goto label_14777c;
        case 0x147978u: goto label_147978;
        case 0x147a8cu: goto label_147a8c;
        case 0x147a98u: goto label_147a98;
        case 0x147ab8u: goto label_147ab8;
        case 0x147ac0u: goto label_147ac0;
        case 0x147ae8u: goto label_147ae8;
        default: break;
    }

    ctx->pc = 0x1476f8u;

    // 0x1476f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1476f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1476fc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1476fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x147700: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x147700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x147704: 0x2452d650  addiu       $s2, $v0, -0x29B0
    ctx->pc = 0x147704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x147708: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x147708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x14770c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14770cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147710: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x147710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x147714: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x147714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x147718: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x147718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14771c: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x14771cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x147720: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x147720u;
    {
        const bool branch_taken_0x147720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147720u;
        // 0x147724: 0x8c91015c  lw          $s1, 0x15C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147720) {
            ctx->pc = 0x147748u;
            goto label_147748;
        }
    }
    ctx->pc = 0x147728u;
    // 0x147728: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x147728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x14772c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x14772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x147730: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x147730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x147734: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x147734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x147738: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x147738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x14773c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14773Cu;
    {
        const bool branch_taken_0x14773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14773Cu;
        // 0x147740: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14773c) {
            ctx->pc = 0x14777Cu;
            goto label_14777c;
        }
    }
    ctx->pc = 0x147744u;
    // 0x147744: 0x0  nop
    ctx->pc = 0x147744u;
    // NOP
label_147748:
    // 0x147748: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x147748u;
    SET_GPR_U32(ctx, 31, 0x147750u);
    ctx->pc = 0x14774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147748u;
    // 0x14774c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x147748u, 0x147750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147750u;
label_147750:
    // 0x147750: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x147750u;
    SET_GPR_U32(ctx, 31, 0x147758u);
    ctx->pc = 0x147754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147750u;
    // 0x147754: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x147750u, 0x147758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147758u;
label_147758:
    // 0x147758: 0x8e50008c  lw          $s0, 0x8C($s2)
    ctx->pc = 0x147758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x14775c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x14775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x147760: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x147760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x147764: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x147764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x147768: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x147768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14776c: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x14776cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x147770: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x147770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
    // 0x147774: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x147774u;
    SET_GPR_U32(ctx, 31, 0x14777Cu);
    ctx->pc = 0x147778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147774u;
    // 0x147778: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x147774u, 0x14777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14777Cu;
label_14777c:
    // 0x14777c: 0x200782d  daddu       $t7, $s0, $zero
    ctx->pc = 0x14777cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147780: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x147780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x147784: 0x34c6000d  ori         $a2, $a2, 0xD
    ctx->pc = 0x147784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x147788: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x147788u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x14778c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x14778cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x147790: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x147790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x147794: 0x2410004e  addiu       $s0, $zero, 0x4E
    ctx->pc = 0x147794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x147798: 0x25ab0060  addiu       $t3, $t5, 0x60
    ctx->pc = 0x147798u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x14779c: 0x25a40010  addiu       $a0, $t5, 0x10
    ctx->pc = 0x14779cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x1477a0: 0x25a20020  addiu       $v0, $t5, 0x20
    ctx->pc = 0x1477a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1477a4: 0x160702d  daddu       $t6, $t3, $zero
    ctx->pc = 0x1477a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477a8: 0xaded0008  sw          $t5, 0x8($t7)
    ctx->pc = 0x1477a8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 13));
    // 0x1477ac: 0x1c41823  subu        $v1, $t6, $a0
    ctx->pc = 0x1477acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1477b0: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1477b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x1477b4: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1477b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1477b8: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x1477b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x1477bc: 0x25a60030  addiu       $a2, $t5, 0x30
    ctx->pc = 0x1477bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
    // 0x1477c0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1477c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1477c4: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1477c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1477c8: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x1477c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x1477cc: 0xdf898c80  ld          $t1, -0x7380($gp)
    ctx->pc = 0x1477ccu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x1477d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1477d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1477d4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1477d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1477d8: 0x25a70040  addiu       $a3, $t5, 0x40
    ctx->pc = 0x1477d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 64));
    // 0x1477dc: 0x25aa0050  addiu       $t2, $t5, 0x50
    ctx->pc = 0x1477dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 80));
    // 0x1477e0: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1477e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1477e4: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x1477e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1477e8: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x1477e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1477ec: 0x356b8080  ori         $t3, $t3, 0x8080
    ctx->pc = 0x1477ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32896);
    // 0x1477f0: 0x240c0044  addiu       $t4, $zero, 0x44
    ctx->pc = 0x1477f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1477f4: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x1477f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1477f8: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x1477f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x1477fc: 0xfcd00008  sd          $s0, 0x8($a2)
    ctx->pc = 0x1477fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 16));
    // 0x147800: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x147800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147804: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x147804u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x147808: 0xfceb0000  sd          $t3, 0x0($a3)
    ctx->pc = 0x147808u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 11));
    // 0x14780c: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x14780cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x147810: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x147810u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x147814: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x147814u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x147818: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x147818u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x14781c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x14781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x147820: 0x54490021  bnel        $v0, $t1, . + 4 + (0x21 << 2)
    ctx->pc = 0x147820u;
    {
        const bool branch_taken_0x147820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x147820) {
            ctx->pc = 0x147824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147820u;
            // 0x147824: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1478A8u;
            goto label_1478a8;
        }
    }
    ctx->pc = 0x147828u;
    // 0x147828: 0x2402044e  addiu       $v0, $zero, 0x44E
    ctx->pc = 0x147828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1102));
    // 0x14782c: 0x3c043003  lui         $a0, 0x3003
    ctx->pc = 0x14782cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12291 << 16));
    // 0x147830: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x147830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x147834: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x147834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x147838: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x147838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x14783c: 0xfdc20008  sd          $v0, 0x8($t6)
    ctx->pc = 0x14783cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 2));
    // 0x147840: 0x262204b0  addiu       $v0, $s1, 0x4B0
    ctx->pc = 0x147840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
    // 0x147844: 0xfdc40000  sd          $a0, 0x0($t6)
    ctx->pc = 0x147844u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 4));
    // 0x147848: 0x25a40080  addiu       $a0, $t5, 0x80
    ctx->pc = 0x147848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 128));
    // 0x14784c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14784cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x147850: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147854: 0x25a30070  addiu       $v1, $t5, 0x70
    ctx->pc = 0x147854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 112));
    // 0x147858: 0x8e250370  lw          $a1, 0x370($s1)
    ctx->pc = 0x147858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x14785c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14785cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147860: 0x25ab0090  addiu       $t3, $t5, 0x90
    ctx->pc = 0x147860u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
    // 0x147864: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x147864u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x147868: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x147868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x14786c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x14786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x147870: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x147870u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147874: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x147874u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x147878: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x147878u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14787c: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x14787cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147880: 0x25ab00a0  addiu       $t3, $t5, 0xA0
    ctx->pc = 0x147880u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 160));
    // 0x147884: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x147884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x147888: 0x262304c0  addiu       $v1, $s1, 0x4C0
    ctx->pc = 0x147888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1216));
    // 0x14788c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x14788cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x147890: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x147890u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147894: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x147894u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x147898: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x147898u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14789c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x14789cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1478a0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1478A0u;
    {
        const bool branch_taken_0x1478a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1478A0u;
        // 0x1478a4: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478a0) {
            ctx->pc = 0x1479F8u;
            goto label_1479f8;
        }
    }
    ctx->pc = 0x1478A8u;
label_1478a8:
    // 0x1478a8: 0x2402044e  addiu       $v0, $zero, 0x44E
    ctx->pc = 0x1478a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1102));
    // 0x1478ac: 0x3c043003  lui         $a0, 0x3003
    ctx->pc = 0x1478acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12291 << 16));
    // 0x1478b0: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1478b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1478b4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1478b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1478b8: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x1478b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1478bc: 0xfdc20008  sd          $v0, 0x8($t6)
    ctx->pc = 0x1478bcu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 2));
    // 0x1478c0: 0xfdc40000  sd          $a0, 0x0($t6)
    ctx->pc = 0x1478c0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 4));
    // 0x1478c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1478c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1478c8: 0x262203ac  addiu       $v0, $s1, 0x3AC
    ctx->pc = 0x1478c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 940));
    // 0x1478cc: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x1478ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1478d0: 0x26250370  addiu       $a1, $s1, 0x370
    ctx->pc = 0x1478d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x1478d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1478d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1478d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1478d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1478dc: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1478dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1478e0: 0x25a20070  addiu       $v0, $t5, 0x70
    ctx->pc = 0x1478e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 112));
    // 0x1478e4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1478e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1478e8: 0x25a30080  addiu       $v1, $t5, 0x80
    ctx->pc = 0x1478e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 128));
    // 0x1478ec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1478ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1478f0: 0x25ab0090  addiu       $t3, $t5, 0x90
    ctx->pc = 0x1478f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
    // 0x1478f4: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x1478f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x1478f8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1478f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1478fc: 0x262204b0  addiu       $v0, $s1, 0x4B0
    ctx->pc = 0x1478fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
    // 0x147900: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x147900u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147904: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x147904u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x147908: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x147908u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14790c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x14790cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147910: 0x25ab00a0  addiu       $t3, $t5, 0xA0
    ctx->pc = 0x147910u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 160));
    // 0x147914: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x147914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x147918: 0x262204c0  addiu       $v0, $s1, 0x4C0
    ctx->pc = 0x147918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1216));
    // 0x14791c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x14791cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x147920: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x147920u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147924: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x147924u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x147928: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x147928u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14792c: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x14792cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147930: 0x25ab00b0  addiu       $t3, $t5, 0xB0
    ctx->pc = 0x147930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 176));
    // 0x147934: 0x3c022046  lui         $v0, 0x2046
    ctx->pc = 0x147934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8262 << 16));
    // 0x147938: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x147938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14793c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x147940: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x147940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x147944: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x147944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x147948: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x147948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x14794c: 0x26260270  addiu       $a2, $s1, 0x270
    ctx->pc = 0x14794cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
    // 0x147950: 0xfc700008  sd          $s0, 0x8($v1)
    ctx->pc = 0x147950u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 16));
    // 0x147954: 0x26250370  addiu       $a1, $s1, 0x370
    ctx->pc = 0x147954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x147958: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x147958u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x14795c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14795cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147960: 0x240d0007  addiu       $t5, $zero, 0x7
    ctx->pc = 0x147960u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x147964: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x147964u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147968: 0x340ae100  ori         $t2, $zero, 0xE100
    ctx->pc = 0x147968u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57600);
    // 0x14796c: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x14796cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x147970: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x147970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x147974: 0x0  nop
    ctx->pc = 0x147974u;
    // NOP
label_147978:
    // 0x147978: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x147978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14797c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x147980: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x147980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147984: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x147984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147988: 0xfc4c0008  sd          $t4, 0x8($v0)
    ctx->pc = 0x147988u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 12));
    // 0x14798c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14798cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x147990: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x147990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x147994: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x147994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x147998: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x147998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14799c: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x14799cu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1479a0: 0xf9620000  sqc2        $vf2, 0x0($t3)
    ctx->pc = 0x1479a0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1479a4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1479a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1479a8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1479a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1479ac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1479acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1479b0: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x1479b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x1479b4: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x1479b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x1479b8: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x1479b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x1479bc: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x1479bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1479c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1479C0u;
    {
        const bool branch_taken_0x1479c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1479C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479C0u;
        // 0x1479c4: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479c0) {
            ctx->pc = 0x1479DCu;
            goto label_1479dc;
        }
    }
    ctx->pc = 0x1479C8u;
    // 0x1479c8: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x1479c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1479cc: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x1479ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x1479d0: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x1479d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1479d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1479D4u;
    {
        const bool branch_taken_0x1479d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1479D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479D4u;
        // 0x1479d8: 0xed1024  and         $v0, $a3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479d4) {
            ctx->pc = 0x1479E8u;
            goto label_1479e8;
        }
    }
    ctx->pc = 0x1479DCu;
label_1479dc:
    // 0x1479dc: 0xad69000c  sw          $t1, 0xC($t3)
    ctx->pc = 0x1479dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 9));
    // 0x1479e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1479E0u;
    {
        const bool branch_taken_0x1479e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1479E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479E0u;
        // 0x1479e4: 0x34e70001  ori         $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479e0) {
            ctx->pc = 0x1479F0u;
            goto label_1479f0;
        }
    }
    ctx->pc = 0x1479E8u;
label_1479e8:
    // 0x1479e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1479E8u;
    {
        const bool branch_taken_0x1479e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1479e8) {
            ctx->pc = 0x1479ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1479E8u;
            // 0x1479ec: 0xad69000c  sw          $t1, 0xC($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1479F0u;
            goto label_1479f0;
        }
    }
    ctx->pc = 0x1479F0u;
label_1479f0:
    // 0x1479f0: 0x1500ffe1  bnez        $t0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1479F0u;
    {
        const bool branch_taken_0x1479f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1479F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479F0u;
        // 0x1479f4: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479f0) {
            ctx->pc = 0x147978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147978;
        }
    }
    ctx->pc = 0x1479F8u;
label_1479f8:
    // 0x1479f8: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1479f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1479fc: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1479fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x147a00: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x147a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a04: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x147a04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x147a08: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x147a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x147a0c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x147a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x147a10: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x147a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x147a14: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x147a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x147a18: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x147a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x147a1c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x147a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x147a20: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x147a20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x147a24: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x147a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a28: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x147a28u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x147a2c: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x147a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x147a30: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x147a30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x147a34: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x147a34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x147a38: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x147a38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x147a3c: 0x3c0a5000  lui         $t2, 0x5000
    ctx->pc = 0x147a3cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20480 << 16));
    // 0x147a40: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x147a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x147a44: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x147a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a48: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x147a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147a4c: 0x1661023  subu        $v0, $t3, $a2
    ctx->pc = 0x147a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x147a50: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x147a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x147a54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x147a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x147a58: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x147a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x147a5c: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x147a5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x147a60: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x147a60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x147a64: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x147a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x147a68: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x147a68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x147a6c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x147a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147a70: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x147a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x147a74: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x147a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x147a78: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x147a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147a7c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x147a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x147a80: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x147a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x147a84: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x147A84u;
    SET_GPR_U32(ctx, 31, 0x147A8Cu);
    ctx->pc = 0x147A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147A84u;
    // 0x147a88: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x147A84u, 0x147A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147A8Cu;
label_147a8c:
    // 0x147a8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x147a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x147a90: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x147a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x147a94: 0x0  nop
    ctx->pc = 0x147a94u;
    // NOP
label_147a98:
    // 0x147a98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x147a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147a9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x147a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x147aa0: 0x0  nop
    ctx->pc = 0x147aa0u;
    // NOP
    // 0x147aa4: 0x0  nop
    ctx->pc = 0x147aa4u;
    // NOP
    // 0x147aa8: 0x0  nop
    ctx->pc = 0x147aa8u;
    // NOP
    // 0x147aac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x147AACu;
    {
        const bool branch_taken_0x147aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147aac) {
            ctx->pc = 0x147A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147a98;
        }
    }
    ctx->pc = 0x147AB4u;
    // 0x147ab4: 0x0  nop
    ctx->pc = 0x147ab4u;
    // NOP
label_147ab8:
    // 0x147ab8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x147AB8u;
    SET_GPR_U32(ctx, 31, 0x147AC0u);
    ctx->pc = 0x147ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147AB8u;
    // 0x147abc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x147AB8u, 0x147AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AC0u;
label_147ac0:
    // 0x147ac0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x147ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x147ac4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x147AC4u;
    {
        const bool branch_taken_0x147ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x147AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AC4u;
        // 0x147ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ac4) {
            ctx->pc = 0x147AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147ab8;
        }
    }
    ctx->pc = 0x147ACCu;
    // 0x147acc: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x147accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x147ad0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x147ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147ad4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x147AD4u;
    {
        const bool branch_taken_0x147ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147AD4u;
        // 0x147ad8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ad4) {
            ctx->pc = 0x147AE8u;
            goto label_147ae8;
        }
    }
    ctx->pc = 0x147ADCu;
    // 0x147adc: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x147adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x147ae0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x147AE0u;
    SET_GPR_U32(ctx, 31, 0x147AE8u);
    ctx->pc = 0x147AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147AE0u;
    // 0x147ae4: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x147AE0u, 0x147AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147AE8u;
label_147ae8:
    // 0x147ae8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x147ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x147aec: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x147aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x147af0: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x147af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x147af4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x147af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x147af8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x147af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147afc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x147afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x147b00: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x147b00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x147b04: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x147b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147b08: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x147b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x147b0c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x147b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147b10: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x147b10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147b14: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x147b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x147b18: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x147b18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147b1c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x147b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x147b20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x147b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147b24: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x147b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x147b28: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x147b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x147b2c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x147b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x147b30: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x147b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x147b34: 0x3e00008  jr          $ra
    ctx->pc = 0x147B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B34u;
        // 0x147b38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147B3Cu;
}
