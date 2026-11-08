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

// Function: __ieee754_rem_pio2
// Address: 0x1c6720 - 0x1c6cd8
void ps2___ieee754_rem_pio2_0x1c6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_rem_pio2_0x1c6720");
#endif

    switch (ctx->pc) {
        case 0x1c67bcu: goto label_1c67bc;
        case 0x1c6804u: goto label_1c6804;
        case 0x1c6818u: goto label_1c6818;
        case 0x1c682cu: goto label_1c682c;
        case 0x1c683cu: goto label_1c683c;
        case 0x1c6858u: goto label_1c6858;
        case 0x1c68a4u: goto label_1c68a4;
        case 0x1c68b8u: goto label_1c68b8;
        case 0x1c68ccu: goto label_1c68cc;
        case 0x1c68dcu: goto label_1c68dc;
        case 0x1c6900u: goto label_1c6900;
        case 0x1c6918u: goto label_1c6918;
        case 0x1c692cu: goto label_1c692c;
        case 0x1c6938u: goto label_1c6938;
        case 0x1c6944u: goto label_1c6944;
        case 0x1c695cu: goto label_1c695c;
        case 0x1c696cu: goto label_1c696c;
        case 0x1c6984u: goto label_1c6984;
        case 0x1c69c8u: goto label_1c69c8;
        case 0x1c6a00u: goto label_1c6a00;
        case 0x1c6a14u: goto label_1c6a14;
        case 0x1c6a2cu: goto label_1c6a2c;
        case 0x1c6a40u: goto label_1c6a40;
        case 0x1c6a50u: goto label_1c6a50;
        case 0x1c6a60u: goto label_1c6a60;
        case 0x1c6a74u: goto label_1c6a74;
        case 0x1c6aacu: goto label_1c6aac;
        case 0x1c6ac0u: goto label_1c6ac0;
        case 0x1c6ad8u: goto label_1c6ad8;
        case 0x1c6aecu: goto label_1c6aec;
        case 0x1c6afcu: goto label_1c6afc;
        case 0x1c6b0cu: goto label_1c6b0c;
        case 0x1c6b20u: goto label_1c6b20;
        case 0x1c6b38u: goto label_1c6b38;
        case 0x1c6b48u: goto label_1c6b48;
        case 0x1c6b6cu: goto label_1c6b6c;
        case 0x1c6b98u: goto label_1c6b98;
        case 0x1c6be0u: goto label_1c6be0;
        case 0x1c6becu: goto label_1c6bec;
        case 0x1c6bf4u: goto label_1c6bf4;
        case 0x1c6c08u: goto label_1c6c08;
        case 0x1c6c1cu: goto label_1c6c1c;
        case 0x1c6c38u: goto label_1c6c38;
        case 0x1c6c4cu: goto label_1c6c4c;
        case 0x1c6c70u: goto label_1c6c70;
        case 0x1c6c8cu: goto label_1c6c8c;
        case 0x1c6ca0u: goto label_1c6ca0;
        default: break;
    }

    ctx->pc = 0x1c6720u;

    // 0x1c6720: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c6720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c6724: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c6724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c6728: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c6728u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c672c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c672cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6730: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c6730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c6734: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c6734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1c6738: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c6738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c673c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1c673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1c6740: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1c6740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1c6744: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1c6744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1c6748: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1c6748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1c674c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1c674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1c6750: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c6750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6754: 0x2f03f  dsra32      $fp, $v0, 0
    ctx->pc = 0x1c6754u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c6758: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1c6758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1c675c: 0x3c023fe9  lui         $v0, 0x3FE9
    ctx->pc = 0x1c675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16361 << 16));
    // 0x1c6760: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c6760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c6764: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x1c6764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x1c6768: 0x3c38024  and         $s0, $fp, $v1
    ctx->pc = 0x1c6768u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 30) & GPR_U64(ctx, 3));
    // 0x1c676c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1c676cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c6770: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6770u;
    {
        const bool branch_taken_0x1c6770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6770u;
        // 0x1c6774: 0xffbf0068  sd          $ra, 0x68($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6770) {
            ctx->pc = 0x1C6790u;
            goto label_1c6790;
        }
    }
    ctx->pc = 0x1C6778u;
    // 0x1c6778: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c677c: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x1c677cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
    // 0x1c6780: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x1c6780u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x1c6784: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x1C6784u;
    {
        const bool branch_taken_0x1c6784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6784u;
        // 0x1c6788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6784) {
            ctx->pc = 0x1C6CA8u;
            goto label_1c6ca8;
        }
    }
    ctx->pc = 0x1C678Cu;
    // 0x1c678c: 0x0  nop
    ctx->pc = 0x1c678cu;
    // NOP
label_1c6790:
    // 0x1c6790: 0x3c024002  lui         $v0, 0x4002
    ctx->pc = 0x1c6790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16386 << 16));
    // 0x1c6794: 0x3442d97b  ori         $v0, $v0, 0xD97B
    ctx->pc = 0x1c6794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55675);
    // 0x1c6798: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1c6798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c679c: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1C679Cu;
    {
        const bool branch_taken_0x1c679c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C679Cu;
        // 0x1c67a0: 0x3c024139  lui         $v0, 0x4139 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16697 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c679c) {
            ctx->pc = 0x1C68E8u;
            goto label_1c68e8;
        }
    }
    ctx->pc = 0x1C67A4u;
    // 0x1c67a4: 0x1bc00028  blez        $fp, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C67A4u;
    {
        const bool branch_taken_0x1c67a4 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x1c67a4) {
            ctx->pc = 0x1C6848u;
            goto label_1c6848;
        }
    }
    ctx->pc = 0x1C67ACu;
    // 0x1c67ac: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c67acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c67b0: 0xdc25b9e0  ld          $a1, -0x4620($at)
    ctx->pc = 0x1c67b0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25B9E0u));
    // 0x1c67b4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C67B4u;
    SET_GPR_U32(ctx, 31, 0x1C67BCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C67B4u, 0x1C67BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C67BCu;
label_1c67bc:
    // 0x1c67bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c67bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67c0: 0x3c023ff9  lui         $v0, 0x3FF9
    ctx->pc = 0x1c67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16377 << 16));
    // 0x1c67c4: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x1c67c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x1c67c8: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C67C8u;
    {
        const bool branch_taken_0x1c67c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c67c8) {
            ctx->pc = 0x1C67E8u;
            goto label_1c67e8;
        }
    }
    ctx->pc = 0x1C67D0u;
    // 0x1c67d0: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c67d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c67d4: 0xdc30b9e8  ld          $s0, -0x4618($at)
    ctx->pc = 0x1c67d4u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x25B9E8u));
    // 0x1c67d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c67d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c67dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C67E0u;
    {
        const bool branch_taken_0x1c67e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c67e0) {
            ctx->pc = 0x1C6810u;
            goto label_1c6810;
        }
    }
    ctx->pc = 0x1C67E8u;
label_1c67e8:
    // 0x1c67e8: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c67e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c67ec: 0xdc25b9f0  ld          $a1, -0x4610($at)
    ctx->pc = 0x1c67ecu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25B9F0u));
    // 0x1c67f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c67f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67f4: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c67f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c67f8: 0xdc30b9f8  ld          $s0, -0x4608($at)
    ctx->pc = 0x1c67f8u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x25B9F8u));
    // 0x1c67fc: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C67FCu;
    SET_GPR_U32(ctx, 31, 0x1C6804u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C67FCu, 0x1C6804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6804u;
label_1c6804:
    // 0x1c6804: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c680c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c680cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c6810:
    // 0x1c6810: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6810u;
    SET_GPR_U32(ctx, 31, 0x1C6818u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6810u, 0x1C6818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6818u;
label_1c6818:
    // 0x1c6818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c681c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c681cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1c6820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6824: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6824u;
    SET_GPR_U32(ctx, 31, 0x1C682Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6824u, 0x1C682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C682Cu;
label_1c682c:
    // 0x1c682c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c682cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6830: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6834: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6834u;
    SET_GPR_U32(ctx, 31, 0x1C683Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6834u, 0x1C683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C683Cu;
label_1c683c:
    // 0x1c683c: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x1c683cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x1c6840: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x1C6840u;
    {
        const bool branch_taken_0x1c6840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6840u;
        // 0x1c6844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6840) {
            ctx->pc = 0x1C6CA8u;
            goto label_1c6ca8;
        }
    }
    ctx->pc = 0x1C6848u;
label_1c6848:
    // 0x1c6848: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c684c: 0xdc25ba00  ld          $a1, -0x4600($at)
    ctx->pc = 0x1c684cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA00u));
    // 0x1c6850: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C6850u;
    SET_GPR_U32(ctx, 31, 0x1C6858u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C6850u, 0x1C6858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6858u;
label_1c6858:
    // 0x1c6858: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c685c: 0x3c023ff9  lui         $v0, 0x3FF9
    ctx->pc = 0x1c685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16377 << 16));
    // 0x1c6860: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x1c6860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x1c6864: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6864u;
    {
        const bool branch_taken_0x1c6864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6864) {
            ctx->pc = 0x1C6888u;
            goto label_1c6888;
        }
    }
    ctx->pc = 0x1C686Cu;
    // 0x1c686c: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c686cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6870: 0xdc30ba08  ld          $s0, -0x45F8($at)
    ctx->pc = 0x1c6870u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x25BA08u));
    // 0x1c6874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c687c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C687Cu;
    {
        const bool branch_taken_0x1c687c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c687c) {
            ctx->pc = 0x1C68B0u;
            goto label_1c68b0;
        }
    }
    ctx->pc = 0x1C6884u;
    // 0x1c6884: 0x0  nop
    ctx->pc = 0x1c6884u;
    // NOP
label_1c6888:
    // 0x1c6888: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c688c: 0xdc25ba10  ld          $a1, -0x45F0($at)
    ctx->pc = 0x1c688cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA10u));
    // 0x1c6890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6894: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6898: 0xdc30ba18  ld          $s0, -0x45E8($at)
    ctx->pc = 0x1c6898u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x25BA18u));
    // 0x1c689c: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C689Cu;
    SET_GPR_U32(ctx, 31, 0x1C68A4u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C689Cu, 0x1C68A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68A4u;
label_1c68a4:
    // 0x1c68a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c68a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c68a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c68acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c68b0:
    // 0x1c68b0: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C68B0u;
    SET_GPR_U32(ctx, 31, 0x1C68B8u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C68B0u, 0x1C68B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68B8u;
label_1c68b8:
    // 0x1c68b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c68b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68bc: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c68bcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1c68c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c68c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68c4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C68C4u;
    SET_GPR_U32(ctx, 31, 0x1C68CCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C68C4u, 0x1C68CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68CCu;
label_1c68cc:
    // 0x1c68cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c68ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c68d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c68d4: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C68D4u;
    SET_GPR_U32(ctx, 31, 0x1C68DCu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C68D4u, 0x1C68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68DCu;
label_1c68dc:
    // 0x1c68dc: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x1c68dcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x1c68e0: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x1C68E0u;
    {
        const bool branch_taken_0x1c68e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68E0u;
        // 0x1c68e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68e0) {
            ctx->pc = 0x1C6CA8u;
            goto label_1c6ca8;
        }
    }
    ctx->pc = 0x1C68E8u;
label_1c68e8:
    // 0x1c68e8: 0x344221fb  ori         $v0, $v0, 0x21FB
    ctx->pc = 0x1c68e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8699);
    // 0x1c68ec: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1c68ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c68f0: 0x544000a3  bnel        $v0, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1C68F0u;
    {
        const bool branch_taken_0x1c68f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c68f0) {
            ctx->pc = 0x1C68F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C68F0u;
            // 0x1c68f4: 0x3c027fef  lui         $v0, 0x7FEF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6B80u;
            goto label_1c6b80;
        }
    }
    ctx->pc = 0x1C68F8u;
    // 0x1c68f8: 0xc071f4e  jal         func_1C7D38
    ctx->pc = 0x1C68F8u;
    SET_GPR_U32(ctx, 31, 0x1C6900u);
    ctx->pc = 0x1C7D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D38u, 0x1C68F8u, 0x1C6900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6900u;
label_1c6900:
    // 0x1c6900: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6904: 0xdc25ba20  ld          $a1, -0x45E0($at)
    ctx->pc = 0x1c6904u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA20u));
    // 0x1c6908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c690c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c690cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6910: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6910u;
    SET_GPR_U32(ctx, 31, 0x1C6918u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6910u, 0x1C6918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6918u;
label_1c6918:
    // 0x1c6918: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x1c6918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1c691c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1c691cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1c6920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6924: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1C6924u;
    SET_GPR_U32(ctx, 31, 0x1C692Cu);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1C6924u, 0x1C692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C692Cu;
label_1c692c:
    // 0x1c692c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c692cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6930: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C6930u;
    SET_GPR_U32(ctx, 31, 0x1C6938u);
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C6930u, 0x1C6938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6938u;
label_1c6938:
    // 0x1c6938: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1c6938u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c693c: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C693Cu;
    SET_GPR_U32(ctx, 31, 0x1C6944u);
    ctx->pc = 0x1C6940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C693Cu;
    // 0x1c6940: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C693Cu, 0x1C6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6944u;
label_1c6944:
    // 0x1c6944: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6948: 0xdc25ba28  ld          $a1, -0x45D8($at)
    ctx->pc = 0x1c6948u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA28u));
    // 0x1c694c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c694cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6950: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c6950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6954: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6954u;
    SET_GPR_U32(ctx, 31, 0x1C695Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6954u, 0x1C695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C695Cu;
label_1c695c:
    // 0x1c695c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c695cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6964: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6964u;
    SET_GPR_U32(ctx, 31, 0x1C696Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6964u, 0x1C696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C696Cu;
label_1c696c:
    // 0x1c696c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c696cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6970: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6974: 0xdc25ba30  ld          $a1, -0x45D0($at)
    ctx->pc = 0x1c6974u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA30u));
    // 0x1c6978: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c6978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c697c: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C697Cu;
    SET_GPR_U32(ctx, 31, 0x1C6984u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C697Cu, 0x1C6984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6984u;
label_1c6984:
    // 0x1c6984: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6988: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x1c6988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c698c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C698Cu;
    {
        const bool branch_taken_0x1c698c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C698Cu;
        // 0x1c6990: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c698c) {
            ctx->pc = 0x1C69B8u;
            goto label_1c69b8;
        }
    }
    ctx->pc = 0x1C6994u;
    // 0x1c6994: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1c6994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1c6998: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c6998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c699c: 0x8c63b90c  lw          $v1, -0x46F4($v1)
    ctx->pc = 0x1c699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949132)));
    // 0x1c69a0: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C69A0u;
    {
        const bool branch_taken_0x1c69a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c69a0) {
            ctx->pc = 0x1C69B8u;
            goto label_1c69b8;
        }
    }
    ctx->pc = 0x1C69A8u;
    // 0x1c69a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c69a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69ac: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1C69ACu;
    {
        const bool branch_taken_0x1c69ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c69ac) {
            ctx->pc = 0x1C6B14u;
            goto label_1c6b14;
        }
    }
    ctx->pc = 0x1C69B4u;
    // 0x1c69b4: 0x0  nop
    ctx->pc = 0x1c69b4u;
    // NOP
label_1c69b8:
    // 0x1c69b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c69b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c69bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69c0: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C69C0u;
    SET_GPR_U32(ctx, 31, 0x1C69C8u);
    ctx->pc = 0x1C69C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69C0u;
    // 0x1c69c4: 0x10bd03  sra         $s7, $s0, 20 (Delay Slot)
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C69C0u, 0x1C69C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69C8u;
label_1c69c8:
    // 0x1c69c8: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c69c8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1c69cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c69ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69d0: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x1c69d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x1c69d4: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x1c69d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1c69d8: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x1c69d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1c69dc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1c69dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c69e0: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1C69E0u;
    {
        const bool branch_taken_0x1c69e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c69e0) {
            ctx->pc = 0x1C6B24u;
            goto label_1c6b24;
        }
    }
    ctx->pc = 0x1C69E8u;
    // 0x1c69e8: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c69e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c69ec: 0xdc25ba38  ld          $a1, -0x45C8($at)
    ctx->pc = 0x1c69ecu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA38u));
    // 0x1c69f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c69f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69f4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1c69f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69f8: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C69F8u;
    SET_GPR_U32(ctx, 31, 0x1C6A00u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C69F8u, 0x1C6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A00u;
label_1c6a00:
    // 0x1c6a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a0c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A14u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6A0Cu, 0x1C6A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A14u;
label_1c6a14:
    // 0x1c6a14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c6a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a18: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6a1c: 0xdc25ba40  ld          $a1, -0x45C0($at)
    ctx->pc = 0x1c6a1cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA40u));
    // 0x1c6a20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c6a20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a24: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6A24u;
    SET_GPR_U32(ctx, 31, 0x1C6A2Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6A24u, 0x1C6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A2Cu;
label_1c6a2c:
    // 0x1c6a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c6a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a38: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6A38u;
    SET_GPR_U32(ctx, 31, 0x1C6A40u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6A38u, 0x1C6A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A40u;
label_1c6a40:
    // 0x1c6a40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c6a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a48: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6A48u;
    SET_GPR_U32(ctx, 31, 0x1C6A50u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6A48u, 0x1C6A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A50u;
label_1c6a50:
    // 0x1c6a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a58: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6A58u;
    SET_GPR_U32(ctx, 31, 0x1C6A60u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6A58u, 0x1C6A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A60u;
label_1c6a60:
    // 0x1c6a60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c6a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6a64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a6c: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A74u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6A6Cu, 0x1C6A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A74u;
label_1c6a74:
    // 0x1c6a74: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c6a74u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1c6a78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c6a78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a7c: 0x31d3e  dsrl32      $v1, $v1, 20
    ctx->pc = 0x1c6a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 20));
    // 0x1c6a80: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x1c6a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1c6a84: 0x2e38023  subu        $s0, $s7, $v1
    ctx->pc = 0x1c6a84u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1c6a88: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x1c6a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c6a8c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C6A8Cu;
    {
        const bool branch_taken_0x1c6a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a8c) {
            ctx->pc = 0x1C6B24u;
            goto label_1c6b24;
        }
    }
    ctx->pc = 0x1C6A94u;
    // 0x1c6a94: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6a98: 0xdc25ba48  ld          $a1, -0x45B8($at)
    ctx->pc = 0x1c6a98u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA48u));
    // 0x1c6a9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c6a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aa0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1c6aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aa4: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6AA4u;
    SET_GPR_U32(ctx, 31, 0x1C6AACu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6AA4u, 0x1C6AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AACu;
label_1c6aac:
    // 0x1c6aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ab0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ab8: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6AB8u;
    SET_GPR_U32(ctx, 31, 0x1C6AC0u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6AB8u, 0x1C6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AC0u;
label_1c6ac0:
    // 0x1c6ac0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c6ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ac4: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x1c6ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x1c6ac8: 0xdc25ba50  ld          $a1, -0x45B0($at)
    ctx->pc = 0x1c6ac8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x25BA50u));
    // 0x1c6acc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c6accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ad0: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6AD0u;
    SET_GPR_U32(ctx, 31, 0x1C6AD8u);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6AD0u, 0x1C6AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AD8u;
label_1c6ad8:
    // 0x1c6ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6adc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c6adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ae4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6AE4u;
    SET_GPR_U32(ctx, 31, 0x1C6AECu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6AE4u, 0x1C6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AECu;
label_1c6aec:
    // 0x1c6aec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c6aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6af4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6AF4u;
    SET_GPR_U32(ctx, 31, 0x1C6AFCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6AF4u, 0x1C6AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AFCu;
label_1c6afc:
    // 0x1c6afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b04: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6B04u;
    SET_GPR_U32(ctx, 31, 0x1C6B0Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6B04u, 0x1C6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B0Cu;
label_1c6b0c:
    // 0x1c6b0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c6b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c6b14:
    // 0x1c6b14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c6b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b18: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6B18u;
    SET_GPR_U32(ctx, 31, 0x1C6B20u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6B18u, 0x1C6B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B20u;
label_1c6b20:
    // 0x1c6b20: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c6b20u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_1c6b24:
    // 0x1c6b24: 0xde950000  ld          $s5, 0x0($s4)
    ctx->pc = 0x1c6b24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c6b28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c6b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c6b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b30: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6B30u;
    SET_GPR_U32(ctx, 31, 0x1C6B38u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6B30u, 0x1C6B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B38u;
label_1c6b38:
    // 0x1c6b38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c6b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b40: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6B40u;
    SET_GPR_U32(ctx, 31, 0x1C6B48u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6B40u, 0x1C6B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B48u;
label_1c6b48:
    // 0x1c6b48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b4c: 0xfe910008  sd          $s1, 0x8($s4)
    ctx->pc = 0x1c6b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 17));
    // 0x1c6b50: 0x7c10055  bgez        $fp, . + 4 + (0x55 << 2)
    ctx->pc = 0x1C6B50u;
    {
        const bool branch_taken_0x1c6b50 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x1C6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B50u;
        // 0x1c6b54: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b50) {
            ctx->pc = 0x1C6CA8u;
            goto label_1c6ca8;
        }
    }
    ctx->pc = 0x1C6B58u;
    // 0x1c6b58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c6b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b5c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c6b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b64: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6B64u;
    SET_GPR_U32(ctx, 31, 0x1C6B6Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6B64u, 0x1C6B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B6Cu;
label_1c6b6c:
    // 0x1c6b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b70: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c6b70u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1c6b74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b78: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C6B78u;
    {
        const bool branch_taken_0x1c6b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b78) {
            ctx->pc = 0x1C6C98u;
            goto label_1c6c98;
        }
    }
    ctx->pc = 0x1C6B80u;
label_1c6b80:
    // 0x1c6b80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c6b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c6b84: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1c6b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c6b88: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6B88u;
    {
        const bool branch_taken_0x1c6b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b88) {
            ctx->pc = 0x1C6B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6B88u;
            // 0x1c6b8c: 0x102503  sra         $a0, $s0, 20 (Delay Slot)
            SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6BB0u;
            goto label_1c6bb0;
        }
    }
    ctx->pc = 0x1C6B90u;
    // 0x1c6b90: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6B90u;
    SET_GPR_U32(ctx, 31, 0x1C6B98u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6B90u, 0x1C6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B98u;
label_1c6b98:
    // 0x1c6b98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c6b98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b9c: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1c6b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1c6ba0: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x1c6ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x1c6ba4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C6BA4u;
    {
        const bool branch_taken_0x1c6ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BA4u;
        // 0x1c6ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ba4) {
            ctx->pc = 0x1C6CA8u;
            goto label_1c6ca8;
        }
    }
    ctx->pc = 0x1C6BACu;
    // 0x1c6bac: 0x0  nop
    ctx->pc = 0x1c6bacu;
    // NOP
label_1c6bb0:
    // 0x1c6bb0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c6bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c6bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c6bb8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c6bb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c6bbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c6bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c6bc0: 0x2493fbea  addiu       $s3, $a0, -0x416
    ctx->pc = 0x1c6bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966250));
    // 0x1c6bc4: 0x131d00  sll         $v1, $s3, 20
    ctx->pc = 0x1c6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x1c6bc8: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x1c6bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c6bcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c6bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c6bd0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c6bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c6bd4: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x1c6bd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c6bd8: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1c6bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bdc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c6bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6be0:
    // 0x1c6be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6be4: 0xc072944  jal         func_1CA510
    ctx->pc = 0x1C6BE4u;
    SET_GPR_U32(ctx, 31, 0x1C6BECu);
    ctx->pc = 0x1C6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BE4u;
    // 0x1c6be8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA510u, 0x1C6BE4u, 0x1C6BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BECu;
label_1c6bec:
    // 0x1c6bec: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1C6BECu;
    SET_GPR_U32(ctx, 31, 0x1C6BF4u);
    ctx->pc = 0x1C6BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BECu;
    // 0x1c6bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1C6BECu, 0x1C6BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BF4u;
label_1c6bf4:
    // 0x1c6bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bf8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1c6bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x1c6bfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c00: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6C00u;
    SET_GPR_U32(ctx, 31, 0x1C6C08u);
    ctx->pc = 0x1C6C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C00u;
    // 0x1c6c04: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6C00u, 0x1C6C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C08u;
label_1c6c08:
    // 0x1c6c08: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x1c6c08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x1c6c0c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1c6c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1c6c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c14: 0xc072810  jal         func_1CA040
    ctx->pc = 0x1C6C14u;
    SET_GPR_U32(ctx, 31, 0x1C6C1Cu);
    ctx->pc = 0x1CA040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA040u, 0x1C6C14u, 0x1C6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C1Cu;
label_1c6c1c:
    // 0x1c6c1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c20: 0x601ffef  bgez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C6C20u;
    {
        const bool branch_taken_0x1c6c20 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1c6c20) {
            ctx->pc = 0x1C6BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6be0;
        }
    }
    ctx->pc = 0x1C6C28u;
    // 0x1c6c28: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1c6c28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6c2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c6c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c6c30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6C30u;
    {
        const bool branch_taken_0x1c6c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C30u;
        // 0x1c6c34: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c30) {
            ctx->pc = 0x1C6C3Cu;
            goto label_1c6c3c;
        }
    }
    ctx->pc = 0x1C6C38u;
label_1c6c38:
    // 0x1c6c38: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c6c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1c6c3c:
    // 0x1c6c3c: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x1c6c3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c44: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C6C44u;
    SET_GPR_U32(ctx, 31, 0x1C6C4Cu);
    ctx->pc = 0x1C6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C44u;
    // 0x1c6c48: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C6C44u, 0x1C6C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C4Cu;
label_1c6c4c:
    // 0x1c6c4c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C6C4Cu;
    {
        const bool branch_taken_0x1c6c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C4Cu;
        // 0x1c6c50: 0x3c090026  lui         $t1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c4c) {
            ctx->pc = 0x1C6C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c38;
        }
    }
    ctx->pc = 0x1C6C54u;
    // 0x1c6c54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c6c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c58: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c6c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c5c: 0x2529b808  addiu       $t1, $t1, -0x47F8
    ctx->pc = 0x1c6c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294948872));
    // 0x1c6c60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c6c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c6c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c68: 0xc071bec  jal         func_1C6FB0
    ctx->pc = 0x1C6C68u;
    SET_GPR_U32(ctx, 31, 0x1C6C70u);
    ctx->pc = 0x1C6C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C68u;
    // 0x1c6c6c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6FB0u, 0x1C6C68u, 0x1C6C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C70u;
label_1c6c70:
    // 0x1c6c70: 0x7c1000d  bgez        $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x1C6C70u;
    {
        const bool branch_taken_0x1c6c70 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x1C6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C70u;
        // 0x1c6c74: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c70) {
            ctx->pc = 0x1C6CA8u;
            goto label_1c6ca8;
        }
    }
    ctx->pc = 0x1C6C78u;
    // 0x1c6c78: 0xde850000  ld          $a1, 0x0($s4)
    ctx->pc = 0x1c6c78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c6c7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c6c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c84: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6C84u;
    SET_GPR_U32(ctx, 31, 0x1C6C8Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6C84u, 0x1C6C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C8Cu;
label_1c6c8c:
    // 0x1c6c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c90: 0xde850008  ld          $a1, 0x8($s4)
    ctx->pc = 0x1c6c90u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1c6c94: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c6c94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_1c6c98:
    // 0x1c6c98: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6C98u;
    SET_GPR_U32(ctx, 31, 0x1C6CA0u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6C98u, 0x1C6CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CA0u;
label_1c6ca0:
    // 0x1c6ca0: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x1c6ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x1c6ca4: 0x161023  negu        $v0, $s6
    ctx->pc = 0x1c6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
label_1c6ca8:
    // 0x1c6ca8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c6ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6cac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c6cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6cb0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c6cb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6cb4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1c6cb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6cb8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c6cb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6cbc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1c6cbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6cc0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1c6cc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6cc4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1c6cc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c6cc8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1c6cc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c6ccc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1c6cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CD0u;
        // 0x1c6cd4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6CD8u;
}
