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

// Function: entry_0010b760
// Address: 0x10b760 - 0x10b888
void entry_0010b760_0x10b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b760_0x10b760");
#endif

    switch (ctx->pc) {
        case 0x10b768u: goto label_10b768;
        case 0x10b774u: goto label_10b774;
        default: break;
    }

    ctx->pc = 0x10b760u;

    // 0x10b760: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B760u;
    SET_GPR_U32(ctx, 31, 0x10B768u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B760u, 0x10B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B768u;
label_10b768:
    // 0x10b768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b76c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B76Cu;
    SET_GPR_U32(ctx, 31, 0x10B774u);
    ctx->pc = 0x10B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B76Cu;
    // 0x10b770: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B76Cu, 0x10B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B774u;
label_10b774:
    // 0x10b774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10b774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b778: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10b778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10b77c: 0x26470150  addiu       $a3, $s2, 0x150
    ctx->pc = 0x10b77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x10b780: 0x44902000  mtc1        $s0, $f4
    ctx->pc = 0x10b780u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10b784: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x10b784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x10b788: 0xc7838044  lwc1        $f3, -0x7FBC($gp)
    ctx->pc = 0x10b788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10b78c: 0x94e30052  lhu         $v1, 0x52($a3)
    ctx->pc = 0x10b78cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x10b790: 0x24e80030  addiu       $t0, $a3, 0x30
    ctx->pc = 0x10b790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x10b794: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x10b794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x10b798: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10b798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10b79c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10b79cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10b7a0: 0x94e40054  lhu         $a0, 0x54($a3)
    ctx->pc = 0x10b7a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10b7a4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x10b7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x10b7a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10b7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10b7ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10b7acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10b7b0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x10b7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10b7b4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x10b7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x10b7b8: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x10b7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10b7bc: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x10b7bcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x10b7c0: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10b7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10b7c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10b7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10b7c8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x10b7c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x10b7cc: 0x0  nop
    ctx->pc = 0x10b7ccu;
    // NOP
    // 0x10b7d0: 0x0  nop
    ctx->pc = 0x10b7d0u;
    // NOP
    // 0x10b7d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x10b7d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x10b7d8: 0x44843800  mtc1        $a0, $f7
    ctx->pc = 0x10b7d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x10b7dc: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x10b7dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x10b7e0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x10b7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x10b7e4: 0x0  nop
    ctx->pc = 0x10b7e4u;
    // NOP
    // 0x10b7e8: 0x0  nop
    ctx->pc = 0x10b7e8u;
    // NOP
    // 0x10b7ec: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x10b7ecu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[5]); }
    // 0x10b7f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10b7f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10b7f4: 0xe4e0006c  swc1        $f0, 0x6C($a3)
    ctx->pc = 0x10b7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
    // 0x10b7f8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x10b7f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x10b7fc: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x10b7fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x10b800: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x10b800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10b804: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x10b804u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x10b808: 0xe4e40068  swc1        $f4, 0x68($a3)
    ctx->pc = 0x10b808u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
    // 0x10b80c: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x10b80cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x10b810: 0xe4e3002c  swc1        $f3, 0x2C($a3)
    ctx->pc = 0x10b810u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10b814: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x10b814u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
    // 0x10b818: 0xe4e50060  swc1        $f5, 0x60($a3)
    ctx->pc = 0x10b818u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x10b81c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x10b81cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x10b820: 0xe4e10024  swc1        $f1, 0x24($a3)
    ctx->pc = 0x10b820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10b824: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x10b824u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x10b828: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x10b828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10b82c: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x10b82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10b830: 0xe4e20020  swc1        $f2, 0x20($a3)
    ctx->pc = 0x10b830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10b834: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x10b834u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x10b838: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x10b838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b83c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10b83cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b840: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10b840u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10b844: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10b844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10b848: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10b848u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b84c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10b84cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10b850: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10b850u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10b854: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10b854u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10b858: 0xc4e3002c  lwc1        $f3, 0x2C($a3)
    ctx->pc = 0x10b858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10b85c: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x10b85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x10b860: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10b860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b864: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10b864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b868: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x10b868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b86c: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10b86cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10b870: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10b870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10b874: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10b874u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b878: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10b878u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10b87c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10b87cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10b880: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10b880u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10b884: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10b884u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->pc = 0x10b888u;
}
