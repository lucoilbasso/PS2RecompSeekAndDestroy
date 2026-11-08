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

// Function: DoProjectionViewPostSet__6WcViewP7WcWorld
// Address: 0x1870b0 - 0x1872c0
void DoProjectionViewPostSet__6WcViewP7WcWorld_0x1870b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoProjectionViewPostSet__6WcViewP7WcWorld_0x1870b0");
#endif

    switch (ctx->pc) {
        case 0x1870d8u: goto label_1870d8;
        case 0x187198u: goto label_187198;
        case 0x1871a4u: goto label_1871a4;
        case 0x1871e0u: goto label_1871e0;
        case 0x18720cu: goto label_18720c;
        case 0x187218u: goto label_187218;
        case 0x187238u: goto label_187238;
        case 0x187240u: goto label_187240;
        case 0x187278u: goto label_187278;
        case 0x1872a8u: goto label_1872a8;
        default: break;
    }

    ctx->pc = 0x1870b0u;

    // 0x1870b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1870b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1870b4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1870b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1870b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1870b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1870bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1870bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1870c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1870c4: 0x2451d640  addiu       $s1, $v0, -0x29C0
    ctx->pc = 0x1870c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
    // 0x1870c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1870c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1870cc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1870ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1870d0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1870D0u;
    SET_GPR_U32(ctx, 31, 0x1870D8u);
    ctx->pc = 0x1870D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870D0u;
    // 0x1870d4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1870D0u, 0x1870D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870D8u;
label_1870d8:
    // 0x1870d8: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1870d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1870dc: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1870dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1870e0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1870e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x1870e4: 0x34e70010  ori         $a3, $a3, 0x10
    ctx->pc = 0x1870e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
    // 0x1870e8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1870e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1870ec: 0xae280004  sw          $t0, 0x4($s1)
    ctx->pc = 0x1870ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 8));
    // 0x1870f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1870f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1870f4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1870F4u;
    {
        const bool branch_taken_0x1870f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1870F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870F4u;
        // 0x1870f8: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1870f4) {
            ctx->pc = 0x187154u;
            goto label_187154;
        }
    }
    ctx->pc = 0x1870FCu;
    // 0x1870fc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1870fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x187100: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x187100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x187104: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x187104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x187108: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x187108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x18710c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x18710cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x187110: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x187110u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x187114: 0x34e70020  ori         $a3, $a3, 0x20
    ctx->pc = 0x187114u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
    // 0x187118: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x187118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18711c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x18711cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x187120: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x187120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x187124: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x187124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x187128: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x187128u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x18712c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x187130: 0xfd250000  sd          $a1, 0x0($t1)
    ctx->pc = 0x187130u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 5));
    // 0x187134: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x187134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x187138: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x187138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18713c: 0xdc4304b0  ld          $v1, 0x4B0($v0)
    ctx->pc = 0x18713cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x187140: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x187140u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x187144: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x187144u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x187148: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x187148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x18714c: 0x34e70030  ori         $a3, $a3, 0x30
    ctx->pc = 0x18714cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)48);
    // 0x187150: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x187150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_187154:
    // 0x187154: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x187154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x187158: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x187158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18715c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x187160: 0xe22024  and         $a0, $a3, $v0
    ctx->pc = 0x187160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x187164: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x187164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x187168: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x187168u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18716c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18716cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x187170: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x187170u;
    {
        const bool branch_taken_0x187170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187170u;
        // 0x187174: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187170) {
            ctx->pc = 0x1872A0u;
            goto label_1872a0;
        }
    }
    ctx->pc = 0x187178u;
    // 0x187178: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x187178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x18717c: 0x2442d000  addiu       $v0, $v0, -0x3000
    ctx->pc = 0x18717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955008));
    // 0x187180: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x187180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x187184: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x187184u;
    {
        const bool branch_taken_0x187184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187184u;
        // 0x187188: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187184) {
            ctx->pc = 0x1871B0u;
            goto label_1871b0;
        }
    }
    ctx->pc = 0x18718Cu;
    // 0x18718c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x18718cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x187190: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x187190u;
    SET_GPR_U32(ctx, 31, 0x187198u);
    ctx->pc = 0x187194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187190u;
    // 0x187194: 0x24847ef0  addiu       $a0, $a0, 0x7EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x187190u, 0x187198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187198u;
label_187198:
    // 0x187198: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18719c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x18719Cu;
    SET_GPR_U32(ctx, 31, 0x1871A4u);
    ctx->pc = 0x1871A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18719Cu;
    // 0x1871a0: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x18719Cu, 0x1871A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871A4u;
label_1871a4:
    // 0x1871a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1871A4u;
    {
        const bool branch_taken_0x1871a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871A4u;
        // 0x1871a8: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871a4) {
            ctx->pc = 0x1871B8u;
            goto label_1871b8;
        }
    }
    ctx->pc = 0x1871ACu;
    // 0x1871ac: 0x0  nop
    ctx->pc = 0x1871acu;
    // NOP
label_1871b0:
    // 0x1871b0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1871b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x1871b4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1871b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1871b8:
    // 0x1871b8: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x1871b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x1871bc: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x1871bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1871c0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1871c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1871c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1871c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1871c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1871cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1871ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1871d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1871d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1871d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1871d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1871d8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1871D8u;
    SET_GPR_U32(ctx, 31, 0x1871E0u);
    ctx->pc = 0x1871DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1871D8u;
    // 0x1871dc: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1871D8u, 0x1871E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1871E0u;
label_1871e0:
    // 0x1871e0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1871e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1871e4: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x1871e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
    // 0x1871e8: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x1871e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x1871ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1871ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1871f0: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x1871f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x1871f4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1871f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x1871f8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1871f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1871fc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1871fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x187200: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x187200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x187204: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x187204u;
    SET_GPR_U32(ctx, 31, 0x18720Cu);
    ctx->pc = 0x187208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187204u;
    // 0x187208: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x187204u, 0x18720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18720Cu;
label_18720c:
    // 0x18720c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18720cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x187210: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x187210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x187214: 0x0  nop
    ctx->pc = 0x187214u;
    // NOP
label_187218:
    // 0x187218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x187218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18721c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18721cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x187220: 0x0  nop
    ctx->pc = 0x187220u;
    // NOP
    // 0x187224: 0x0  nop
    ctx->pc = 0x187224u;
    // NOP
    // 0x187228: 0x0  nop
    ctx->pc = 0x187228u;
    // NOP
    // 0x18722c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18722Cu;
    {
        const bool branch_taken_0x18722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18722c) {
            ctx->pc = 0x187218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187218;
        }
    }
    ctx->pc = 0x187234u;
    // 0x187234: 0x0  nop
    ctx->pc = 0x187234u;
    // NOP
label_187238:
    // 0x187238: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x187238u;
    SET_GPR_U32(ctx, 31, 0x187240u);
    ctx->pc = 0x18723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187238u;
    // 0x18723c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x187238u, 0x187240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187240u;
label_187240:
    // 0x187240: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x187240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x187244: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x187244u;
    {
        const bool branch_taken_0x187244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x187248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187244u;
        // 0x187248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187244) {
            ctx->pc = 0x187238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187238;
        }
    }
    ctx->pc = 0x18724Cu;
    // 0x18724c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18724cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x187250: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x187250u;
    {
        const bool branch_taken_0x187250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x187254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187250u;
        // 0x187254: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187250) {
            ctx->pc = 0x187270u;
            goto label_187270;
        }
    }
    ctx->pc = 0x187258u;
    // 0x187258: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x187258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x18725c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18725cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x187260: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x187264: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x187264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x187268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187268u;
    {
        const bool branch_taken_0x187268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187268u;
        // 0x18726c: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187268) {
            ctx->pc = 0x187278u;
            goto label_187278;
        }
    }
    ctx->pc = 0x187270u;
label_187270:
    // 0x187270: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x187270u;
    SET_GPR_U32(ctx, 31, 0x187278u);
    ctx->pc = 0x187274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187270u;
    // 0x187274: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x187270u, 0x187278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187278u;
label_187278:
    // 0x187278: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x187278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x18727c: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x18727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x187280: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187284: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x187284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x187288: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x187288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x18728c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x18728cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x187290: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x187290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x187294: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x187294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x187298: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187298u;
    {
        const bool branch_taken_0x187298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187298u;
        // 0x18729c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187298) {
            ctx->pc = 0x1872A8u;
            goto label_1872a8;
        }
    }
    ctx->pc = 0x1872A0u;
label_1872a0:
    // 0x1872a0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1872A0u;
    SET_GPR_U32(ctx, 31, 0x1872A8u);
    ctx->pc = 0x1872A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872A0u;
    // 0x1872a4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1872A0u, 0x1872A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872A8u;
label_1872a8:
    // 0x1872a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1872a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1872ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1872acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1872b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1872b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1872b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1872b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1872b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1872B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1872BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872B8u;
        // 0x1872bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1872B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1872C0u;
}
