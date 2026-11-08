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

// Function: anti_flicker_preset__Fiiiiff
// Address: 0x13d330 - 0x13d5b8
void anti_flicker_preset__Fiiiiff_0x13d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("anti_flicker_preset__Fiiiiff_0x13d330");
#endif

    ctx->pc = 0x13d330u;

    // 0x13d330: 0x44040  sll         $t0, $a0, 1
    ctx->pc = 0x13d330u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x13d334: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d338: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x13d338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x13d33c: 0xa72826  xor         $a1, $a1, $a3
    ctx->pc = 0x13d33cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 7));
    // 0x13d340: 0x84240  sll         $t0, $t0, 9
    ctx->pc = 0x13d340u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 9));
    // 0x13d344: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x13d344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13d348: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x13d348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x13d34c: 0x24211200  addiu       $at, $at, 0x1200
    ctx->pc = 0x13d34cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4608));
    // 0x13d350: 0x284021  addu        $t0, $at, $t0
    ctx->pc = 0x13d350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 8)));
    // 0x13d354: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13d358: 0x250f0020  addiu       $t7, $t0, 0x20
    ctx->pc = 0x13d358u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x13d35c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13d35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13d360: 0xfde30008  sd          $v1, 0x8($t7)
    ctx->pc = 0x13d360u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 3));
    // 0x13d364: 0x25020050  addiu       $v0, $t0, 0x50
    ctx->pc = 0x13d364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x13d368: 0xfde00000  sd          $zero, 0x0($t7)
    ctx->pc = 0x13d368u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 0));
    // 0x13d36c: 0x250f0080  addiu       $t7, $t0, 0x80
    ctx->pc = 0x13d36cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x13d370: 0x25040030  addiu       $a0, $t0, 0x30
    ctx->pc = 0x13d370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x13d374: 0x25070040  addiu       $a3, $t0, 0x40
    ctx->pc = 0x13d374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x13d378: 0xdf898c90  ld          $t1, -0x7370($gp)
    ctx->pc = 0x13d378u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x13d37c: 0x250d0060  addiu       $t5, $t0, 0x60
    ctx->pc = 0x13d37cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x13d380: 0x3c0e0003  lui         $t6, 0x3
    ctx->pc = 0x13d380u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)3 << 16));
    // 0x13d384: 0x35ce000d  ori         $t6, $t6, 0xD
    ctx->pc = 0x13d384u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)13);
    // 0x13d388: 0x24100047  addiu       $s0, $zero, 0x47
    ctx->pc = 0x13d388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x13d38c: 0x2411004e  addiu       $s1, $zero, 0x4E
    ctx->pc = 0x13d38cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x13d390: 0x240b0064  addiu       $t3, $zero, 0x64
    ctx->pc = 0x13d390u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x13d394: 0x240a0042  addiu       $t2, $zero, 0x42
    ctx->pc = 0x13d394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x13d398: 0x24180060  addiu       $t8, $zero, 0x60
    ctx->pc = 0x13d398u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x13d39c: 0x240c0014  addiu       $t4, $zero, 0x14
    ctx->pc = 0x13d39cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13d3a0: 0xfc8e0000  sd          $t6, 0x0($a0)
    ctx->pc = 0x13d3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
    // 0x13d3a4: 0xfc900008  sd          $s0, 0x8($a0)
    ctx->pc = 0x13d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 16));
    // 0x13d3a8: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x13d3a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x13d3ac: 0xfce90000  sd          $t1, 0x0($a3)
    ctx->pc = 0x13d3acu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 9));
    // 0x13d3b0: 0x1e0482d  daddu       $t1, $t7, $zero
    ctx->pc = 0x13d3b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3b4: 0xfcf10008  sd          $s1, 0x8($a3)
    ctx->pc = 0x13d3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 17));
    // 0x13d3b8: 0x25070010  addiu       $a3, $t0, 0x10
    ctx->pc = 0x13d3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x13d3bc: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x13d3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x13d3c0: 0x250a0090  addiu       $t2, $t0, 0x90
    ctx->pc = 0x13d3c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
    // 0x13d3c4: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x13d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x13d3c8: 0x340b8000  ori         $t3, $zero, 0x8000
    ctx->pc = 0x13d3c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13d3cc: 0xb5cf8  dsll        $t3, $t3, 19
    ctx->pc = 0x13d3ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 19);
    // 0x13d3d0: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x13d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x13d3d4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x13d3d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13d3d8: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x13d3d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x13d3dc: 0xfdac0008  sd          $t4, 0x8($t5)
    ctx->pc = 0x13d3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 12));
    // 0x13d3e0: 0x3c0c0002  lui         $t4, 0x2
    ctx->pc = 0x13d3e0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2 << 16));
    // 0x13d3e4: 0xfdb80000  sd          $t8, 0x0($t5)
    ctx->pc = 0x13d3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 24));
    // 0x13d3e8: 0x240d000e  addiu       $t5, $zero, 0xE
    ctx->pc = 0x13d3e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x13d3ec: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x13d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13d3f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13d3f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13d3f8: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x13d3f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13d3fc: 0xe7538  dsll        $t6, $t6, 20
    ctx->pc = 0x13d3fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 20);
    // 0x13d400: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x13d400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x13d404: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13d404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13d408: 0x340f9900  ori         $t7, $zero, 0x9900
    ctx->pc = 0x13d408u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39168);
    // 0x13d40c: 0xf7cb8  dsll        $t7, $t7, 18
    ctx->pc = 0x13d40cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 18);
    // 0x13d410: 0x1272023  subu        $a0, $t1, $a3
    ctx->pc = 0x13d410u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x13d414: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13d414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13d418: 0x25050070  addiu       $a1, $t0, 0x70
    ctx->pc = 0x13d418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x13d41c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x13d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x13d420: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x13d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13d424: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x13d424u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x13d428: 0x3c0144e0  lui         $at, 0x44E0
    ctx->pc = 0x13d428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17632 << 16));
    // 0x13d42c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13d42cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13d430: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x13d430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x13d434: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13d434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x13d438: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x13d438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x13d43c: 0x3c0144e4  lui         $at, 0x44E4
    ctx->pc = 0x13d43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17636 << 16));
    // 0x13d440: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13d440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d444: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x13d444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x13d448: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x13d448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x13d44c: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x13d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x13d450: 0x250f00a0  addiu       $t7, $t0, 0xA0
    ctx->pc = 0x13d450u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x13d454: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x13d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x13d458: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x13d458u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x13d45c: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x13d45cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x13d460: 0x4bc025  or          $t8, $v0, $t3
    ctx->pc = 0x13d460u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x13d464: 0x3c0240ab  lui         $v0, 0x40AB
    ctx->pc = 0x13d464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16555 << 16));
    // 0x13d468: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13d46c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13d46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13d470: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x13d470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x13d474: 0x24064343  addiu       $a2, $zero, 0x4343
    ctx->pc = 0x13d474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17219));
    // 0x13d478: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x13d478u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x13d47c: 0xfcb80000  sd          $t8, 0x0($a1)
    ctx->pc = 0x13d47cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 24));
    // 0x13d480: 0x46026080  add.s       $f2, $f12, $f2
    ctx->pc = 0x13d480u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x13d484: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x13d484u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x13d488: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x13d488u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x13d48c: 0xfced0008  sd          $t5, 0x8($a3)
    ctx->pc = 0x13d48cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 13));
    // 0x13d490: 0x278b8c80  addiu       $t3, $gp, -0x7380
    ctx->pc = 0x13d490u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x13d494: 0xfd260008  sd          $a2, 0x8($t1)
    ctx->pc = 0x13d494u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 6));
    // 0x13d498: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x13d498u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x13d49c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13d49cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d4a0: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x13d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x13d4a4: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x13d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x13d4a8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x13d4a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13d4ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x13d4acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13d4b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13d4b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13d4b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x13d4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x13d4b8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x13d4b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13d4bc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x13d4bcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x13d4c0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x13d4c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13d4c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x13d4c8: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x13d4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4cc: 0x250f00b0  addiu       $t7, $t0, 0xB0
    ctx->pc = 0x13d4ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 176));
    // 0x13d4d0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x13d4d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d4d4: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x13d4d4u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d4d8: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x13d4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13d4dc: 0x24091ff0  addiu       $t1, $zero, 0x1FF0
    ctx->pc = 0x13d4dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8176));
    // 0x13d4e0: 0x3c014510  lui         $at, 0x4510
    ctx->pc = 0x13d4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17680 << 16));
    // 0x13d4e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13d4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13d4e8: 0x1e0382d  daddu       $a3, $t7, $zero
    ctx->pc = 0x13d4e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4ec: 0x3c01450e  lui         $at, 0x450E
    ctx->pc = 0x13d4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17678 << 16));
    // 0x13d4f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13d4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d4f4: 0x24021bf0  addiu       $v0, $zero, 0x1BF0
    ctx->pc = 0x13d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7152));
    // 0x13d4f8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x13d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x13d4fc: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x13d4fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x13d500: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x13d500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x13d504: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x13d504u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x13d508: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x13d508u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x13d50c: 0x250f00c0  addiu       $t7, $t0, 0xC0
    ctx->pc = 0x13d50cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    // 0x13d510: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x13d510u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x13d514: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x13d514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13d518: 0x44036800  mfc1        $v1, $f13
    ctx->pc = 0x13d518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13d51c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13d51cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13d520: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x13d520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x13d524: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x13d524u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13d528: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x13d528u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x13d52c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x13d52cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13d530: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x13d530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x13d534: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x13d534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d538: 0x250f00d0  addiu       $t7, $t0, 0xD0
    ctx->pc = 0x13d538u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 208));
    // 0x13d53c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x13d53cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d540: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x13d540u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13d544: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x13d544u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13d548: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x13d548u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x13d54c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x13d54cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x13d550: 0x34e78002  ori         $a3, $a3, 0x8002
    ctx->pc = 0x13d550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32770);
    // 0x13d554: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x13d554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d558: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x13d558u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x13d55c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x13d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x13d560: 0x250500e0  addiu       $a1, $t0, 0xE0
    ctx->pc = 0x13d560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
    // 0x13d564: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x13d564u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x13d568: 0x3c071300  lui         $a3, 0x1300
    ctx->pc = 0x13d568u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4864 << 16));
    // 0x13d56c: 0xfc8d0008  sd          $t5, 0x8($a0)
    ctx->pc = 0x13d56cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 13));
    // 0x13d570: 0x250400f0  addiu       $a0, $t0, 0xF0
    ctx->pc = 0x13d570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 240));
    // 0x13d574: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x13d574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x13d578: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13d578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13d57c: 0xdd660000  ld          $a2, 0x0($t3)
    ctx->pc = 0x13d57cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x13d580: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x13d580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x13d584: 0xfcb00008  sd          $s0, 0x8($a1)
    ctx->pc = 0x13d584u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 16));
    // 0x13d588: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x13d588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x13d58c: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x13d58cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x13d590: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13d590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d594: 0xfc910008  sd          $s1, 0x8($a0)
    ctx->pc = 0x13d594u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 17));
    // 0x13d598: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13d598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d59c: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x13d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x13d5a0: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x13d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x13d5a4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x13d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x13d5a8: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x13d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x13d5ac: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x13d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x13d5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x13D5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5B0u;
        // 0x13d5b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D5B8u;
}
