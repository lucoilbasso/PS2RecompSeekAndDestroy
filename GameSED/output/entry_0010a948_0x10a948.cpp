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

// Function: entry_0010a948
// Address: 0x10a948 - 0x10aa8c
void entry_0010a948_0x10a948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a948_0x10a948");
#endif

    switch (ctx->pc) {
        case 0x10a954u: goto label_10a954;
        default: break;
    }

    ctx->pc = 0x10a948u;

    // 0x10a948: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10a948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a94c: 0xc0631a2  jal         func_18C688
    ctx->pc = 0x10A94Cu;
    SET_GPR_U32(ctx, 31, 0x10A954u);
    ctx->pc = 0x10A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A94Cu;
    // 0x10a950: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C688u, 0x10A94Cu, 0x10A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A954u;
label_10a954:
    // 0x10a954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a958: 0x16c3004c  bne         $s6, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x10A958u;
    {
        const bool branch_taken_0x10a958 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x10A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A958u;
        // 0x10a95c: 0x8fa50058  lw          $a1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a958) {
            ctx->pc = 0x10AA8Cu;
            return;
        }
    }
    ctx->pc = 0x10A960u;
    // 0x10a960: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x10a960u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x10a964: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x10a964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x10a968: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10a968u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10a96c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x10a96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x10a970: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x10a970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x10a974: 0x26a70150  addiu       $a3, $s5, 0x150
    ctx->pc = 0x10a974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
    // 0x10a978: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10a978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a97c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10a97cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10a980: 0x94e30052  lhu         $v1, 0x52($a3)
    ctx->pc = 0x10a980u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x10a984: 0xc7838038  lwc1        $f3, -0x7FC8($gp)
    ctx->pc = 0x10a984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10a988: 0x24e80030  addiu       $t0, $a3, 0x30
    ctx->pc = 0x10a988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x10a98c: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x10a98cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x10a990: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10a990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a994: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10a994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10a998: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x10a998u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x10a99c: 0x94e40054  lhu         $a0, 0x54($a3)
    ctx->pc = 0x10a99cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10a9a0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x10a9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10a9a4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x10a9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x10a9a8: 0x94e20056  lhu         $v0, 0x56($a3)
    ctx->pc = 0x10a9a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10a9ac: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x10a9acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x10a9b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10a9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10a9b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10a9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10a9b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10a9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10a9bc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x10a9bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x10a9c0: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10a9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10a9c4: 0x44843800  mtc1        $a0, $f7
    ctx->pc = 0x10a9c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x10a9c8: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x10a9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x10a9cc: 0x0  nop
    ctx->pc = 0x10a9ccu;
    // NOP
    // 0x10a9d0: 0x0  nop
    ctx->pc = 0x10a9d0u;
    // NOP
    // 0x10a9d4: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x10a9d4u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[5]); }
    // 0x10a9d8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x10a9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x10a9dc: 0x0  nop
    ctx->pc = 0x10a9dcu;
    // NOP
    // 0x10a9e0: 0x0  nop
    ctx->pc = 0x10a9e0u;
    // NOP
    // 0x10a9e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x10a9e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10a9e8: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x10a9e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x10a9ec: 0xe4e40068  swc1        $f4, 0x68($a3)
    ctx->pc = 0x10a9ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 104), bits); }
    // 0x10a9f0: 0xe4e50060  swc1        $f5, 0x60($a3)
    ctx->pc = 0x10a9f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
    // 0x10a9f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10a9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10a9f8: 0xe4e1006c  swc1        $f1, 0x6C($a3)
    ctx->pc = 0x10a9f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
    // 0x10a9fc: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x10a9fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x10aa00: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x10aa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10aa04: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x10aa04u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
    // 0x10aa08: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x10aa08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x10aa0c: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x10aa0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x10aa10: 0xe4e3002c  swc1        $f3, 0x2C($a3)
    ctx->pc = 0x10aa10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10aa14: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x10aa14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10aa18: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x10aa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10aa1c: 0xe4e10024  swc1        $f1, 0x24($a3)
    ctx->pc = 0x10aa1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10aa20: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x10aa20u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x10aa24: 0xe4e20020  swc1        $f2, 0x20($a3)
    ctx->pc = 0x10aa24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10aa28: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x10aa28u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x10aa2c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x10aa2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10aa30: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10aa30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10aa34: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10aa34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10aa38: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10aa3c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10aa3cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10aa40: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10aa40u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10aa44: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10aa44u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10aa48: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10aa48u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10aa4c: 0xc4e3002c  lwc1        $f3, 0x2C($a3)
    ctx->pc = 0x10aa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10aa50: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x10aa50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x10aa54: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10aa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10aa58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10aa58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10aa5c: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x10aa5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10aa60: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x10aa60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10aa64: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10aa64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10aa68: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10aa68u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10aa6c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10aa6cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10aa70: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10aa70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10aa74: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10aa74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10aa78: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10aa78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10aa7c: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x10aa7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10aa80: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10aa80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10aa84: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10aa84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10aa88: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x10aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x10aa8cu;
}
