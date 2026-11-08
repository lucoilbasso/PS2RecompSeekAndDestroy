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

// Function: Ap2DPanelLoadImageInfo__FP15BsSCDEntControlP10WImageInfo
// Address: 0x101830 - 0x101aa8
void Ap2DPanelLoadImageInfo__FP15BsSCDEntControlP10WImageInfo_0x101830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ap2DPanelLoadImageInfo__FP15BsSCDEntControlP10WImageInfo_0x101830");
#endif

    switch (ctx->pc) {
        case 0x10185cu: goto label_10185c;
        case 0x101868u: goto label_101868;
        case 0x101888u: goto label_101888;
        case 0x101894u: goto label_101894;
        case 0x10197cu: goto label_10197c;
        default: break;
    }

    ctx->pc = 0x101830u;

    // 0x101830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x101830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x101834: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x101834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x101838: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x101838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10183c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10183cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101840: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x101840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x101844: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x101844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x101848: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x101848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10184c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10184cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x101850: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x101850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x101854: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101854u;
    SET_GPR_U32(ctx, 31, 0x10185Cu);
    ctx->pc = 0x101858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101854u;
    // 0x101858: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101854u, 0x10185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10185Cu;
label_10185c:
    // 0x10185c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101860: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101860u;
    SET_GPR_U32(ctx, 31, 0x101868u);
    ctx->pc = 0x101864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101860u;
    // 0x101864: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101860u, 0x101868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101868u;
label_101868:
    // 0x101868: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x101868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10186c: 0x32a2000f  andi        $v0, $s5, 0xF
    ctx->pc = 0x10186cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)15);
    // 0x101870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x101870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x101874: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x101874u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x101878: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x101878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10187c: 0x8e10af48  lw          $s0, -0x50B8($s0)
    ctx->pc = 0x10187cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946632)));
    // 0x101880: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101880u;
    SET_GPR_U32(ctx, 31, 0x101888u);
    ctx->pc = 0x101884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101880u;
    // 0x101884: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101880u, 0x101888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101888u;
label_101888:
    // 0x101888: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10188c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10188Cu;
    SET_GPR_U32(ctx, 31, 0x101894u);
    ctx->pc = 0x101890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10188Cu;
    // 0x101890: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10188Cu, 0x101894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101894u;
label_101894:
    // 0x101894: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x101894u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101898: 0xa6500004  sh          $s0, 0x4($s2)
    ctx->pc = 0x101898u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x10189c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x10189cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1018a0: 0x2681818  mult        $v1, $s3, $t0
    ctx->pc = 0x1018a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1018a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1018a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1018a8: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x1018a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1018ac: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x1018acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1018b0: 0xa6510000  sh          $s1, 0x0($s2)
    ctx->pc = 0x1018b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x1018b4: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1018b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1018b8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1018b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1018bc: 0xa653001c  sh          $s3, 0x1C($s2)
    ctx->pc = 0x1018bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 19));
    // 0x1018c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1018c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1018c4: 0xa648001e  sh          $t0, 0x1E($s2)
    ctx->pc = 0x1018c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 8));
    // 0x1018c8: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1018c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1018cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1018ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1018d0: 0x8c84af80  lw          $a0, -0x5080($a0)
    ctx->pc = 0x1018d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946688)));
    // 0x1018d4: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1018d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1018d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1018d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1018dc: 0x8ca5afa0  lw          $a1, -0x5060($a1)
    ctx->pc = 0x1018dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294946720)));
    // 0x1018e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1018e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1018e4: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1018e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1018e8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1018e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1018ec: 0x8cc6afc0  lw          $a2, -0x5040($a2)
    ctx->pc = 0x1018ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946752)));
    // 0x1018f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1018f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1018f4: 0xa31806  srlv        $v1, $v1, $a1
    ctx->pc = 0x1018f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x1018f8: 0x14c70005  bne         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1018F8u;
    {
        const bool branch_taken_0x1018f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x1018FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1018F8u;
        // 0x1018fc: 0xa6430006  sh          $v1, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1018f8) {
            ctx->pc = 0x101910u;
            goto label_101910;
        }
    }
    ctx->pc = 0x101900u;
    // 0x101900: 0x2662003f  addiu       $v0, $s3, 0x3F
    ctx->pc = 0x101900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 63));
    // 0x101904: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x101904u;
    {
        const bool branch_taken_0x101904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101904u;
        // 0x101908: 0x21183  sra         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101904) {
            ctx->pc = 0x10191Cu;
            goto label_10191c;
        }
    }
    ctx->pc = 0x10190Cu;
    // 0x10190c: 0x0  nop
    ctx->pc = 0x10190cu;
    // NOP
label_101910:
    // 0x101910: 0x2662007f  addiu       $v0, $s3, 0x7F
    ctx->pc = 0x101910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 127));
    // 0x101914: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x101914u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x101918: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x101918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_10191c:
    // 0x10191c: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x10191cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x101920: 0x71401004  plzcw       $v0, $t2
    ctx->pc = 0x101920u;
    { uint64_t v = GPR_U64(ctx, 10); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 2, out); }
    // 0x101924: 0x70021488  pextlw      $v0, $zero, $v0
    ctx->pc = 0x101924u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x101928: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x101928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x10192c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x10192cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x101930: 0xa5220018  sh          $v0, 0x18($t1)
    ctx->pc = 0x101930u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x101934: 0x71601804  plzcw       $v1, $t3
    ctx->pc = 0x101934u;
    { uint64_t v = GPR_U64(ctx, 11); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x101938: 0x70031c88  pextlw      $v1, $zero, $v1
    ctx->pc = 0x101938u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x10193c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10193cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101940: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x101940u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x101944: 0xfd200038  sd          $zero, 0x38($t1)
    ctx->pc = 0x101944u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 56), GPR_U64(ctx, 0));
    // 0x101948: 0xa524001a  sh          $a0, 0x1A($t1)
    ctx->pc = 0x101948u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 26), (uint16_t)GPR_U32(ctx, 4));
    // 0x10194c: 0x96430018  lhu         $v1, 0x18($s2)
    ctx->pc = 0x10194cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x101950: 0x651004  sllv        $v0, $a1, $v1
    ctx->pc = 0x101950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x101954: 0x12620002  beq         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x101954u;
    {
        const bool branch_taken_0x101954 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x101958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101954u;
        // 0x101958: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101954) {
            ctx->pc = 0x101960u;
            goto label_101960;
        }
    }
    ctx->pc = 0x10195Cu;
    // 0x10195c: 0xa6420018  sh          $v0, 0x18($s2)
    ctx->pc = 0x10195cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 2));
label_101960:
    // 0x101960: 0x9643001a  lhu         $v1, 0x1A($s2)
    ctx->pc = 0x101960u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x101964: 0x651004  sllv        $v0, $a1, $v1
    ctx->pc = 0x101964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x101968: 0x11020002  beq         $t0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x101968u;
    {
        const bool branch_taken_0x101968 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x10196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101968u;
        // 0x10196c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101968) {
            ctx->pc = 0x101974u;
            goto label_101974;
        }
    }
    ctx->pc = 0x101970u;
    // 0x101970: 0xa642001a  sh          $v0, 0x1A($s2)
    ctx->pc = 0x101970u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 2));
label_101974:
    // 0x101974: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x101974u;
    SET_GPR_U32(ctx, 31, 0x10197Cu);
    ctx->pc = 0x101978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101974u;
    // 0x101978: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x101974u, 0x10197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10197Cu;
label_10197c:
    // 0x10197c: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x10197cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x101980: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x101980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101984: 0x32a20100  andi        $v0, $s5, 0x100
    ctx->pc = 0x101984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
    // 0x101988: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x101988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10198c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10198cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x101990: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x101990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x101994: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x101994u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x101998: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x101998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x10199c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1019a0: 0x8c42afe0  lw          $v0, -0x5020($v0)
    ctx->pc = 0x1019a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946784)));
    // 0x1019a4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1019a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1019a8: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1019A8u;
    {
        const bool branch_taken_0x1019a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1019ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019A8u;
        // 0x1019ac: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1019a8) {
            ctx->pc = 0x1019BCu;
            goto label_1019bc;
        }
    }
    ctx->pc = 0x1019B0u;
    // 0x1019b0: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1019b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x1019b4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1019b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1019b8: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x1019b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_1019bc:
    // 0x1019bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1019bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1019c0: 0xa645000c  sh          $a1, 0xC($s2)
    ctx->pc = 0x1019c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x1019c4: 0xa6470008  sh          $a3, 0x8($s2)
    ctx->pc = 0x1019c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x1019c8: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x1019c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1019cc: 0xa6420022  sh          $v0, 0x22($s2)
    ctx->pc = 0x1019ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x1019d0: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x1019d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1019d4: 0x94bbc  dsll32      $t1, $t1, 14
    ctx->pc = 0x1019d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 14));
    // 0x1019d8: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x1019d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x1019dc: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1019dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1019e0: 0x844f8  dsll        $t0, $t0, 19
    ctx->pc = 0x1019e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 19);
    // 0x1019e4: 0xa6460020  sh          $a2, 0x20($s2)
    ctx->pc = 0x1019e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x1019e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1019e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1019ec: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x1019ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1019f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1019f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1019f4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1019f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1019f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1019f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1019fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1019fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x101a00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101a00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101a04: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x101a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x101a08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101a0c: 0x8c42af80  lw          $v0, -0x5080($v0)
    ctx->pc = 0x101a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946688)));
    // 0x101a10: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x101a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x101a14: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x101a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x101a18: 0x8c84afa0  lw          $a0, -0x5060($a0)
    ctx->pc = 0x101a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946720)));
    // 0x101a1c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x101a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x101a20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x101a20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101a24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x101a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x101a28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101a2c: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x101a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x101a30: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x101a30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x101a34: 0xa6400030  sh          $zero, 0x30($s2)
    ctx->pc = 0x101a34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x101a38: 0x96460018  lhu         $a2, 0x18($s2)
    ctx->pc = 0x101a38u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x101a3c: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x101a3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x101a40: 0x96470002  lhu         $a3, 0x2($s2)
    ctx->pc = 0x101a40u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x101a44: 0x636b8  dsll        $a2, $a2, 26
    ctx->pc = 0x101a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 26);
    // 0x101a48: 0x9644001a  lhu         $a0, 0x1A($s2)
    ctx->pc = 0x101a48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x101a4c: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x101a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x101a50: 0x9645000c  lhu         $a1, 0xC($s2)
    ctx->pc = 0x101a50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x101a54: 0x73bb8  dsll        $a3, $a3, 14
    ctx->pc = 0x101a54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 14);
    // 0x101a58: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x101a58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x101a5c: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x101a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x101a60: 0x52cfc  dsll32      $a1, $a1, 19
    ctx->pc = 0x101a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 19));
    // 0x101a64: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x101a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x101a68: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x101a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x101a6c: 0x9645001c  lhu         $a1, 0x1C($s2)
    ctx->pc = 0x101a6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x101a70: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x101a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x101a74: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x101a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x101a78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x101a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x101a7c: 0x9644001e  lhu         $a0, 0x1E($s2)
    ctx->pc = 0x101a7cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x101a80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x101a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x101a84: 0xa6450014  sh          $a1, 0x14($s2)
    ctx->pc = 0x101a84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x101a88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x101a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x101a8c: 0xa6440016  sh          $a0, 0x16($s2)
    ctx->pc = 0x101a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 22), (uint16_t)GPR_U32(ctx, 4));
    // 0x101a90: 0xfe420038  sd          $v0, 0x38($s2)
    ctx->pc = 0x101a90u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 2));
    // 0x101a94: 0xa6400010  sh          $zero, 0x10($s2)
    ctx->pc = 0x101a94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x101a98: 0xa6400012  sh          $zero, 0x12($s2)
    ctx->pc = 0x101a98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x101a9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x101AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AA0u;
        // 0x101aa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101AA8u;
}
