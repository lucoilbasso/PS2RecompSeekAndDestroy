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

// Function: entry_0014deb8
// Address: 0x14deb8 - 0x14e110
void entry_0014deb8_0x14deb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014deb8_0x14deb8");
#endif

    ctx->pc = 0x14deb8u;

    // 0x14deb8: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x14deb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x14debc: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x14debcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dec0: 0x25060030  addiu       $a2, $t0, 0x30
    ctx->pc = 0x14dec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x14dec4: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x14dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14dec8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14dec8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14decc: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x14deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ded0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14ded0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ded4: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x14ded4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ded8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14ded8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14dedc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14dedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14dee0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14dee0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14dee4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14dee4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14dee8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14dee8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14deec: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14deecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14def0: 0x25070040  addiu       $a3, $t0, 0x40
    ctx->pc = 0x14def0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x14def4: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x14def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14def8: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x14def8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14defc: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x14defcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14df00: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x14df00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14df04: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x14df04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14df08: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14df08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14df0c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14df10: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14df10u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14df14: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14df14u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14df18: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14df18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14df1c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14df1cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x14df20: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x14df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14df24: 0x25060050  addiu       $a2, $t0, 0x50
    ctx->pc = 0x14df24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x14df28: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x14df28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14df2c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14df2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14df30: 0xc5030020  lwc1        $f3, 0x20($t0)
    ctx->pc = 0x14df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14df34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14df34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14df38: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14df38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14df3c: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x14df3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14df40: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14df40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14df44: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14df44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14df48: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14df48u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14df4c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14df4cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14df50: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14df50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14df54: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14df54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14df58: 0xc502001c  lwc1        $f2, 0x1C($t0)
    ctx->pc = 0x14df58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14df5c: 0x25060060  addiu       $a2, $t0, 0x60
    ctx->pc = 0x14df5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x14df60: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x14df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14df64: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x14df64u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x14df68: 0xc5010020  lwc1        $f1, 0x20($t0)
    ctx->pc = 0x14df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14df6c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x14df6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14df70: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14df70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14df74: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x14df74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14df78: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14df78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14df7c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14df7cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14df80: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14df80u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14df84: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14df84u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14df88: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14df88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14df8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14df8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14df90: 0x25060070  addiu       $a2, $t0, 0x70
    ctx->pc = 0x14df90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x14df94: 0xc5010020  lwc1        $f1, 0x20($t0)
    ctx->pc = 0x14df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14df98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14df98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14df9c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14df9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14dfa0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14dfa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14dfa4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14dfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14dfa8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14dfa8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14dfac: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14dfacu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14dfb0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14dfb0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14dfb4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14dfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14dfb8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x14dfb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x14dfbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14dfbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14dfc0: 0xc50000b8  lwc1        $f0, 0xB8($t0)
    ctx->pc = 0x14dfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dfc4: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x14dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dfc8: 0x46010201  sub.s       $f8, $f0, $f1
    ctx->pc = 0x14dfc8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14dfcc: 0x46024228  max.s       $f8, $f8, $f2
    ctx->pc = 0x14dfccu;
    ctx->f[8] = std::max(ctx->f[8], ctx->f[2]);
    // 0x14dfd0: 0xc50400b4  lwc1        $f4, 0xB4($t0)
    ctx->pc = 0x14dfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14dfd4: 0xc50300d8  lwc1        $f3, 0xD8($t0)
    ctx->pc = 0x14dfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14dfd8: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x14dfd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x14dfdc: 0xe50800c4  swc1        $f8, 0xC4($t0)
    ctx->pc = 0x14dfdcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 196), bits); }
    // 0x14dfe0: 0x46011a41  sub.s       $f9, $f3, $f1
    ctx->pc = 0x14dfe0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x14dfe4: 0x0  nop
    ctx->pc = 0x14dfe4u;
    // NOP
    // 0x14dfe8: 0x0  nop
    ctx->pc = 0x14dfe8u;
    // NOP
    // 0x14dfec: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x14dfecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x14dff0: 0xe50400c0  swc1        $f4, 0xC0($t0)
    ctx->pc = 0x14dff0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 192), bits); }
    // 0x14dff4: 0x46024a68  max.s       $f9, $f9, $f2
    ctx->pc = 0x14dff4u;
    ctx->f[9] = std::max(ctx->f[9], ctx->f[2]);
    // 0x14dff8: 0xc50700d4  lwc1        $f7, 0xD4($t0)
    ctx->pc = 0x14dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14dffc: 0xc50a00a0  lwc1        $f10, 0xA0($t0)
    ctx->pc = 0x14dffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x14e000: 0x460749c2  mul.s       $f7, $f9, $f7
    ctx->pc = 0x14e000u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x14e004: 0xe50900e4  swc1        $f9, 0xE4($t0)
    ctx->pc = 0x14e004u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 228), bits); }
    // 0x14e008: 0x46015281  sub.s       $f10, $f10, $f1
    ctx->pc = 0x14e008u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[1]);
    // 0x14e00c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x14e00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x14e010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e014: 0x0  nop
    ctx->pc = 0x14e014u;
    // NOP
    // 0x14e018: 0x0  nop
    ctx->pc = 0x14e018u;
    // NOP
    // 0x14e01c: 0x460339c3  div.s       $f7, $f7, $f3
    ctx->pc = 0x14e01cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[7], ctx->f[3]); }
    // 0x14e020: 0xe50700e0  swc1        $f7, 0xE0($t0)
    ctx->pc = 0x14e020u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 224), bits); }
    // 0x14e024: 0x460052a8  max.s       $f10, $f10, $f0
    ctx->pc = 0x14e024u;
    ctx->f[10] = std::max(ctx->f[10], ctx->f[0]);
    // 0x14e028: 0xc50e00ac  lwc1        $f14, 0xAC($t0)
    ctx->pc = 0x14e028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x14e02c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x14e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x14e030: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x14e030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x14e034: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e038: 0x25030084  addiu       $v1, $t0, 0x84
    ctx->pc = 0x14e038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 132));
    // 0x14e03c: 0xc78181e0  lwc1        $f1, -0x7E20($gp)
    ctx->pc = 0x14e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e040: 0x24429b38  addiu       $v0, $v0, -0x64C8
    ctx->pc = 0x14e040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941496));
    // 0x14e044: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x14e044u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x14e048: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14e048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14e04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14e04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e050: 0xc50d001c  lwc1        $f13, 0x1C($t0)
    ctx->pc = 0x14e050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14e054: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x14e054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e058: 0xc5030018  lwc1        $f3, 0x18($t0)
    ctx->pc = 0x14e058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14e05c: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x14e05cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x14e060: 0xc50b00f4  lwc1        $f11, 0xF4($t0)
    ctx->pc = 0x14e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x14e064: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x14e064u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x14e068: 0xc78f81e4  lwc1        $f15, -0x7E1C($gp)
    ctx->pc = 0x14e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x14e06c: 0x0  nop
    ctx->pc = 0x14e06cu;
    // NOP
    // 0x14e070: 0x0  nop
    ctx->pc = 0x14e070u;
    // NOP
    // 0x14e074: 0x46017383  div.s       $f14, $f14, $f1
    ctx->pc = 0x14e074u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[14], ctx->f[1]); }
    // 0x14e078: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x14e078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x14e07c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14e07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e080: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x14e080u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x14e084: 0xc78081e8  lwc1        $f0, -0x7E18($gp)
    ctx->pc = 0x14e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e088: 0xc78281ec  lwc1        $f2, -0x7E14($gp)
    ctx->pc = 0x14e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14e08c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x14e08cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x14e090: 0xc50c00bc  lwc1        $f12, 0xBC($t0)
    ctx->pc = 0x14e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14e094: 0xc50500dc  lwc1        $f5, 0xDC($t0)
    ctx->pc = 0x14e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14e098: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x14e098u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x14e09c: 0xc50600f8  lwc1        $f6, 0xF8($t0)
    ctx->pc = 0x14e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x14e0a0: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x14e0a0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x14e0a4: 0x0  nop
    ctx->pc = 0x14e0a4u;
    // NOP
    // 0x14e0a8: 0x0  nop
    ctx->pc = 0x14e0a8u;
    // NOP
    // 0x14e0ac: 0x46037c03  div.s       $f16, $f15, $f3
    ctx->pc = 0x14e0acu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = FPU_DIV_S(ctx->f[15], ctx->f[3]); }
    // 0x14e0b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14e0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14e0b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14e0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14e0b8: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x14e0b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x14e0bc: 0xe50000a8  swc1        $f0, 0xA8($t0)
    ctx->pc = 0x14e0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 168), bits); }
    // 0x14e0c0: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x14e0c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x14e0c4: 0xe50400c8  swc1        $f4, 0xC8($t0)
    ctx->pc = 0x14e0c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 200), bits); }
    // 0x14e0c8: 0x460b18c1  sub.s       $f3, $f3, $f11
    ctx->pc = 0x14e0c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[11]);
    // 0x14e0cc: 0xe50800cc  swc1        $f8, 0xCC($t0)
    ctx->pc = 0x14e0ccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 204), bits); }
    // 0x14e0d0: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x14e0d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x14e0d4: 0xe50a00a4  swc1        $f10, 0xA4($t0)
    ctx->pc = 0x14e0d4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 164), bits); }
    // 0x14e0d8: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x14e0d8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x14e0dc: 0xe50500f0  swc1        $f5, 0xF0($t0)
    ctx->pc = 0x14e0dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 240), bits); }
    // 0x14e0e0: 0x0  nop
    ctx->pc = 0x14e0e0u;
    // NOP
    // 0x14e0e4: 0x0  nop
    ctx->pc = 0x14e0e4u;
    // NOP
    // 0x14e0e8: 0x460d7bc3  div.s       $f15, $f15, $f13
    ctx->pc = 0x14e0e8u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[15] = FPU_DIV_S(ctx->f[15], ctx->f[13]); }
    // 0x14e0ec: 0xe5060100  swc1        $f6, 0x100($t0)
    ctx->pc = 0x14e0ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 256), bits); }
    // 0x14e0f0: 0x46024a42  mul.s       $f9, $f9, $f2
    ctx->pc = 0x14e0f0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x14e0f4: 0xe50300fc  swc1        $f3, 0xFC($t0)
    ctx->pc = 0x14e0f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 252), bits); }
    // 0x14e0f8: 0x46007024  .word       0x46007024                   # cvt.w.s     $f0, $f14 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14e0f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[14]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14e0fc: 0xe50000b0  swc1        $f0, 0xB0($t0)
    ctx->pc = 0x14e0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 176), bits); }
    // 0x14e100: 0xe50c00d0  swc1        $f12, 0xD0($t0)
    ctx->pc = 0x14e100u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 208), bits); }
    // 0x14e104: 0xe50700e8  swc1        $f7, 0xE8($t0)
    ctx->pc = 0x14e104u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 232), bits); }
    // 0x14e108: 0xe50900ec  swc1        $f9, 0xEC($t0)
    ctx->pc = 0x14e108u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 236), bits); }
    // 0x14e10c: 0x0  nop
    ctx->pc = 0x14e10cu;
    // NOP
    ctx->pc = 0x14e110u;
}
