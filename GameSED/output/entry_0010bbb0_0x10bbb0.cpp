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

// Function: entry_0010bbb0
// Address: 0x10bbb0 - 0x10be28
void entry_0010bbb0_0x10bbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bbb0_0x10bbb0");
#endif

    switch (ctx->pc) {
        case 0x10be20u: goto label_10be20;
        default: break;
    }

    ctx->pc = 0x10bbb0u;

    // 0x10bbb0: 0x8f270000  lw          $a3, 0x0($t9)
    ctx->pc = 0x10bbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x10bbb4: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x10bbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x10bbb8: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x10bbb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x10bbbc: 0x3508000d  ori         $t0, $t0, 0xD
    ctx->pc = 0x10bbbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)13);
    // 0x10bbc0: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x10bbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x10bbc4: 0x24f80020  addiu       $t8, $a3, 0x20
    ctx->pc = 0x10bbc4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x10bbc8: 0x24e20030  addiu       $v0, $a3, 0x30
    ctx->pc = 0x10bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x10bbcc: 0xaf31001c  sw          $s1, 0x1C($t9)
    ctx->pc = 0x10bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 28), GPR_U32(ctx, 17));
    // 0x10bbd0: 0x34119900  ori         $s1, $zero, 0x9900
    ctx->pc = 0x10bbd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39168);
    // 0x10bbd4: 0x118cb8  dsll        $s1, $s1, 18
    ctx->pc = 0x10bbd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 18);
    // 0x10bbd8: 0xaf270008  sw          $a3, 0x8($t9)
    ctx->pc = 0x10bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 7));
    // 0x10bbdc: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x10bbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x10bbe0: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x10bbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x10bbe4: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x10bbe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x10bbe8: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x10bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
    // 0x10bbec: 0x24f80080  addiu       $t8, $a3, 0x80
    ctx->pc = 0x10bbecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x10bbf0: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x10bbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x10bbf4: 0x24e50010  addiu       $a1, $a3, 0x10
    ctx->pc = 0x10bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x10bbf8: 0xfc480000  sd          $t0, 0x0($v0)
    ctx->pc = 0x10bbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 8));
    // 0x10bbfc: 0x24080042  addiu       $t0, $zero, 0x42
    ctx->pc = 0x10bbfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x10bc00: 0x24e30050  addiu       $v1, $a3, 0x50
    ctx->pc = 0x10bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x10bc04: 0x24ed0060  addiu       $t5, $a3, 0x60
    ctx->pc = 0x10bc04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x10bc08: 0xdf828c90  ld          $v0, -0x7370($gp)
    ctx->pc = 0x10bc08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x10bc0c: 0x240b0064  addiu       $t3, $zero, 0x64
    ctx->pc = 0x10bc0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x10bc10: 0xfcca0008  sd          $t2, 0x8($a2)
    ctx->pc = 0x10bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 10));
    // 0x10bc14: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x10bc14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x10bc18: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x10bc18u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x10bc1c: 0x240c0014  addiu       $t4, $zero, 0x14
    ctx->pc = 0x10bc1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10bc20: 0x8f8a8d10  lw          $t2, -0x72F0($gp)
    ctx->pc = 0x10bc20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x10bc24: 0x300482d  daddu       $t1, $t8, $zero
    ctx->pc = 0x10bc24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc28: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x10bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10bc2c: 0x1252023  subu        $a0, $t1, $a1
    ctx->pc = 0x10bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x10bc30: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x10bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x10bc34: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x10bc34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10bc38: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x10bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x10bc3c: 0x24eb0070  addiu       $t3, $a3, 0x70
    ctx->pc = 0x10bc3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x10bc40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x10bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x10bc44: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x10bc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10bc48: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x10bc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x10bc4c: 0xfdac0008  sd          $t4, 0x8($t5)
    ctx->pc = 0x10bc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 12));
    // 0x10bc50: 0x24ec0090  addiu       $t4, $a3, 0x90
    ctx->pc = 0x10bc50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x10bc54: 0xfdaf0000  sd          $t7, 0x0($t5)
    ctx->pc = 0x10bc54u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 15));
    // 0x10bc58: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x10bc58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10bc5c: 0xf7cf8  dsll        $t7, $t7, 19
    ctx->pc = 0x10bc5cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 19);
    // 0x10bc60: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x10bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x10bc64: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x10bc64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10bc68: 0x129538  dsll        $s2, $s2, 20
    ctx->pc = 0x10bc68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 20);
    // 0x10bc6c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x10bc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x10bc70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x10bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10bc74: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10bc74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10bc78: 0x8d46001c  lw          $a2, 0x1C($t2)
    ctx->pc = 0x10bc78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x10bc7c: 0x2a21026  xor         $v0, $s5, $v0
    ctx->pc = 0x10bc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
    // 0x10bc80: 0x3c100002  lui         $s0, 0x2
    ctx->pc = 0x10bc80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
    // 0x10bc84: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10bc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10bc88: 0x240d000e  addiu       $t5, $zero, 0xE
    ctx->pc = 0x10bc88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10bc8c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10bc90: 0x240e4343  addiu       $t6, $zero, 0x4343
    ctx->pc = 0x10bc90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 17219));
    // 0x10bc94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10bc98: 0x3c0a40ab  lui         $t2, 0x40AB
    ctx->pc = 0x10bc98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16555 << 16));
    // 0x10bc9c: 0x354a4000  ori         $t2, $t2, 0x4000
    ctx->pc = 0x10bc9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
    // 0x10bca0: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x10bca0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x10bca4: 0x354a8001  ori         $t2, $t2, 0x8001
    ctx->pc = 0x10bca4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32769);
    // 0x10bca8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x10bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x10bcac: 0x3c0144e0  lui         $at, 0x44E0
    ctx->pc = 0x10bcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17632 << 16));
    // 0x10bcb0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10bcb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10bcb4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x10bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10bcb8: 0x3c0144e4  lui         $at, 0x44E4
    ctx->pc = 0x10bcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17636 << 16));
    // 0x10bcbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10bcbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10bcc0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x10bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x10bcc4: 0x24f800a0  addiu       $t8, $a3, 0xA0
    ctx->pc = 0x10bcc4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x10bcc8: 0xfd680008  sd          $t0, 0x8($t3)
    ctx->pc = 0x10bcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 8));
    // 0x10bccc: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x10bcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x10bcd0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x10bcd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10bcd4: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x10bcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x10bcd8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x10bcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x10bcdc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x10bcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x10bce0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x10bce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x10bce4: 0x4f7825  or          $t7, $v0, $t7
    ctx->pc = 0x10bce4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x10bce8: 0xfd6f0000  sd          $t7, 0x0($t3)
    ctx->pc = 0x10bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 15));
    // 0x10bcec: 0xfcad0008  sd          $t5, 0x8($a1)
    ctx->pc = 0x10bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 13));
    // 0x10bcf0: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x10bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x10bcf4: 0xfd2e0008  sd          $t6, 0x8($t1)
    ctx->pc = 0x10bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 14));
    // 0x10bcf8: 0xfd2a0000  sd          $t2, 0x0($t1)
    ctx->pc = 0x10bcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 10));
    // 0x10bcfc: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x10bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    // 0x10bd00: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x10bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
    // 0x10bd04: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x10bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10bd08: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x10bd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10bd0c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x10bd0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x10bd10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x10bd10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x10bd14: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x10bd14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10bd18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x10bd18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10bd1c: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x10bd1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10bd20: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10bd20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10bd24: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10bd24u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10bd28: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10bd28u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10bd2c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10bd2cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10bd30: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x10bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x10bd34: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x10bd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd38: 0x24f800b0  addiu       $t8, $a3, 0xB0
    ctx->pc = 0x10bd38u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
    // 0x10bd3c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x10bd3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bd40: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x10bd40u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10bd44: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10bd44u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10bd48: 0x24041ff0  addiu       $a0, $zero, 0x1FF0
    ctx->pc = 0x10bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8176));
    // 0x10bd4c: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x10bd4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd50: 0x24f800c0  addiu       $t8, $a3, 0xC0
    ctx->pc = 0x10bd50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 192));
    // 0x10bd54: 0x24021bf0  addiu       $v0, $zero, 0x1BF0
    ctx->pc = 0x10bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7152));
    // 0x10bd58: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x10bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x10bd5c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x10bd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x10bd60: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x10bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x10bd64: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x10bd68: 0x3c014510  lui         $at, 0x4510
    ctx->pc = 0x10bd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17680 << 16));
    // 0x10bd6c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x10bd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10bd70: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x10bd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10bd74: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x10bd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10bd78: 0x3c01450e  lui         $at, 0x450E
    ctx->pc = 0x10bd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17678 << 16));
    // 0x10bd7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10bd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10bd80: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x10bd80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x10bd84: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x10bd84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x10bd88: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10bd88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10bd8c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10bd8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10bd90: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x10bd90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10bd94: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10bd98: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10bd98u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10bd9c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10bd9cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10bda0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10bda0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10bda4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x10bda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x10bda8: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x10bda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bdac: 0x24f800d0  addiu       $t8, $a3, 0xD0
    ctx->pc = 0x10bdacu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
    // 0x10bdb0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x10bdb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bdb4: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x10bdb4u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10bdb8: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10bdbc: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x10bdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x10bdc0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x10bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x10bdc4: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x10bdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bdc8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x10bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x10bdcc: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x10bdccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x10bdd0: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x10bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x10bdd4: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x10bdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x10bdd8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x10bdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10bddc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x10bddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bde0: 0x3061023  subu        $v0, $t8, $a2
    ctx->pc = 0x10bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 6)));
    // 0x10bde4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x10bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x10bde8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10bdec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x10bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x10bdf0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x10bdf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10bdf4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x10bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x10bdf8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x10bdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x10bdfc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x10bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x10be00: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x10be00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10be04: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x10be04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x10be08: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10be0c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x10be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10be10: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x10be10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x10be14: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x10be14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x10be18: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10BE18u;
    SET_GPR_U32(ctx, 31, 0x10BE20u);
    ctx->pc = 0x10BE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE18u;
    // 0x10be1c: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10BE18u, 0x10BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE20u;
label_10be20:
    // 0x10be20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10be20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10be24: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x10be24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x10be28u;
}
