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

// Function: ApBgscrCircleProjection__FP8ApcField
// Address: 0x1480f8 - 0x148730
void ApBgscrCircleProjection__FP8ApcField_0x1480f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApBgscrCircleProjection__FP8ApcField_0x1480f8");
#endif

    switch (ctx->pc) {
        case 0x148180u: goto label_148180;
        case 0x148188u: goto label_148188;
        case 0x1481acu: goto label_1481ac;
        case 0x148268u: goto label_148268;
        case 0x148294u: goto label_148294;
        case 0x1483d8u: goto label_1483d8;
        case 0x148660u: goto label_148660;
        case 0x148668u: goto label_148668;
        case 0x148688u: goto label_148688;
        case 0x148690u: goto label_148690;
        case 0x1486b8u: goto label_1486b8;
        default: break;
    }

    ctx->pc = 0x1480f8u;

    // 0x1480f8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1480f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1480fc: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1480fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x148100: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x148100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x148104: 0x247426c0  addiu       $s4, $v1, 0x26C0
    ctx->pc = 0x148104u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 9920));
    // 0x148108: 0x8e8204f0  lw          $v0, 0x4F0($s4)
    ctx->pc = 0x148108u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x262BB0u));
    // 0x14810c: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x14810cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x148110: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x148110u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148114: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x148114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x148118: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x148118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x14811c: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x14811cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x148120: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x148120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x148124: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x148124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x148128: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x148128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x14812c: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x14812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
    // 0x148130: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x148130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x148134: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x148134u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x148138: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x148138u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x14813c: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x14813cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x148140: 0x1040016b  beqz        $v0, . + 4 + (0x16B << 2)
    ctx->pc = 0x148140u;
    {
        const bool branch_taken_0x148140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148140u;
        // 0x148144: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148140) {
            ctx->pc = 0x1486F0u;
            goto label_1486f0;
        }
    }
    ctx->pc = 0x148148u;
    // 0x148148: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x148148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x14814c: 0x2475d650  addiu       $s5, $v1, -0x29B0
    ctx->pc = 0x14814cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x148150: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x148150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x148154: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x148154u;
    {
        const bool branch_taken_0x148154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148154u;
        // 0x148158: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148154) {
            ctx->pc = 0x148178u;
            goto label_148178;
        }
    }
    ctx->pc = 0x14815Cu;
    // 0x14815c: 0x8ea20098  lw          $v0, 0x98($s5)
    ctx->pc = 0x14815cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
    // 0x148160: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x148160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148164: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x148164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x148168: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x148168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x14816c: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x14816cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x148170: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x148170u;
    {
        const bool branch_taken_0x148170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148170u;
        // 0x148174: 0xaea30098  sw          $v1, 0x98($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148170) {
            ctx->pc = 0x1481ACu;
            goto label_1481ac;
        }
    }
    ctx->pc = 0x148178u;
label_148178:
    // 0x148178: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x148178u;
    SET_GPR_U32(ctx, 31, 0x148180u);
    ctx->pc = 0x14817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148178u;
    // 0x14817c: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x148178u, 0x148180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148180u;
label_148180:
    // 0x148180: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x148180u;
    SET_GPR_U32(ctx, 31, 0x148188u);
    ctx->pc = 0x148184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148180u;
    // 0x148184: 0x8ea40088  lw          $a0, 0x88($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x148180u, 0x148188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148188u;
label_148188:
    // 0x148188: 0x8eb0008c  lw          $s0, 0x8C($s5)
    ctx->pc = 0x148188u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x14818c: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x14818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x148190: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x148190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x148194: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x148194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x148198: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x148198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x14819c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14819cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1481a0: 0xaea5008c  sw          $a1, 0x8C($s5)
    ctx->pc = 0x1481a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 5));
    // 0x1481a4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1481A4u;
    SET_GPR_U32(ctx, 31, 0x1481ACu);
    ctx->pc = 0x1481A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1481A4u;
    // 0x1481a8: 0xaea20080  sw          $v0, 0x80($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1481A4u, 0x1481ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481ACu;
label_1481ac:
    // 0x1481ac: 0xafb000a4  sw          $s0, 0xA4($sp)
    ctx->pc = 0x1481acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 16));
    // 0x1481b0: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1481b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1481b4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1481b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1481b8: 0x35080003  ori         $t0, $t0, 0x3
    ctx->pc = 0x1481b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
    // 0x1481bc: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1481bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1481c0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1481c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1481c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1481c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1481c8: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x1481c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x1481cc: 0x356b000d  ori         $t3, $t3, 0xD
    ctx->pc = 0x1481ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)13);
    // 0x1481d0: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x1481d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1481d4: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x1481d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1481d8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1481d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1481dc: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x1481dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1481e0: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1481e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1481e4: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x1481e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1481e8: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1481e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x1481ec: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1481ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1481f0: 0xfc480000  sd          $t0, 0x0($v0)
    ctx->pc = 0x1481f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 8));
    // 0x1481f4: 0x24080042  addiu       $t0, $zero, 0x42
    ctx->pc = 0x1481f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1481f8: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x1481f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x1481fc: 0x246b0050  addiu       $t3, $v1, 0x50
    ctx->pc = 0x1481fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x148200: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x148200u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x148204: 0x3c042022  lui         $a0, 0x2022
    ctx->pc = 0x148204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8226 << 16));
    // 0x148208: 0x24690030  addiu       $t1, $v1, 0x30
    ctx->pc = 0x148208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x14820c: 0x246a0040  addiu       $t2, $v1, 0x40
    ctx->pc = 0x14820cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x148210: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x148210u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x148214: 0x240c0048  addiu       $t4, $zero, 0x48
    ctx->pc = 0x148214u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x148218: 0xfd270008  sd          $a3, 0x8($t1)
    ctx->pc = 0x148218u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 7));
    // 0x14821c: 0x3c130fff  lui         $s3, 0xFFF
    ctx->pc = 0x14821cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4095 << 16));
    // 0x148220: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x148220u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x148224: 0x2489f640  addiu       $t1, $a0, -0x9C0
    ctx->pc = 0x148224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964800));
    // 0x148228: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x148228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14822c: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x14822cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x148230: 0x244242a0  addiu       $v0, $v0, 0x42A0
    ctx->pc = 0x148230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17056));
    // 0x148234: 0x3c01c400  lui         $at, 0xC400
    ctx->pc = 0x148234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50176 << 16));
    // 0x148238: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x148238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x14823c: 0xc79681a8  lwc1        $f22, -0x7E58($gp)
    ctx->pc = 0x14823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x148240: 0x24b24340  addiu       $s2, $a1, 0x4340
    ctx->pc = 0x148240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 17216));
    // 0x148244: 0xc79581ac  lwc1        $f21, -0x7E54($gp)
    ctx->pc = 0x148244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x148248: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x148248u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14824c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14824cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x148250: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x148250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x148254: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x148254u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148258: 0xfd480008  sd          $t0, 0x8($t2)
    ctx->pc = 0x148258u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 8));
    // 0x14825c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14825cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148260: 0x3673ff70  ori         $s3, $s3, 0xFF70
    ctx->pc = 0x148260u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65392);
    // 0x148264: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x148264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_148268:
    // 0x148268: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x148268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14826c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x14826cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148270: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x148270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x148274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x148278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14827c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14827cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148280: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x148280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x148284: 0x7fa800b0  sq          $t0, 0xB0($sp)
    ctx->pc = 0x148284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 8));
    // 0x148288: 0x8c4504f4  lw          $a1, 0x4F4($v0)
    ctx->pc = 0x148288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1268)));
    // 0x14828c: 0xc061228  jal         func_1848A0
    ctx->pc = 0x14828Cu;
    SET_GPR_U32(ctx, 31, 0x148294u);
    ctx->pc = 0x148290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14828Cu;
    // 0x148290: 0x7fa900c0  sq          $t1, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1848A0u, 0x14828Cu, 0x148294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148294u;
label_148294:
    // 0x148294: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x148294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x148298: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x148298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x14829c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x14829cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482a0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1482a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1482a4: 0x1701023  subu        $v0, $t3, $s0
    ctx->pc = 0x1482a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x1482a8: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1482a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1482ac: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1482acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1482b0: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1482b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1482b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1482b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1482b8: 0x7ba800b0  lq          $t0, 0xB0($sp)
    ctx->pc = 0x1482b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1482bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1482bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1482c0: 0x24a542a0  addiu       $a1, $a1, 0x42A0
    ctx->pc = 0x1482c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17056));
    // 0x1482c4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1482c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1482c8: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1482c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1482cc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1482ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1482d0: 0xc68004d8  lwc1        $f0, 0x4D8($s4)
    ctx->pc = 0x1482d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1482d4: 0xc68104dc  lwc1        $f1, 0x4DC($s4)
    ctx->pc = 0x1482d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1482d8: 0x46020102  mul.s       $f4, $f0, $f2
    ctx->pc = 0x1482d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1482dc: 0x7ba900c0  lq          $t1, 0xC0($sp)
    ctx->pc = 0x1482dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1482e0: 0x4604b836  c.le.s      $f23, $f4
    ctx->pc = 0x1482e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1482e4: 0x450000b3  bc1f        . + 4 + (0xB3 << 2)
    ctx->pc = 0x1482E4u;
    {
        const bool branch_taken_0x1482e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1482E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482E4u;
        // 0x1482e8: 0x46020942  mul.s       $f5, $f1, $f2 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1482e4) {
            ctx->pc = 0x1485B4u;
            goto label_1485b4;
        }
    }
    ctx->pc = 0x1482ECu;
    // 0x1482ec: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1482ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1482f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1482f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1482f4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1482f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1482f8: 0x450200af  bc1fl       . + 4 + (0xAF << 2)
    ctx->pc = 0x1482F8u;
    {
        const bool branch_taken_0x1482f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1482f8) {
            ctx->pc = 0x1482FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1482F8u;
            // 0x1482fc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1485B8u;
            goto label_1485b8;
        }
    }
    ctx->pc = 0x148300u;
    // 0x148300: 0x4605b836  c.le.s      $f23, $f5
    ctx->pc = 0x148300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148304: 0x450200ac  bc1fl       . + 4 + (0xAC << 2)
    ctx->pc = 0x148304u;
    {
        const bool branch_taken_0x148304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148304) {
            ctx->pc = 0x148308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148304u;
            // 0x148308: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1485B8u;
            goto label_1485b8;
        }
    }
    ctx->pc = 0x14830Cu;
    // 0x14830c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x14830cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148310: 0x450200a9  bc1fl       . + 4 + (0xA9 << 2)
    ctx->pc = 0x148310u;
    {
        const bool branch_taken_0x148310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148310) {
            ctx->pc = 0x148314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148310u;
            // 0x148314: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1485B8u;
            goto label_1485b8;
        }
    }
    ctx->pc = 0x148318u;
    // 0x148318: 0x8e8204e4  lw          $v0, 0x4E4($s4)
    ctx->pc = 0x148318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1252)));
    // 0x14831c: 0x26e50001  addiu       $a1, $s7, 0x1
    ctx->pc = 0x14831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x148320: 0x8e8304e0  lw          $v1, 0x4E0($s4)
    ctx->pc = 0x148320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1248)));
    // 0x148324: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x148324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x148328: 0x8e8404e8  lw          $a0, 0x4E8($s4)
    ctx->pc = 0x148328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1256)));
    // 0x14832c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148330: 0xc622fff8  lwc1        $f2, -0x8($s1)
    ctx->pc = 0x148330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x148334: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x148338: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x148338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14833c: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x14833cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x148340: 0x24622000  addiu       $v0, $v1, 0x2000
    ctx->pc = 0x148340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x148344: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148348: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x148348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x14834c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x14834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x148350: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x148350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x148354: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x148354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148358: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x148358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x14835c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14835cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148360: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x148360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x148364: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x148364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x148368: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x148368u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x14836c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x14836cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x148370: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x148370u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x148374: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x148374u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x148378: 0xf8c40030  sqc2        $vf4, 0x30($a2)
    ctx->pc = 0x148378u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14837c: 0xf8c50020  sqc2        $vf5, 0x20($a2)
    ctx->pc = 0x14837cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x148380: 0xf8c60010  sqc2        $vf6, 0x10($a2)
    ctx->pc = 0x148380u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x148384: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x148384u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x148388: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x148388u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x14838c: 0x8fc30164  lw          $v1, 0x164($fp)
    ctx->pc = 0x14838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 356)));
    // 0x148390: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x148390u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x148394: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x148394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x148398: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x148398u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x14839c: 0x24474360  addiu       $a3, $v0, 0x4360
    ctx->pc = 0x14839cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 17248));
    // 0x1483a0: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1483a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1483a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1483a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1483a8: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x1483a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x1483ac: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x1483acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1483b0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1483b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1483b4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1483b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1483b8: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x1483b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1483bc: 0xc46001b8  lwc1        $f0, 0x1B8($v1)
    ctx->pc = 0x1483bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1483c0: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1483c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1483c4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1483c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1483c8: 0xc46101bc  lwc1        $f1, 0x1BC($v1)
    ctx->pc = 0x1483c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1483cc: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x1483ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1483d0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1483d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1483d4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1483d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1483d8:
    // 0x1483d8: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1483d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1483dc: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1483dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1483e0: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x1483e0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1483e4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1483e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1483e8: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x1483e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1483ec: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x1483ecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1483f0: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x1483f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1483f4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1483f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1483f8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1483f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1483fc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1483fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x148400: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x148400u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x148404: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x148404u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x148408: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x148408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14840c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x14840cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x148410: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x148410u;
    {
        const bool branch_taken_0x148410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148410u;
        // 0x148414: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148410) {
            ctx->pc = 0x1483D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1483d8;
        }
    }
    ctx->pc = 0x148418u;
    // 0x148418: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x148418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14841c: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x14841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x148420: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x148420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x148424: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x148424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x148428: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x148428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x14842c: 0x8c630210  lw          $v1, 0x210($v1)
    ctx->pc = 0x14842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x148430: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x148430u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x148434: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x148434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x148438: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x148438u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14843c: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x14843cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x148440: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x148440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x148444: 0x3c02302e  lui         $v0, 0x302E
    ctx->pc = 0x148444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12334 << 16));
    // 0x148448: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x148448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14844c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14844cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x148450: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x148450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x148454: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x148454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148458: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148458u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x14845c: 0x240704e2  addiu       $a3, $zero, 0x4E2
    ctx->pc = 0x14845cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x148460: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x148460u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x148464: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x148464u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x148468: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x148468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14846c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14846cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148470: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x148470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148474: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x148474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148478: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x148478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14847c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14847cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148480: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x148480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x148484: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x148484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148488: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x148488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x14848c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14848cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148490: 0xe4b40008  swc1        $f20, 0x8($a1)
    ctx->pc = 0x148490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x148494: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148498: 0xfcd60008  sd          $s6, 0x8($a2)
    ctx->pc = 0x148498u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 22));
    // 0x14849c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14849cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1484a0: 0xe4d40004  swc1        $f20, 0x4($a2)
    ctx->pc = 0x1484a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1484a4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1484a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1484a8: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x1484a8u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1484ac: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1484acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1484b0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1484b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1484b4: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x1484b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484b8: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x1484b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x1484bc: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1484bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x1484c0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1484c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484c4: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1484c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x1484c8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1484c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1484cc: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x1484ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484d0: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1484d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1484d4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1484d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1484d8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1484d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1484dc: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1484dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x1484e0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1484e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1484e4: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x1484e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1484e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1484e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1484ec: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x1484ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x1484f0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1484f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1484f4: 0xe4b40004  swc1        $f20, 0x4($a1)
    ctx->pc = 0x1484f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1484f8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1484f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1484fc: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x1484fcu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x148500: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x148500u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148504: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x148504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x148508: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x148508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14850c: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x14850cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x148510: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148510u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148514: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x148514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148518: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148518u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x14851c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x14851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148520: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x148520u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148524: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x148524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148528: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x148528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14852c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14852cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x148530: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148530u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148534: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x148534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x148538: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x148538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x14853c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148540: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x148540u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x148544: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x148544u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x148548: 0xe4b40004  swc1        $f20, 0x4($a1)
    ctx->pc = 0x148548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x14854c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x14854cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x148550: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x148550u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x148554: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x148554u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148558: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x148558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x14855c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x14855cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148560: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x148560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x148564: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148564u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148568: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x148568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14856c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14856cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148570: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x148570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148574: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x148574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148578: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x148578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14857c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14857cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x148580: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x148580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x148584: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148584u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148588: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x148588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x14858c: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x14858cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x148590: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148594: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x148594u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x148598: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x148598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x14859c: 0xe4b40004  swc1        $f20, 0x4($a1)
    ctx->pc = 0x14859cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1485a0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1485a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1485a4: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x1485a4u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1485a8: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1485a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1485ac: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1485acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1485b0: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x1485b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
label_1485b4:
    // 0x1485b4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1485b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1485b8:
    // 0x1485b8: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1485b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1485bc: 0x2ae20008  slti        $v0, $s7, 0x8
    ctx->pc = 0x1485bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1485c0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1485c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1485c4: 0x1440ff28  bnez        $v0, . + 4 + (-0xD8 << 2)
    ctx->pc = 0x1485C4u;
    {
        const bool branch_taken_0x1485c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1485C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1485C4u;
        // 0x1485c8: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1485c4) {
            ctx->pc = 0x148268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148268;
        }
    }
    ctx->pc = 0x1485CCu;
    // 0x1485cc: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1485ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485d0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1485d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x1485d4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1485d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1485d8: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1485d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485dc: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x1485dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x1485e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1485e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1485e4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1485e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1485e8: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x1485e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x1485ec: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x1485ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1485f0: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1485f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1485f4: 0x8fb000a4  lw          $s0, 0xA4($sp)
    ctx->pc = 0x1485f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1485f8: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1485f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x1485fc: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x1485fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x148600: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x148600u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x148604: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x148604u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x148608: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x148608u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x14860c: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x14860cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x148610: 0x3c0a5000  lui         $t2, 0x5000
    ctx->pc = 0x148610u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20480 << 16));
    // 0x148614: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x148614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x148618: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x148618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14861c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x14861cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x148620: 0x1661023  subu        $v0, $t3, $a2
    ctx->pc = 0x148620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x148624: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x148624u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x148628: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x148628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14862c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14862cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x148630: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x148630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x148634: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x148634u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x148638: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x148638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x14863c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x14863cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x148640: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x148640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x148644: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x148644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x148648: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x148648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14864c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14864cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x148650: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x148650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x148654: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x148654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x148658: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x148658u;
    SET_GPR_U32(ctx, 31, 0x148660u);
    ctx->pc = 0x14865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148658u;
    // 0x14865c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x148658u, 0x148660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148660u;
label_148660:
    // 0x148660: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x148660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x148664: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_148668:
    // 0x148668: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14866c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14866cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148670: 0x0  nop
    ctx->pc = 0x148670u;
    // NOP
    // 0x148674: 0x0  nop
    ctx->pc = 0x148674u;
    // NOP
    // 0x148678: 0x0  nop
    ctx->pc = 0x148678u;
    // NOP
    // 0x14867c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14867Cu;
    {
        const bool branch_taken_0x14867c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14867c) {
            ctx->pc = 0x148668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148668;
        }
    }
    ctx->pc = 0x148684u;
    // 0x148684: 0x0  nop
    ctx->pc = 0x148684u;
    // NOP
label_148688:
    // 0x148688: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x148688u;
    SET_GPR_U32(ctx, 31, 0x148690u);
    ctx->pc = 0x14868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148688u;
    // 0x14868c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x148688u, 0x148690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148690u;
label_148690:
    // 0x148690: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x148690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x148694: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x148694u;
    {
        const bool branch_taken_0x148694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x148698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148694u;
        // 0x148698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148694) {
            ctx->pc = 0x148688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148688;
        }
    }
    ctx->pc = 0x14869Cu;
    // 0x14869c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x14869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1486a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1486a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1486a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1486A4u;
    {
        const bool branch_taken_0x1486a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1486A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486A4u;
        // 0x1486a8: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1486a4) {
            ctx->pc = 0x1486B8u;
            goto label_1486b8;
        }
    }
    ctx->pc = 0x1486ACu;
    // 0x1486ac: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1486acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1486b0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1486B0u;
    SET_GPR_U32(ctx, 31, 0x1486B8u);
    ctx->pc = 0x1486B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1486B0u;
    // 0x1486b4: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1486B0u, 0x1486B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486B8u;
label_1486b8:
    // 0x1486b8: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x1486b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1486bc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1486bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1486c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1486c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1486c4: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1486c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1486c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1486c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1486cc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1486ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1486d0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1486d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1486d4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1486d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1486d8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1486d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1486dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1486dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1486e0: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1486e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x1486e4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1486e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1486e8: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1486e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1486ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1486ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1486f0:
    // 0x1486f0: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x1486f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1486f4: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x1486f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1486f8: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x1486f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1486fc: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x1486fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x148700: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x148700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x148704: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x148704u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x148708: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x148708u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14870c: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x14870cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x148710: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x148710u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x148714: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x148714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x148718: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x148718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14871c: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x14871cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x148720: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x148720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x148724: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x148724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x148728: 0x3e00008  jr          $ra
    ctx->pc = 0x148728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148728u;
        // 0x14872c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148730u;
}
