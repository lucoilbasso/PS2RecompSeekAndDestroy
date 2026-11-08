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

// Function: entry_0014eb68
// Address: 0x14eb68 - 0x14edc0
void entry_0014eb68_0x14eb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eb68_0x14eb68");
#endif

    ctx->pc = 0x14eb68u;

    // 0x14eb68: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x14eb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x14eb6c: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x14eb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14eb70: 0x25060030  addiu       $a2, $t0, 0x30
    ctx->pc = 0x14eb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x14eb74: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x14eb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14eb78: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14eb78u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14eb7c: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x14eb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14eb80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14eb80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14eb84: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x14eb84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14eb88: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14eb88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14eb8c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14eb90: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14eb90u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14eb94: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14eb94u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14eb98: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14eb98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14eb9c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14eb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14eba0: 0x25070040  addiu       $a3, $t0, 0x40
    ctx->pc = 0x14eba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x14eba4: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x14eba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14eba8: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x14eba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ebac: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x14ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ebb0: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x14ebb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ebb4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x14ebb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ebb8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14ebb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ebbc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ebc0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ebc0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ebc4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ebc4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ebc8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ebc8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ebcc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14ebccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x14ebd0: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x14ebd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ebd4: 0x25060050  addiu       $a2, $t0, 0x50
    ctx->pc = 0x14ebd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x14ebd8: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x14ebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ebdc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14ebdcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14ebe0: 0xc5030020  lwc1        $f3, 0x20($t0)
    ctx->pc = 0x14ebe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ebe4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14ebe4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14ebe8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14ebe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ebec: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x14ebecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ebf0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14ebf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ebf4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ebf8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ebf8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ebfc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ebfcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ec00: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ec00u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ec04: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14ec04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14ec08: 0xc502001c  lwc1        $f2, 0x1C($t0)
    ctx->pc = 0x14ec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ec0c: 0x25060060  addiu       $a2, $t0, 0x60
    ctx->pc = 0x14ec0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x14ec10: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x14ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ec14: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x14ec14u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x14ec18: 0xc5010020  lwc1        $f1, 0x20($t0)
    ctx->pc = 0x14ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ec1c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x14ec1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ec20: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14ec20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ec24: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x14ec24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ec28: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ec2c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ec2cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ec30: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ec30u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ec34: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ec34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ec38: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14ec38u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14ec3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ec3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ec40: 0x25060070  addiu       $a2, $t0, 0x70
    ctx->pc = 0x14ec40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x14ec44: 0xc5010020  lwc1        $f1, 0x20($t0)
    ctx->pc = 0x14ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ec48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14ec48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ec4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14ec4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ec50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14ec50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ec54: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ec54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ec58: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ec58u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ec5c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ec5cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ec60: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ec60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ec64: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14ec64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14ec68: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x14ec68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x14ec6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14ec6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14ec70: 0xc50000b8  lwc1        $f0, 0xB8($t0)
    ctx->pc = 0x14ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ec74: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x14ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ec78: 0x46010201  sub.s       $f8, $f0, $f1
    ctx->pc = 0x14ec78u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14ec7c: 0x46024228  max.s       $f8, $f8, $f2
    ctx->pc = 0x14ec7cu;
    ctx->f[8] = std::max(ctx->f[8], ctx->f[2]);
    // 0x14ec80: 0xc50400b4  lwc1        $f4, 0xB4($t0)
    ctx->pc = 0x14ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14ec84: 0xc50300d8  lwc1        $f3, 0xD8($t0)
    ctx->pc = 0x14ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ec88: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x14ec88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x14ec8c: 0xe50800c4  swc1        $f8, 0xC4($t0)
    ctx->pc = 0x14ec8cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 196), bits); }
    // 0x14ec90: 0x46011a41  sub.s       $f9, $f3, $f1
    ctx->pc = 0x14ec90u;
    ctx->f[9] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x14ec94: 0x0  nop
    ctx->pc = 0x14ec94u;
    // NOP
    // 0x14ec98: 0x0  nop
    ctx->pc = 0x14ec98u;
    // NOP
    // 0x14ec9c: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x14ec9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x14eca0: 0xe50400c0  swc1        $f4, 0xC0($t0)
    ctx->pc = 0x14eca0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 192), bits); }
    // 0x14eca4: 0x46024a68  max.s       $f9, $f9, $f2
    ctx->pc = 0x14eca4u;
    ctx->f[9] = std::max(ctx->f[9], ctx->f[2]);
    // 0x14eca8: 0xc50700d4  lwc1        $f7, 0xD4($t0)
    ctx->pc = 0x14eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14ecac: 0xc50a00a0  lwc1        $f10, 0xA0($t0)
    ctx->pc = 0x14ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x14ecb0: 0x460749c2  mul.s       $f7, $f9, $f7
    ctx->pc = 0x14ecb0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x14ecb4: 0xe50900e4  swc1        $f9, 0xE4($t0)
    ctx->pc = 0x14ecb4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 228), bits); }
    // 0x14ecb8: 0x46015281  sub.s       $f10, $f10, $f1
    ctx->pc = 0x14ecb8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x14ecbc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x14ecbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x14ecc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14ecc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ecc4: 0x0  nop
    ctx->pc = 0x14ecc4u;
    // NOP
    // 0x14ecc8: 0x0  nop
    ctx->pc = 0x14ecc8u;
    // NOP
    // 0x14eccc: 0x460339c3  div.s       $f7, $f7, $f3
    ctx->pc = 0x14ecccu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[7], ctx->f[3]); }
    // 0x14ecd0: 0xe50700e0  swc1        $f7, 0xE0($t0)
    ctx->pc = 0x14ecd0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 224), bits); }
    // 0x14ecd4: 0x460052a8  max.s       $f10, $f10, $f0
    ctx->pc = 0x14ecd4u;
    ctx->f[10] = std::max(ctx->f[10], ctx->f[0]);
    // 0x14ecd8: 0xc50e00ac  lwc1        $f14, 0xAC($t0)
    ctx->pc = 0x14ecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x14ecdc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x14ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x14ece0: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x14ece0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x14ece4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14ece4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ece8: 0x25030084  addiu       $v1, $t0, 0x84
    ctx->pc = 0x14ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 132));
    // 0x14ecec: 0xc7818200  lwc1        $f1, -0x7E00($gp)
    ctx->pc = 0x14ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ecf0: 0x24429b38  addiu       $v0, $v0, -0x64C8
    ctx->pc = 0x14ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941496));
    // 0x14ecf4: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x14ecf4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x14ecf8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14ecf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14ecfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14ecfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ed00: 0xc50d001c  lwc1        $f13, 0x1C($t0)
    ctx->pc = 0x14ed00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14ed04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ed08: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x14ed08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14ed0c: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x14ed0cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x14ed10: 0xc50b00f4  lwc1        $f11, 0xF4($t0)
    ctx->pc = 0x14ed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x14ed14: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x14ed14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x14ed18: 0xc78f8204  lwc1        $f15, -0x7DFC($gp)
    ctx->pc = 0x14ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x14ed1c: 0x0  nop
    ctx->pc = 0x14ed1cu;
    // NOP
    // 0x14ed20: 0x0  nop
    ctx->pc = 0x14ed20u;
    // NOP
    // 0x14ed24: 0x46017383  div.s       $f14, $f14, $f1
    ctx->pc = 0x14ed24u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[14], ctx->f[1]); }
    // 0x14ed28: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x14ed28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x14ed2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14ed2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ed30: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x14ed30u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x14ed34: 0xc7808208  lwc1        $f0, -0x7DF8($gp)
    ctx->pc = 0x14ed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ed38: 0xc782820c  lwc1        $f2, -0x7DF4($gp)
    ctx->pc = 0x14ed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ed3c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x14ed3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x14ed40: 0xc50c00bc  lwc1        $f12, 0xBC($t0)
    ctx->pc = 0x14ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14ed44: 0xc50500dc  lwc1        $f5, 0xDC($t0)
    ctx->pc = 0x14ed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14ed48: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x14ed48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x14ed4c: 0xc50600f8  lwc1        $f6, 0xF8($t0)
    ctx->pc = 0x14ed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x14ed50: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x14ed50u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x14ed54: 0x0  nop
    ctx->pc = 0x14ed54u;
    // NOP
    // 0x14ed58: 0x0  nop
    ctx->pc = 0x14ed58u;
    // NOP
    // 0x14ed5c: 0x46037c03  div.s       $f16, $f15, $f3
    ctx->pc = 0x14ed5cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = FPU_DIV_S(ctx->f[15], ctx->f[3]); }
    // 0x14ed60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14ed60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14ed64: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14ed64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14ed68: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x14ed68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x14ed6c: 0xe50000a8  swc1        $f0, 0xA8($t0)
    ctx->pc = 0x14ed6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 168), bits); }
    // 0x14ed70: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x14ed70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x14ed74: 0xe50400c8  swc1        $f4, 0xC8($t0)
    ctx->pc = 0x14ed74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 200), bits); }
    // 0x14ed78: 0x460b18c1  sub.s       $f3, $f3, $f11
    ctx->pc = 0x14ed78u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[11]);
    // 0x14ed7c: 0xe50800cc  swc1        $f8, 0xCC($t0)
    ctx->pc = 0x14ed7cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 204), bits); }
    // 0x14ed80: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x14ed80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x14ed84: 0xe50a00a4  swc1        $f10, 0xA4($t0)
    ctx->pc = 0x14ed84u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 164), bits); }
    // 0x14ed88: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x14ed88u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x14ed8c: 0xe50500f0  swc1        $f5, 0xF0($t0)
    ctx->pc = 0x14ed8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 240), bits); }
    // 0x14ed90: 0x0  nop
    ctx->pc = 0x14ed90u;
    // NOP
    // 0x14ed94: 0x0  nop
    ctx->pc = 0x14ed94u;
    // NOP
    // 0x14ed98: 0x460d7bc3  div.s       $f15, $f15, $f13
    ctx->pc = 0x14ed98u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = FPU_DIV_S(ctx->f[15], ctx->f[13]); }
    // 0x14ed9c: 0xe5060100  swc1        $f6, 0x100($t0)
    ctx->pc = 0x14ed9cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 256), bits); }
    // 0x14eda0: 0x46024a42  mul.s       $f9, $f9, $f2
    ctx->pc = 0x14eda0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x14eda4: 0xe50300fc  swc1        $f3, 0xFC($t0)
    ctx->pc = 0x14eda4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 252), bits); }
    // 0x14eda8: 0x46007024  .word       0x46007024                   # cvt.w.s     $f0, $f14 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14eda8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[14]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14edac: 0xe50000b0  swc1        $f0, 0xB0($t0)
    ctx->pc = 0x14edacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 176), bits); }
    // 0x14edb0: 0xe50c00d0  swc1        $f12, 0xD0($t0)
    ctx->pc = 0x14edb0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 208), bits); }
    // 0x14edb4: 0xe50700e8  swc1        $f7, 0xE8($t0)
    ctx->pc = 0x14edb4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 232), bits); }
    // 0x14edb8: 0xe50900ec  swc1        $f9, 0xEC($t0)
    ctx->pc = 0x14edb8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 236), bits); }
    // 0x14edbc: 0x0  nop
    ctx->pc = 0x14edbcu;
    // NOP
    ctx->pc = 0x14edc0u;
}
