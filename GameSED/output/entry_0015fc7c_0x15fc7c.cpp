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

// Function: entry_0015fc7c
// Address: 0x15fc7c - 0x15fe84
void entry_0015fc7c_0x15fc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fc7c_0x15fc7c");
#endif

    ctx->pc = 0x15fc7cu;

    // 0x15fc7c: 0x6030081  bgezl       $s0, . + 4 + (0x81 << 2)
    ctx->pc = 0x15FC7Cu;
    {
        const bool branch_taken_0x15fc7c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x15fc7c) {
            ctx->pc = 0x15FC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FC7Cu;
            // 0x15fc80: 0x8e630fc0  lw          $v1, 0xFC0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4032)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FE84u;
            return;
        }
    }
    ctx->pc = 0x15FC84u;
    // 0x15fc84: 0x8e680f34  lw          $t0, 0xF34($s3)
    ctx->pc = 0x15fc84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
    // 0x15fc88: 0x2607003a  addiu       $a3, $s0, 0x3A
    ctx->pc = 0x15fc88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 58));
    // 0x15fc8c: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x15fc8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15fc90: 0x95020204  lhu         $v0, 0x204($t0)
    ctx->pc = 0x15fc90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 516)));
    // 0x15fc94: 0x25060150  addiu       $a2, $t0, 0x150
    ctx->pc = 0x15fc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x15fc98: 0x95040206  lhu         $a0, 0x206($t0)
    ctx->pc = 0x15fc98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 518)));
    // 0x15fc9c: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x15fc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x15fca0: 0x94ca0008  lhu         $t2, 0x8($a2)
    ctx->pc = 0x15fca0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15fca4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x15fca4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x15fca8: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x15fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x15fcac: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x15fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x15fcb0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x15fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x15fcb4: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x15fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x15fcb8: 0xa4c20050  sh          $v0, 0x50($a2)
    ctx->pc = 0x15fcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x15fcbc: 0xa4c40052  sh          $a0, 0x52($a2)
    ctx->pc = 0x15fcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 82), (uint16_t)GPR_U32(ctx, 4));
    // 0x15fcc0: 0x1431807  srav        $v1, $v1, $t2
    ctx->pc = 0x15fcc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 10) & 0x1F));
    // 0x15fcc4: 0xa4cb0054  sh          $t3, 0x54($a2)
    ctx->pc = 0x15fcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 11));
    // 0x15fcc8: 0xa4c70056  sh          $a3, 0x56($a2)
    ctx->pc = 0x15fcc8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 7));
    // 0x15fccc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x15fcccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x15fcd0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15fcd0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15fcd4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15fcd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15fcd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fcdc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x15fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x15fce0: 0x94c9000a  lhu         $t1, 0xA($a2)
    ctx->pc = 0x15fce0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x15fce4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x15fce4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x15fce8: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x15fce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
    // 0x15fcec: 0x41bc0  sll         $v1, $a0, 15
    ctx->pc = 0x15fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x15fcf0: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x15fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x15fcf4: 0x1231807  srav        $v1, $v1, $t1
    ctx->pc = 0x15fcf4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 9) & 0x1F));
    // 0x15fcf8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x15fcf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x15fcfc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15fcfcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15fd00: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15fd00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15fd04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fd04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fd08: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x15fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x15fd0c: 0xe4c00064  swc1        $f0, 0x64($a2)
    ctx->pc = 0x15fd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
    // 0x15fd10: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15fd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15fd14: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x15fd14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x15fd18: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x15fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x15fd1c: 0x1452807  srav        $a1, $a1, $t2
    ctx->pc = 0x15fd1cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 10) & 0x1F));
    // 0x15fd20: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x15fd20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x15fd24: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15fd24u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15fd28: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15fd28u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15fd2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fd2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fd30: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x15fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x15fd34: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x15fd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
    // 0x15fd38: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x15fd38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x15fd3c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15fd40: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x15fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x15fd44: 0x2484c000  addiu       $a0, $a0, -0x4000
    ctx->pc = 0x15fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
    // 0x15fd48: 0x1242007  srav        $a0, $a0, $t1
    ctx->pc = 0x15fd48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 9) & 0x1F));
    // 0x15fd4c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x15fd4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x15fd50: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15fd50u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15fd54: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x15fd54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15fd58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fd58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15fd5c: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x15fd5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15fd60: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x15fd60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x15fd64: 0x25070180  addiu       $a3, $t0, 0x180
    ctx->pc = 0x15fd64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 384));
    // 0x15fd68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15fd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15fd6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15fd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fd70: 0x448b1000  mtc1        $t3, $f2
    ctx->pc = 0x15fd70u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15fd74: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x15fd74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x15fd78: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x15fd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x15fd7c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x15fd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15fd80: 0xe4c1006c  swc1        $f1, 0x6C($a2)
    ctx->pc = 0x15fd80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 108), bits); }
    // 0x15fd84: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x15fd84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15fd88: 0xa4c0000e  sh          $zero, 0xE($a2)
    ctx->pc = 0x15fd88u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x15fd8c: 0xe4c20028  swc1        $f2, 0x28($a2)
    ctx->pc = 0x15fd8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
    // 0x15fd90: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x15fd90u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x15fd94: 0xe4c4002c  swc1        $f4, 0x2C($a2)
    ctx->pc = 0x15fd94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
    // 0x15fd98: 0xe4c50020  swc1        $f5, 0x20($a2)
    ctx->pc = 0x15fd98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x15fd9c: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x15fd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x15fda0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15fda0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15fda4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15fda4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15fda8: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x15fda8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15fdac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15fdacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15fdb0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15fdb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15fdb4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15fdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15fdb8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15fdb8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x15fdbc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15fdbcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x15fdc0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15fdc0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15fdc4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15fdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x15fdc8: 0x25080190  addiu       $t0, $t0, 0x190
    ctx->pc = 0x15fdc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 400));
    // 0x15fdcc: 0xc4c1002c  lwc1        $f1, 0x2C($a2)
    ctx->pc = 0x15fdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fdd0: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x15fdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fdd4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15fdd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15fdd8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15fdd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15fddc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15fddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15fde0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15fde4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15fde4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x15fde8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15fde8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x15fdec: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15fdecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15fdf0: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x15fdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x15fdf4: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x15fdf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15fdf8: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15fdf8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15fdfc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15fdfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15fe00: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x15fe00u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15fe04: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15fe08: 0x8e660f34  lw          $a2, 0xF34($s3)
    ctx->pc = 0x15fe08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
    // 0x15fe0c: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x15fe0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x15fe10: 0x24c70150  addiu       $a3, $a2, 0x150
    ctx->pc = 0x15fe10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
    // 0x15fe14: 0x24c80180  addiu       $t0, $a2, 0x180
    ctx->pc = 0x15fe14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x15fe18: 0xe4e50020  swc1        $f5, 0x20($a3)
    ctx->pc = 0x15fe18u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x15fe1c: 0xa4e2000e  sh          $v0, 0xE($a3)
    ctx->pc = 0x15fe1cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x15fe20: 0xe4e40024  swc1        $f4, 0x24($a3)
    ctx->pc = 0x15fe20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x15fe24: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x15fe24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15fe28: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15fe28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15fe2c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15fe2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15fe30: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15fe34: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15fe34u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x15fe38: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15fe38u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x15fe3c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15fe3cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15fe40: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x15fe40u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x15fe44: 0x24c60190  addiu       $a2, $a2, 0x190
    ctx->pc = 0x15fe44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 400));
    // 0x15fe48: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x15fe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fe4c: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x15fe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fe50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15fe50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15fe54: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15fe54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15fe58: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15fe58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15fe5c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15fe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15fe60: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15fe60u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x15fe64: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15fe64u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x15fe68: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15fe68u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15fe6c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15fe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x15fe70: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15fe70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15fe74: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x15fe74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15fe78: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15fe78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15fe7c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15fe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15fe80: 0x8e630fc0  lw          $v1, 0xFC0($s3)
    ctx->pc = 0x15fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4032)));
    ctx->pc = 0x15fe84u;
}
