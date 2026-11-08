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

// Function: DrawFunc__9WcHitDrawP8WcEntity
// Address: 0x189840 - 0x189dcc
void DrawFunc__9WcHitDrawP8WcEntity_0x189840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__9WcHitDrawP8WcEntity_0x189840");
#endif

    switch (ctx->pc) {
        case 0x18989cu: goto label_18989c;
        case 0x1898a8u: goto label_1898a8;
        case 0x1898e8u: goto label_1898e8;
        case 0x1898f0u: goto label_1898f0;
        case 0x189914u: goto label_189914;
        case 0x189a38u: goto label_189a38;
        case 0x189a58u: goto label_189a58;
        case 0x189accu: goto label_189acc;
        case 0x189ad8u: goto label_189ad8;
        case 0x189af8u: goto label_189af8;
        case 0x189b00u: goto label_189b00;
        case 0x189b28u: goto label_189b28;
        case 0x189b98u: goto label_189b98;
        case 0x189ba0u: goto label_189ba0;
        case 0x189bc4u: goto label_189bc4;
        case 0x189c00u: goto label_189c00;
        case 0x189c14u: goto label_189c14;
        case 0x189c90u: goto label_189c90;
        case 0x189c98u: goto label_189c98;
        case 0x189cb8u: goto label_189cb8;
        case 0x189cc0u: goto label_189cc0;
        case 0x189ce8u: goto label_189ce8;
        case 0x189d3cu: goto label_189d3c;
        case 0x189d64u: goto label_189d64;
        case 0x189d6cu: goto label_189d6c;
        case 0x189d80u: goto label_189d80;
        default: break;
    }

    ctx->pc = 0x189840u;

    // 0x189840: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x189840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x189844: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x189844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x189848: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x189848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x18984c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18984cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189850: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x189850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x189854: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x189854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x189858: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x189858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x18985c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x18985cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x189860: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x189860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x189864: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x189864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x189868: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x189868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x18986c: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x18986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x189870: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x189870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x189874: 0x8e360150  lw          $s6, 0x150($s1)
    ctx->pc = 0x189874u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x189878: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x189878u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x18987c: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x18987cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x189880: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x189880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x189884: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x189884u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x189888: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x189888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18988c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18988Cu;
    {
        const bool branch_taken_0x18988c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x189890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18988Cu;
        // 0x189890: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18988c) {
            ctx->pc = 0x18989Cu;
            goto label_18989c;
        }
    }
    ctx->pc = 0x189894u;
    // 0x189894: 0xc061920  jal         func_186480
    ctx->pc = 0x189894u;
    SET_GPR_U32(ctx, 31, 0x18989Cu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x189894u, 0x18989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18989Cu;
label_18989c:
    // 0x18989c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898a0: 0xc061422  jal         func_185088
    ctx->pc = 0x1898A0u;
    SET_GPR_U32(ctx, 31, 0x1898A8u);
    ctx->pc = 0x1898A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898A0u;
    // 0x1898a4: 0x263400e0  addiu       $s4, $s1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1898A0u, 0x1898A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898A8u;
label_1898a8:
    // 0x1898a8: 0x8ed50014  lw          $s5, 0x14($s6)
    ctx->pc = 0x1898a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x1898ac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1898acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1898b0: 0x8ede0018  lw          $fp, 0x18($s6)
    ctx->pc = 0x1898b0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x1898b4: 0x2453d650  addiu       $s3, $v0, -0x29B0
    ctx->pc = 0x1898b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x1898b8: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1898b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x1898bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1898BCu;
    {
        const bool branch_taken_0x1898bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1898C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898BCu;
        // 0x1898c0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898bc) {
            ctx->pc = 0x1898E0u;
            goto label_1898e0;
        }
    }
    ctx->pc = 0x1898C4u;
    // 0x1898c4: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x1898c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x1898c8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1898c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1898cc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1898ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1898d0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1898d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1898d4: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1898d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1898d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1898D8u;
    {
        const bool branch_taken_0x1898d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1898DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1898D8u;
        // 0x1898dc: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898d8) {
            ctx->pc = 0x189914u;
            goto label_189914;
        }
    }
    ctx->pc = 0x1898E0u;
label_1898e0:
    // 0x1898e0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1898E0u;
    SET_GPR_U32(ctx, 31, 0x1898E8u);
    ctx->pc = 0x1898E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898E0u;
    // 0x1898e4: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1898E0u, 0x1898E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898E8u;
label_1898e8:
    // 0x1898e8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1898E8u;
    SET_GPR_U32(ctx, 31, 0x1898F0u);
    ctx->pc = 0x1898ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898E8u;
    // 0x1898ec: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1898E8u, 0x1898F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898F0u;
label_1898f0:
    // 0x1898f0: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x1898f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1898f4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x1898f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1898f8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1898f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1898fc: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1898fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x189900: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x189900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x189904: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x189908: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x189908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
    // 0x18990c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x18990Cu;
    SET_GPR_U32(ctx, 31, 0x189914u);
    ctx->pc = 0x189910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18990Cu;
    // 0x189910: 0xae620080  sw          $v0, 0x80($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x18990Cu, 0x189914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189914u;
label_189914:
    // 0x189914: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x189914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189918: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x189918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18991c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x18991cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x189920: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x189920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x189924: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x189924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x189928: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x189928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x18992c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x18992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x189930: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x189930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x189934: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x189934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x189938: 0x24900060  addiu       $s0, $a0, 0x60
    ctx->pc = 0x189938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x18993c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x18993cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x189940: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x189940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x189944: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x189944u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x189948: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x189948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x18994c: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x18994cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x189950: 0x24890040  addiu       $t1, $a0, 0x40
    ctx->pc = 0x189950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x189954: 0x90a7ed80  lbu         $a3, -0x1280($a1)
    ctx->pc = 0x189954u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x21ED80u));
    // 0x189958: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x189958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18995c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x18995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x189960: 0x3c0a0003  lui         $t2, 0x3
    ctx->pc = 0x189960u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3 << 16));
    // 0x189964: 0x354a000d  ori         $t2, $t2, 0xD
    ctx->pc = 0x189964u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)13);
    // 0x189968: 0x2081823  subu        $v1, $s0, $t0
    ctx->pc = 0x189968u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x18996c: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x18996cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x189970: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x189970u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x189974: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x189974u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x189978: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x189978u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x18997c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x18997cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x189980: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x189980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x189984: 0xfd2a0000  sd          $t2, 0x0($t1)
    ctx->pc = 0x189984u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 10));
    // 0x189988: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x189988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18998c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x189990: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x189990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x189994: 0xdf868c90  ld          $a2, -0x7370($gp)
    ctx->pc = 0x189994u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x189998: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18999c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x18999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1899a0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1899a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1899a4: 0x2447dd80  addiu       $a3, $v0, -0x2280
    ctx->pc = 0x1899a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958464));
    // 0x1899a8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1899a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1899ac: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1899acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1899b0: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1899b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1899b4: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1899b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1899b8: 0xfd050008  sd          $a1, 0x8($t0)
    ctx->pc = 0x1899b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 5));
    // 0x1899bc: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1899bcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1899c0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x1899c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1899c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1899C4u;
    {
        const bool branch_taken_0x1899c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899C4u;
        // 0x1899c8: 0x24e90010  addiu       $t1, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899c4) {
            ctx->pc = 0x1899F0u;
            goto label_1899f0;
        }
    }
    ctx->pc = 0x1899CCu;
    // 0x1899cc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1899ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1899d0: 0x3463444e  ori         $v1, $v1, 0x444E
    ctx->pc = 0x1899d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17486);
    // 0x1899d4: 0x3c025022  lui         $v0, 0x5022
    ctx->pc = 0x1899d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20514 << 16));
    // 0x1899d8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1899d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1899dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1899dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1899e0: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x1899e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x1899e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1899E4u;
    {
        const bool branch_taken_0x1899e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899E4u;
        // 0x1899e8: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899e4) {
            ctx->pc = 0x189A08u;
            goto label_189a08;
        }
    }
    ctx->pc = 0x1899ECu;
    // 0x1899ec: 0x0  nop
    ctx->pc = 0x1899ecu;
    // NOP
label_1899f0:
    // 0x1899f0: 0x2403444e  addiu       $v1, $zero, 0x444E
    ctx->pc = 0x1899f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17486));
    // 0x1899f4: 0x3c024021  lui         $v0, 0x4021
    ctx->pc = 0x1899f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16417 << 16));
    // 0x1899f8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1899f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1899fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1899fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x189a00: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x189a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x189a04: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x189a04u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_189a08:
    // 0x189a08: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x189a08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x189a0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189a10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189a18: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x189a18u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
    // 0x189a1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x189a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a20: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x189a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x189a24: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x189a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a28: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x189a28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x189a2c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x189a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a30: 0xc062786  jal         func_189E18
    ctx->pc = 0x189A30u;
    SET_GPR_U32(ctx, 31, 0x189A38u);
    ctx->pc = 0x189A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189A30u;
    // 0x189a34: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E18u, 0x189A30u, 0x189A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A38u;
label_189a38:
    // 0x189a38: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x189a38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x189a3c: 0x5040007c  beql        $v0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x189A3Cu;
    {
        const bool branch_taken_0x189a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a3c) {
            ctx->pc = 0x189A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189A3Cu;
            // 0x189a40: 0x8fb10000  lw          $s1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189C30u;
            goto label_189c30;
        }
    }
    ctx->pc = 0x189A44u;
    // 0x189a44: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x189a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x189a48: 0xafb10068  sw          $s1, 0x68($sp)
    ctx->pc = 0x189a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 17));
    // 0x189a4c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x189a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x189a50: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x189a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a54: 0x0  nop
    ctx->pc = 0x189a54u;
    // NOP
label_189a58:
    // 0x189a58: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x189a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189a5c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x189a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x189a60: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x189a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x189a64: 0x2071823  subu        $v1, $s0, $a3
    ctx->pc = 0x189a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x189a68: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x189a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x189a6c: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x189a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x189a70: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x189a70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x189a74: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x189a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x189a78: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x189A78u;
    {
        const bool branch_taken_0x189a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189A78u;
        // 0x189a7c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a78) {
            ctx->pc = 0x189BE0u;
            goto label_189be0;
        }
    }
    ctx->pc = 0x189A80u;
    // 0x189a80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x189a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189a84: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x189a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x189a88: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x189a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x189a8c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x189a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x189a90: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x189a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x189a94: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x189a94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x189a98: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x189a98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x189a9c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x189a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x189aa0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x189aa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189aa4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x189aa8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x189aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x189aac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x189aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x189ab0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x189ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x189ab4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x189ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x189ab8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x189ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x189abc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x189abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x189ac0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x189ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x189ac4: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x189AC4u;
    SET_GPR_U32(ctx, 31, 0x189ACCu);
    ctx->pc = 0x189AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AC4u;
    // 0x189ac8: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x189AC4u, 0x189ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189ACCu;
label_189acc:
    // 0x189acc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x189accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x189ad0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x189ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x189ad4: 0x0  nop
    ctx->pc = 0x189ad4u;
    // NOP
label_189ad8:
    // 0x189ad8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x189ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189adc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x189adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x189ae0: 0x0  nop
    ctx->pc = 0x189ae0u;
    // NOP
    // 0x189ae4: 0x0  nop
    ctx->pc = 0x189ae4u;
    // NOP
    // 0x189ae8: 0x0  nop
    ctx->pc = 0x189ae8u;
    // NOP
    // 0x189aec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x189AECu;
    {
        const bool branch_taken_0x189aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189aec) {
            ctx->pc = 0x189AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189ad8;
        }
    }
    ctx->pc = 0x189AF4u;
    // 0x189af4: 0x0  nop
    ctx->pc = 0x189af4u;
    // NOP
label_189af8:
    // 0x189af8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x189AF8u;
    SET_GPR_U32(ctx, 31, 0x189B00u);
    ctx->pc = 0x189AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189AF8u;
    // 0x189afc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x189AF8u, 0x189B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B00u;
label_189b00:
    // 0x189b00: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x189b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x189b04: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x189B04u;
    {
        const bool branch_taken_0x189b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x189B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B04u;
        // 0x189b08: 0x14102b  sltu        $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b04) {
            ctx->pc = 0x189AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189af8;
        }
    }
    ctx->pc = 0x189B0Cu;
    // 0x189b0c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x189b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x189b10: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x189B10u;
    {
        const bool branch_taken_0x189b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B10u;
        // 0x189b14: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b10) {
            ctx->pc = 0x189B28u;
            goto label_189b28;
        }
    }
    ctx->pc = 0x189B18u;
    // 0x189b18: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x189b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x189b1c: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x189b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x189b20: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x189B20u;
    SET_GPR_U32(ctx, 31, 0x189B28u);
    ctx->pc = 0x189B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B20u;
    // 0x189b24: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x189B20u, 0x189B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B28u;
label_189b28:
    // 0x189b28: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x189b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x189b2c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x189b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x189b30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x189b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x189b34: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x189b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x189b38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x189b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x189b3c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x189b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x189b40: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x189b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x189b44: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x189b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x189b48: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x189b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x189b4c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x189b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x189b50: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x189b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x189b54: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x189b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x189b58: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x189b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x189b5c: 0x8fb20068  lw          $s2, 0x68($sp)
    ctx->pc = 0x189b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x189b60: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x189b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x189b64: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x189b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x189b68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189B68u;
    {
        const bool branch_taken_0x189b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b68) {
            ctx->pc = 0x189B90u;
            goto label_189b90;
        }
    }
    ctx->pc = 0x189B70u;
    // 0x189b70: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x189b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x189b74: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x189b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x189b78: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x189b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x189b7c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x189b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x189b80: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x189b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x189b84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x189B84u;
    {
        const bool branch_taken_0x189b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B84u;
        // 0x189b88: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b84) {
            ctx->pc = 0x189BC4u;
            goto label_189bc4;
        }
    }
    ctx->pc = 0x189B8Cu;
    // 0x189b8c: 0x0  nop
    ctx->pc = 0x189b8cu;
    // NOP
label_189b90:
    // 0x189b90: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x189B90u;
    SET_GPR_U32(ctx, 31, 0x189B98u);
    ctx->pc = 0x189B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B90u;
    // 0x189b94: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x189B90u, 0x189B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189B98u;
label_189b98:
    // 0x189b98: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x189B98u;
    SET_GPR_U32(ctx, 31, 0x189BA0u);
    ctx->pc = 0x189B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B98u;
    // 0x189b9c: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x189B98u, 0x189BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BA0u;
label_189ba0:
    // 0x189ba0: 0x8e30008c  lw          $s0, 0x8C($s1)
    ctx->pc = 0x189ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x189ba4: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x189ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x189ba8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x189ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x189bac: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x189bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x189bb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x189bb4: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x189bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x189bb8: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x189bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
    // 0x189bbc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x189BBCu;
    SET_GPR_U32(ctx, 31, 0x189BC4u);
    ctx->pc = 0x189BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BBCu;
    // 0x189bc0: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x189BBCu, 0x189BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189BC4u;
label_189bc4:
    // 0x189bc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x189bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189bc8: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x189bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x189bcc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x189bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x189bd0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x189bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x189bd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189BD4u;
    {
        const bool branch_taken_0x189bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BD4u;
        // 0x189bd8: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189bd4) {
            ctx->pc = 0x189BE4u;
            goto label_189be4;
        }
    }
    ctx->pc = 0x189BDCu;
    // 0x189bdc: 0x0  nop
    ctx->pc = 0x189bdcu;
    // NOP
label_189be0:
    // 0x189be0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x189be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_189be4:
    // 0x189be4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189be8: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x189be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x189bec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189BECu;
    {
        const bool branch_taken_0x189bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189BECu;
        // 0x189bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189bec) {
            ctx->pc = 0x189C08u;
            goto label_189c08;
        }
    }
    ctx->pc = 0x189BF4u;
    // 0x189bf4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x189bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189bf8: 0xc062808  jal         func_18A020
    ctx->pc = 0x189BF8u;
    SET_GPR_U32(ctx, 31, 0x189C00u);
    ctx->pc = 0x189BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189BF8u;
    // 0x189bfc: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A020u, 0x189BF8u, 0x189C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C00u;
label_189c00:
    // 0x189c00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x189C00u;
    {
        const bool branch_taken_0x189c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C00u;
        // 0x189c04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c00) {
            ctx->pc = 0x189C18u;
            goto label_189c18;
        }
    }
    ctx->pc = 0x189C08u;
label_189c08:
    // 0x189c08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x189c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c0c: 0xc0627ba  jal         func_189EE8
    ctx->pc = 0x189C0Cu;
    SET_GPR_U32(ctx, 31, 0x189C14u);
    ctx->pc = 0x189C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C0Cu;
    // 0x189c10: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EE8u, 0x189C0Cu, 0x189C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C14u;
label_189c14:
    // 0x189c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x189c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189c18:
    // 0x189c18: 0x96c20002  lhu         $v0, 0x2($s6)
    ctx->pc = 0x189c18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x189c1c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x189c1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x189c20: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x189c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x189c24: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x189C24u;
    {
        const bool branch_taken_0x189c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C24u;
        // 0x189c28: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c24) {
            ctx->pc = 0x189A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189a58;
        }
    }
    ctx->pc = 0x189C2Cu;
    // 0x189c2c: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x189c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_189c30:
    // 0x189c30: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x189c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x189c34: 0x2071023  subu        $v0, $s0, $a3
    ctx->pc = 0x189c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x189c38: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x189c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x189c3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x189c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x189c40: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x189C40u;
    {
        const bool branch_taken_0x189c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189C40u;
        // 0x189c44: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189c40) {
            ctx->pc = 0x189D28u;
            goto label_189d28;
        }
    }
    ctx->pc = 0x189C48u;
    // 0x189c48: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x189c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189c4c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x189c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x189c50: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x189c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x189c54: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x189c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x189c58: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x189c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x189c5c: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x189c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x189c60: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x189c60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x189c64: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x189c64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x189c68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x189c6c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x189c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x189c70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x189c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x189c74: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x189c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x189c78: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x189c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x189c7c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x189c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x189c80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x189c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x189c84: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x189c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x189c88: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x189C88u;
    SET_GPR_U32(ctx, 31, 0x189C90u);
    ctx->pc = 0x189C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C88u;
    // 0x189c8c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x189C88u, 0x189C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C90u;
label_189c90:
    // 0x189c90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x189c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x189c94: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x189c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_189c98:
    // 0x189c98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x189c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189c9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x189c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x189ca0: 0x0  nop
    ctx->pc = 0x189ca0u;
    // NOP
    // 0x189ca4: 0x0  nop
    ctx->pc = 0x189ca4u;
    // NOP
    // 0x189ca8: 0x0  nop
    ctx->pc = 0x189ca8u;
    // NOP
    // 0x189cac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x189CACu;
    {
        const bool branch_taken_0x189cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189cac) {
            ctx->pc = 0x189C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189c98;
        }
    }
    ctx->pc = 0x189CB4u;
    // 0x189cb4: 0x0  nop
    ctx->pc = 0x189cb4u;
    // NOP
label_189cb8:
    // 0x189cb8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x189CB8u;
    SET_GPR_U32(ctx, 31, 0x189CC0u);
    ctx->pc = 0x189CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CB8u;
    // 0x189cbc: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x189CB8u, 0x189CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CC0u;
label_189cc0:
    // 0x189cc0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x189cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x189cc4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x189CC4u;
    {
        const bool branch_taken_0x189cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x189CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CC4u;
        // 0x189cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cc4) {
            ctx->pc = 0x189CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189cb8;
        }
    }
    ctx->pc = 0x189CCCu;
    // 0x189ccc: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x189cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x189cd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x189cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x189cd4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x189CD4u;
    {
        const bool branch_taken_0x189cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189CD4u;
        // 0x189cd8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189cd4) {
            ctx->pc = 0x189CE8u;
            goto label_189ce8;
        }
    }
    ctx->pc = 0x189CDCu;
    // 0x189cdc: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x189cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x189ce0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x189CE0u;
    SET_GPR_U32(ctx, 31, 0x189CE8u);
    ctx->pc = 0x189CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189CE0u;
    // 0x189ce4: 0xae500090  sw          $s0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x189CE0u, 0x189CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189CE8u;
label_189ce8:
    // 0x189ce8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x189ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x189cec: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x189cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x189cf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x189cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x189cf4: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x189cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x189cf8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x189cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189cfc: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x189cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x189d00: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x189d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x189d04: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x189d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x189d08: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x189d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x189d0c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x189d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x189d10: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x189d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x189d14: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x189d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x189d18: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x189d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x189d1c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x189D1Cu;
    {
        const bool branch_taken_0x189d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D1Cu;
        // 0x189d20: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d1c) {
            ctx->pc = 0x189D9Cu;
            goto label_189d9c;
        }
    }
    ctx->pc = 0x189D24u;
    // 0x189d24: 0x0  nop
    ctx->pc = 0x189d24u;
    // NOP
label_189d28:
    // 0x189d28: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x189d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x189d2c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x189D2Cu;
    {
        const bool branch_taken_0x189d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D2Cu;
        // 0x189d30: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d2c) {
            ctx->pc = 0x189D78u;
            goto label_189d78;
        }
    }
    ctx->pc = 0x189D34u;
    // 0x189d34: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x189D34u;
    SET_GPR_U32(ctx, 31, 0x189D3Cu);
    ctx->pc = 0x189D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D34u;
    // 0x189d38: 0x8e640088  lw          $a0, 0x88($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x189D34u, 0x189D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D3Cu;
label_189d3c:
    // 0x189d3c: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x189d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x189d40: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x189d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x189d44: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x189d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x189d48: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x189d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x189d4c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x189d4cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x189d50: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x189d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x189d54: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x189d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x189d58: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x189d58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x189d5c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x189D5Cu;
    SET_GPR_U32(ctx, 31, 0x189D64u);
    ctx->pc = 0x189D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D5Cu;
    // 0x189d60: 0xae71008c  sw          $s1, 0x8C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x189D5Cu, 0x189D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D64u;
label_189d64:
    // 0x189d64: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x189D64u;
    SET_GPR_U32(ctx, 31, 0x189D6Cu);
    ctx->pc = 0x189D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189D64u;
    // 0x189d68: 0x8e640084  lw          $a0, 0x84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x189D64u, 0x189D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D6Cu;
label_189d6c:
    // 0x189d6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x189D6Cu;
    {
        const bool branch_taken_0x189d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D6Cu;
        // 0x189d70: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d6c) {
            ctx->pc = 0x189DA0u;
            goto label_189da0;
        }
    }
    ctx->pc = 0x189D74u;
    // 0x189d74: 0x0  nop
    ctx->pc = 0x189d74u;
    // NOP
label_189d78:
    // 0x189d78: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x189d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x189d7c: 0x0  nop
    ctx->pc = 0x189d7cu;
    // NOP
label_189d80:
    // 0x189d80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x189d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189d84: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x189d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x189d88: 0x0  nop
    ctx->pc = 0x189d88u;
    // NOP
    // 0x189d8c: 0x0  nop
    ctx->pc = 0x189d8cu;
    // NOP
    // 0x189d90: 0x0  nop
    ctx->pc = 0x189d90u;
    // NOP
    // 0x189d94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x189D94u;
    {
        const bool branch_taken_0x189d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189d94) {
            ctx->pc = 0x189D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189d80;
        }
    }
    ctx->pc = 0x189D9Cu;
label_189d9c:
    // 0x189d9c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x189d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_189da0:
    // 0x189da0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x189da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x189da4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x189da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x189da8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x189da8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x189dac: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x189dacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x189db0: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x189db0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x189db4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x189db4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x189db8: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x189db8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x189dbc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x189dbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x189dc0: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x189dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x189dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x189DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189DC4u;
        // 0x189dc8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189DCCu;
}
