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

// Function: WWorldPutOTPacket__FP8WWorldOTP6GcTILEi
// Address: 0x187848 - 0x187980
void WWorldPutOTPacket__FP8WWorldOTP6GcTILEi_0x187848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WWorldPutOTPacket__FP8WWorldOTP6GcTILEi_0x187848");
#endif

    switch (ctx->pc) {
        case 0x187890u: goto label_187890;
        case 0x1878b8u: goto label_1878b8;
        case 0x1878f8u: goto label_1878f8;
        case 0x187904u: goto label_187904;
        case 0x187960u: goto label_187960;
        default: break;
    }

    ctx->pc = 0x187848u;

    // 0x187848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18784c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187850: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x187850u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x187854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x187858: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x187858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18785c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x187860: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x187860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187864: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x187864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x187868: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x187868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18786c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18786cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x187870: 0x2610d640  addiu       $s0, $s0, -0x29C0
    ctx->pc = 0x187870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956608));
    // 0x187874: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x187874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x187878: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x187878u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18787c: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x18787cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x187880: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x187880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x187884: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x187884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x187888: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x187888u;
    SET_GPR_U32(ctx, 31, 0x187890u);
    ctx->pc = 0x18788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187888u;
    // 0x18788c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x187888u, 0x187890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187890u;
label_187890:
    // 0x187890: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x187890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187894: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x187894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x187898: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x187898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18789c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18789cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878a0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1878a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1878a4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1878a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1878a8: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x1878a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x1878ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1878acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1878b0: 0xc0611ae  jal         func_1846B8
    ctx->pc = 0x1878B0u;
    SET_GPR_U32(ctx, 31, 0x1878B8u);
    ctx->pc = 0x1878B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878B0u;
    // 0x1878b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1846B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1846B8u, 0x1878B0u, 0x1878B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878B8u;
label_1878b8:
    // 0x1878b8: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1878b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1878bc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1878bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1878c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1878c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1878c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1878c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1878c8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1878c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1878cc: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1878ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1878d0: 0x24c6d000  addiu       $a2, $a2, -0x3000
    ctx->pc = 0x1878d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955008));
    // 0x1878d4: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x1878d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x1878d8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1878d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1878dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1878dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1878e0: 0x46302b  sltu        $a2, $v0, $a2
    ctx->pc = 0x1878e0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1878e4: 0x24847f18  addiu       $a0, $a0, 0x7F18
    ctx->pc = 0x1878e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32536));
    // 0x1878e8: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1878E8u;
    {
        const bool branch_taken_0x1878e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1878ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1878E8u;
        // 0x1878ec: 0xae850008  sw          $a1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1878e8) {
            ctx->pc = 0x187910u;
            goto label_187910;
        }
    }
    ctx->pc = 0x1878F0u;
    // 0x1878f0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1878F0u;
    SET_GPR_U32(ctx, 31, 0x1878F8u);
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1878F0u, 0x1878F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878F8u;
label_1878f8:
    // 0x1878f8: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x1878f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x1878fc: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1878FCu;
    SET_GPR_U32(ctx, 31, 0x187904u);
    ctx->pc = 0x187900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1878FCu;
    // 0x187900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1878FCu, 0x187904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187904u;
label_187904:
    // 0x187904: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x187904u;
    {
        const bool branch_taken_0x187904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187904u;
        // 0x187908: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187904) {
            ctx->pc = 0x187918u;
            goto label_187918;
        }
    }
    ctx->pc = 0x18790Cu;
    // 0x18790c: 0x0  nop
    ctx->pc = 0x18790cu;
    // NOP
label_187910:
    // 0x187910: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x187910u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x187914: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x187914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_187918:
    // 0x187918: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x187918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x18791c: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x18791cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x187920: 0x3c061300  lui         $a2, 0x1300
    ctx->pc = 0x187920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4864 << 16));
    // 0x187924: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x187924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x187928: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18792c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x18792cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x187930: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x187930u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x187934: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x187934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x187938: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x187938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x18793c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x18793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x187940: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x187940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x187944: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x187944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x187948: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x187948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x18794c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x18794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x187950: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x187950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x187954: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x187954u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x187958: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x187958u;
    SET_GPR_U32(ctx, 31, 0x187960u);
    ctx->pc = 0x18795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187958u;
    // 0x18795c: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x187958u, 0x187960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187960u;
label_187960:
    // 0x187960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187968: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x187968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18796c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18796cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x187970: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x187970u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187974: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x187974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x187978: 0x3e00008  jr          $ra
    ctx->pc = 0x187978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187978u;
        // 0x18797c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187980u;
}
