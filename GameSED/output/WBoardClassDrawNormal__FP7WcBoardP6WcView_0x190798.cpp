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

// Function: WBoardClassDrawNormal__FP7WcBoardP6WcView
// Address: 0x190798 - 0x190de4
void WBoardClassDrawNormal__FP7WcBoardP6WcView_0x190798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WBoardClassDrawNormal__FP7WcBoardP6WcView_0x190798");
#endif

    switch (ctx->pc) {
        case 0x1907ccu: goto label_1907cc;
        case 0x190a50u: goto label_190a50;
        case 0x190a58u: goto label_190a58;
        case 0x190a7cu: goto label_190a7c;
        case 0x190d2cu: goto label_190d2c;
        case 0x190d38u: goto label_190d38;
        case 0x190d58u: goto label_190d58;
        case 0x190d60u: goto label_190d60;
        case 0x190d88u: goto label_190d88;
        default: break;
    }

    ctx->pc = 0x190798u;

    // 0x190798: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x190798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19079c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x19079cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1907a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1907a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1907a4: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x1907a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1907a8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1907a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1907ac: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1907acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1907b0: 0x26710150  addiu       $s1, $s3, 0x150
    ctx->pc = 0x1907b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
    // 0x1907b4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1907b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1907b8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1907b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1907bc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1907bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1907c0: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1907c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1907c4: 0xc061422  jal         func_185088
    ctx->pc = 0x1907C4u;
    SET_GPR_U32(ctx, 31, 0x1907CCu);
    ctx->pc = 0x1907C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1907C4u;
    // 0x1907c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1907C4u, 0x1907CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1907CCu;
label_1907cc:
    // 0x1907cc: 0x8e650270  lw          $a1, 0x270($s3)
    ctx->pc = 0x1907ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x1907d0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1907d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1907d4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1907d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1907d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1907d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1907dc: 0x266800e0  addiu       $t0, $s3, 0xE0
    ctx->pc = 0x1907dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    // 0x1907e0: 0x2449eb70  addiu       $t1, $v0, -0x1490
    ctx->pc = 0x1907e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x1907e4: 0x246bebf0  addiu       $t3, $v1, -0x1410
    ctx->pc = 0x1907e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962160));
    // 0x1907e8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1907e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1907ec: 0x266a0240  addiu       $t2, $s3, 0x240
    ctx->pc = 0x1907ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
    // 0x1907f0: 0x26660220  addiu       $a2, $s3, 0x220
    ctx->pc = 0x1907f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 544));
    // 0x1907f4: 0x14a40034  bne         $a1, $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1907F4u;
    {
        const bool branch_taken_0x1907f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1907F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907F4u;
        // 0x1907f8: 0x26670230  addiu       $a3, $s3, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907f4) {
            ctx->pc = 0x1908C8u;
            goto label_1908c8;
        }
    }
    ctx->pc = 0x1907FCu;
    // 0x1907fc: 0x79020020  lq          $v0, 0x20($t0)
    ctx->pc = 0x1907fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x190800: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x190800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x190804: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x190804u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190808: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x190808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19080c: 0xd9250010  lqc2        $vf5, 0x10($t1)
    ctx->pc = 0x19080cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x190810: 0xd9260020  lqc2        $vf6, 0x20($t1)
    ctx->pc = 0x190810u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x190814: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x190814u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x190818: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x190818u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x19081c: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x19081cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x190820: 0xfba80000  sqc2        $vf8, 0x0($sp)
    ctx->pc = 0x190820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x190824: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x190824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190828: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x190828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19082c: 0x45030165  bc1tl       . + 4 + (0x165 << 2)
    ctx->pc = 0x19082Cu;
    {
        const bool branch_taken_0x19082c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19082c) {
            ctx->pc = 0x190830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19082Cu;
            // 0x190830: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190DC4u;
            goto label_190dc4;
        }
    }
    ctx->pc = 0x190834u;
    // 0x190834: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x190834u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190838: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x190838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19083c: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x19083cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x190840: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x190840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x190844: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x190844u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x190848: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19084c: 0xc78085ac  lwc1        $f0, -0x7A54($gp)
    ctx->pc = 0x19084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190850: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190854: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x190854u;
    {
        const bool branch_taken_0x190854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190854) {
            ctx->pc = 0x19086Cu;
            goto label_19086c;
        }
    }
    ctx->pc = 0x19085Cu;
    // 0x19085c: 0xc78085b0  lwc1        $f0, -0x7A50($gp)
    ctx->pc = 0x19085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190860: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x190860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190864: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x190864u;
    {
        const bool branch_taken_0x190864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190864u;
        // 0x190868: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190864) {
            ctx->pc = 0x190884u;
            goto label_190884;
        }
    }
    ctx->pc = 0x19086Cu;
label_19086c:
    // 0x19086c: 0x46010004  c1          0x10004
    ctx->pc = 0x19086cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x190870: 0x0  nop
    ctx->pc = 0x190870u;
    // NOP
    // 0x190874: 0x0  nop
    ctx->pc = 0x190874u;
    // NOP
    // 0x190878: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x190878u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x19087c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19087cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x190880: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x190880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190884:
    // 0x190884: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x190884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x190888: 0x2484de00  addiu       $a0, $a0, -0x2200
    ctx->pc = 0x190888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958592));
    // 0x19088c: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x19088cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x190890: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x190890u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190894: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x190894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x190898: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x190898u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19089c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19089cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1908a0: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1908a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1908a4: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x1908a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x1908a8: 0x2463de10  addiu       $v1, $v1, -0x21F0
    ctx->pc = 0x1908a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958608));
    // 0x1908ac: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1908acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1908b0: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1908b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1908b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1908b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1908b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1908b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1908bc: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1908bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1908c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1908c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1908c4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1908c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1908c8:
    // 0x1908c8: 0xc601017c  lwc1        $f1, 0x17C($s0)
    ctx->pc = 0x1908c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1908cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1908ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1908d0: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x1908d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1908d4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1908d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1908d8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1908d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1908dc: 0x4bee033d  vmr32.xyzw  $vf14, $vf0
    ctx->pc = 0x1908dcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1908e0: 0xd90b0030  lqc2        $vf11, 0x30($t0)
    ctx->pc = 0x1908e0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1908e4: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x1908e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1908e8: 0xd9250010  lqc2        $vf5, 0x10($t1)
    ctx->pc = 0x1908e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1908ec: 0xd9260020  lqc2        $vf6, 0x20($t1)
    ctx->pc = 0x1908ecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x1908f0: 0xd9270030  lqc2        $vf7, 0x30($t1)
    ctx->pc = 0x1908f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x1908f4: 0xd89f0000  lqc2        $vf31, 0x0($a0)
    ctx->pc = 0x1908f4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1908f8: 0xd8de0000  lqc2        $vf30, 0x0($a2)
    ctx->pc = 0x1908f8u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1908fc: 0x4bed733d  vmr32.xyzw  $vf13, $vf14
    ctx->pc = 0x1908fcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x190900: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x190900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190904: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x190904u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190908: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x190908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19090c: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x19090cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x190910: 0x4bec6b3d  vmr32.xyzw  $vf12, $vf13
    ctx->pc = 0x190910u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190914: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x190914u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x190918: 0xd9650010  lqc2        $vf5, 0x10($t3)
    ctx->pc = 0x190918u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x19091c: 0xd9660020  lqc2        $vf6, 0x20($t3)
    ctx->pc = 0x19091cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x190920: 0xd9670030  lqc2        $vf7, 0x30($t3)
    ctx->pc = 0x190920u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x190924: 0x4bec21bc  vmulax.xyzw $ACC, $vf4, $vf12x
    ctx->pc = 0x190924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190928: 0x4bec28bd  vmadday.xyzw $ACC, $vf5, $vf12y
    ctx->pc = 0x190928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19092c: 0x4bec30be  vmaddaz.xyzw $ACC, $vf6, $vf12z
    ctx->pc = 0x19092cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190930: 0x4bec3a0b  vmaddw.xyzw $vf8, $vf7, $vf12w
    ctx->pc = 0x190930u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x190934: 0x4bed21bc  vmulax.xyzw $ACC, $vf4, $vf13x
    ctx->pc = 0x190934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190938: 0x4bed28bd  vmadday.xyzw $ACC, $vf5, $vf13y
    ctx->pc = 0x190938u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19093c: 0x4bed30be  vmaddaz.xyzw $ACC, $vf6, $vf13z
    ctx->pc = 0x19093cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190940: 0x4bed3a4b  vmaddw.xyzw $vf9, $vf7, $vf13w
    ctx->pc = 0x190940u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x190944: 0x4bee21bc  vmulax.xyzw $ACC, $vf4, $vf14x
    ctx->pc = 0x190944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190948: 0x4bee28bd  vmadday.xyzw $ACC, $vf5, $vf14y
    ctx->pc = 0x190948u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19094c: 0x4bee30be  vmaddaz.xyzw $ACC, $vf6, $vf14z
    ctx->pc = 0x19094cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190950: 0x4bee3a8b  vmaddw.xyzw $vf10, $vf7, $vf14w
    ctx->pc = 0x190950u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190954: 0x4bef21bc  vmulax.xyzw $ACC, $vf4, $vf15x
    ctx->pc = 0x190954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190958: 0x4bef28bd  vmadday.xyzw $ACC, $vf5, $vf15y
    ctx->pc = 0x190958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19095c: 0x4bef30be  vmaddaz.xyzw $ACC, $vf6, $vf15z
    ctx->pc = 0x19095cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190960: 0x4bef3acb  vmaddw.xyzw $vf11, $vf7, $vf15w
    ctx->pc = 0x190960u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190964: 0x4be041bc  vmulax.xyzw $ACC, $vf8, $vf0x
    ctx->pc = 0x190964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190968: 0x4be048bd  vmadday.xyzw $ACC, $vf9, $vf0y
    ctx->pc = 0x190968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19096c: 0x4be050be  vmaddaz.xyzw $ACC, $vf10, $vf0z
    ctx->pc = 0x19096cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190970: 0x4be05b0b  vmaddw.xyzw $vf12, $vf11, $vf0w
    ctx->pc = 0x190970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190974: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x190974u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x190978: 0x4be5016c  vsub.xyzw   $vf5, $vf0, $vf5
    ctx->pc = 0x190978u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19097c: 0x4a3f63d9  vmuly.w     $vf15, $vf12, $vf31y
    ctx->pc = 0x19097cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x190980: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x190980u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x190984: 0xd8c60000  lqc2        $vf6, 0x0($a2)
    ctx->pc = 0x190984u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190988: 0x4be629a8  vadd.xyzw   $vf6, $vf5, $vf6
    ctx->pc = 0x190988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19098c: 0x4a2ffbec  vsub.w      $vf15, $vf31, $vf15
    ctx->pc = 0x19098cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[31], ctx->vu0_vf[15]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x190990: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x190990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190994: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x190994u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190998: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x190998u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19099c: 0x4be55b4b  vmaddw.xyzw $vf13, $vf11, $vf5w
    ctx->pc = 0x19099cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1909a0: 0x4a207bd0  vmaxx.w     $vf15, $vf15, $vf0x
    ctx->pc = 0x1909a0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x1909a4: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x1909a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1909a8: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x1909a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1909ac: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x1909acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1909b0: 0x4be65b8b  vmaddw.xyzw $vf14, $vf11, $vf6w
    ctx->pc = 0x1909b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1909b4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1909b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1909b8: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x1909b8u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x1909bc: 0x4a207a1e  vmuli.w     $vf8, $vf15, $I
    ctx->pc = 0x1909bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1909c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1909c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1909c4: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x1909c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1909c8: 0x4bc06b5c  vmulq.xyz   $vf13, $vf13, $Q
    ctx->pc = 0x1909c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1909cc: 0x4bc0739c  vmulq.xyz   $vf14, $vf14, $Q
    ctx->pc = 0x1909ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1909d0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1909d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1909d4: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x1909d4u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x1909d8: 0x4a207b1f  vminii.w    $vf12, $vf15, $I
    ctx->pc = 0x1909d8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1909dc: 0x4a207b5f  vminii.w    $vf13, $vf15, $I
    ctx->pc = 0x1909dcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1909e0: 0x4a207b9f  vminii.w    $vf14, $vf15, $I
    ctx->pc = 0x1909e0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1909e4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1909e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1909e8: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x1909e8u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x1909ec: 0x4b000062  vaddi.x     $vf1, $vf0, $I
    ctx->pc = 0x1909ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1909f0: 0x4b080a17  vminiw.x    $vf8, $vf1, $vf8w
    ctx->pc = 0x1909f0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1909f4: 0x4bec617d  vftoi4.xyzw $vf12, $vf12
    ctx->pc = 0x1909f4u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1909f8: 0x4bed697d  vftoi4.xyzw $vf13, $vf13
    ctx->pc = 0x1909f8u;
    { __m128 src = ctx->vu0_vf[13]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1909fc: 0x4bee717d  vftoi4.xyzw $vf14, $vf14
    ctx->pc = 0x1909fcu;
    { __m128 src = ctx->vu0_vf[14]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x190a00: 0x48224000  qmfc2.ni    $v0, $vf8
    ctx->pc = 0x190a00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x190a04: 0xf94c0000  sqc2        $vf12, 0x0($t2)
    ctx->pc = 0x190a04u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x190a08: 0xf94d0010  sqc2        $vf13, 0x10($t2)
    ctx->pc = 0x190a08u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x190a0c: 0xf94e0020  sqc2        $vf14, 0x20($t2)
    ctx->pc = 0x190a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x190a10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190a14: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x190a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x190a18: 0x2472d650  addiu       $s2, $v1, -0x29B0
    ctx->pc = 0x190a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x190a1c: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x190a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x190a20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x190A20u;
    {
        const bool branch_taken_0x190a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A20u;
        // 0x190a24: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a20) {
            ctx->pc = 0x190A48u;
            goto label_190a48;
        }
    }
    ctx->pc = 0x190A28u;
    // 0x190a28: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x190a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x190a2c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x190a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190a30: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x190a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x190a34: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x190a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x190a38: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x190a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x190a3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x190A3Cu;
    {
        const bool branch_taken_0x190a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A3Cu;
        // 0x190a40: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a3c) {
            ctx->pc = 0x190A7Cu;
            goto label_190a7c;
        }
    }
    ctx->pc = 0x190A44u;
    // 0x190a44: 0x0  nop
    ctx->pc = 0x190a44u;
    // NOP
label_190a48:
    // 0x190a48: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x190A48u;
    SET_GPR_U32(ctx, 31, 0x190A50u);
    ctx->pc = 0x190A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A48u;
    // 0x190a4c: 0x8e440084  lw          $a0, 0x84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x190A48u, 0x190A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A50u;
label_190a50:
    // 0x190a50: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x190A50u;
    SET_GPR_U32(ctx, 31, 0x190A58u);
    ctx->pc = 0x190A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A50u;
    // 0x190a54: 0x8e440088  lw          $a0, 0x88($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x190A50u, 0x190A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A58u;
label_190a58:
    // 0x190a58: 0x8e50008c  lw          $s0, 0x8C($s2)
    ctx->pc = 0x190a58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x190a5c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x190a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x190a60: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x190a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x190a64: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x190a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x190a68: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x190a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x190a6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x190a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x190a70: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x190a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
    // 0x190a74: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x190A74u;
    SET_GPR_U32(ctx, 31, 0x190A7Cu);
    ctx->pc = 0x190A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A74u;
    // 0x190a78: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x190A74u, 0x190A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A7Cu;
label_190a7c:
    // 0x190a7c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x190a7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190a80: 0x200782d  daddu       $t7, $s0, $zero
    ctx->pc = 0x190a80u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190a84: 0x8de70000  lw          $a3, 0x0($t7)
    ctx->pc = 0x190a84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x190a88: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x190a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x190a8c: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x190a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x190a90: 0x2682b  sltu        $t5, $zero, $v0
    ctx->pc = 0x190a90u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x190a94: 0xade70008  sw          $a3, 0x8($t7)
    ctx->pc = 0x190a94u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 7));
    // 0x190a98: 0x24ee0010  addiu       $t6, $a3, 0x10
    ctx->pc = 0x190a98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x190a9c: 0x11a00012  beqz        $t5, . + 4 + (0x12 << 2)
    ctx->pc = 0x190A9Cu;
    {
        const bool branch_taken_0x190a9c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x190AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A9Cu;
        // 0x190aa0: 0x24eb0020  addiu       $t3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a9c) {
            ctx->pc = 0x190AE8u;
            goto label_190ae8;
        }
    }
    ctx->pc = 0x190AA4u;
    // 0x190aa4: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x190aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x190aa8: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x190aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x190aac: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x190aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x190ab0: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x190ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x190ab4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x190ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x190ab8: 0xfd640008  sd          $a0, 0x8($t3)
    ctx->pc = 0x190ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 4));
    // 0x190abc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x190abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x190ac0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x190ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x190ac4: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x190ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x190ac8: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x190ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x190acc: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x190accu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x190ad0: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x190ad0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x190ad4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x190ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x190ad8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x190ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x190adc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x190ADCu;
    {
        const bool branch_taken_0x190adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190ADCu;
        // 0x190ae0: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190adc) {
            ctx->pc = 0x190B18u;
            goto label_190b18;
        }
    }
    ctx->pc = 0x190AE4u;
    // 0x190ae4: 0x0  nop
    ctx->pc = 0x190ae4u;
    // NOP
label_190ae8:
    // 0x190ae8: 0x24e50030  addiu       $a1, $a3, 0x30
    ctx->pc = 0x190ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x190aec: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x190aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x190af0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x190af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x190af4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x190af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x190af8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x190af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x190afc: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x190afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x190b00: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x190b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x190b04: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x190b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x190b08: 0xfd620008  sd          $v0, 0x8($t3)
    ctx->pc = 0x190b08u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 2));
    // 0x190b0c: 0xfd640000  sd          $a0, 0x0($t3)
    ctx->pc = 0x190b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 4));
    // 0x190b10: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x190b10u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x190b14: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x190b14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_190b18:
    // 0x190b18: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x190B18u;
    {
        const bool branch_taken_0x190b18 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B18u;
        // 0x190b1c: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b18) {
            ctx->pc = 0x190B34u;
            goto label_190b34;
        }
    }
    ctx->pc = 0x190B20u;
    // 0x190b20: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x190b20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x190b24: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x190b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x190b28: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x190b28u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x190b2c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190b2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190b30: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x190b30u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
label_190b34:
    // 0x190b34: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x190b34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b38: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190b38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190b3c: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x190b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x190b40: 0x3484000d  ori         $a0, $a0, 0xD
    ctx->pc = 0x190b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    // 0x190b44: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x190b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x190b48: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x190b48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x190b4c: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x190b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x190b50: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x190b50u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x190b54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x190b54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190b58: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x190b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x190b5c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x190b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x190b60: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x190b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190b64: 0x25670010  addiu       $a3, $t3, 0x10
    ctx->pc = 0x190b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190b68: 0xfd650008  sd          $a1, 0x8($t3)
    ctx->pc = 0x190b68u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 5));
    // 0x190b6c: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x190b6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x190b70: 0xa537c  dsll32      $t2, $t2, 13
    ctx->pc = 0x190b70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 13));
    // 0x190b74: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x190b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x190b78: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x190b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x190b7c: 0xc2180a  movz        $v1, $a2, $v0
    ctx->pc = 0x190b7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x190b80: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x190b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x190b84: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x190b84u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x190b88: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x190b88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x190b8c: 0x16e1023  subu        $v0, $t3, $t6
    ctx->pc = 0x190b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x190b90: 0x240c0016  addiu       $t4, $zero, 0x16
    ctx->pc = 0x190b90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x190b94: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x190b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x190b98: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x190b98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x190b9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190ba0: 0xfce80008  sd          $t0, 0x8($a3)
    ctx->pc = 0x190ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 8));
    // 0x190ba4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x190ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x190ba8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x190ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x190bac: 0xfdc90008  sd          $t1, 0x8($t6)
    ctx->pc = 0x190bacu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 9));
    // 0x190bb0: 0x8d600b  movn        $t4, $a0, $t5
    ctx->pc = 0x190bb0u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 4));
    // 0x190bb4: 0xfdc20000  sd          $v0, 0x0($t6)
    ctx->pc = 0x190bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
    // 0x190bb8: 0x1863025  or          $a2, $t4, $a2
    ctx->pc = 0x190bb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | GPR_U64(ctx, 6));
    // 0x190bbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x190bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190bc0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x190bc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190bc4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x190bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x190bc8: 0x8e650270  lw          $a1, 0x270($s3)
    ctx->pc = 0x190bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x190bcc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x190bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x190bd0: 0xc2600a  movz        $t4, $a2, $v0
    ctx->pc = 0x190bd0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 6));
    // 0x190bd4: 0x14a4000c  bne         $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x190BD4u;
    {
        const bool branch_taken_0x190bd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x190BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BD4u;
        // 0x190bd8: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190bd4) {
            ctx->pc = 0x190C08u;
            goto label_190c08;
        }
    }
    ctx->pc = 0x190BDCu;
    // 0x190bdc: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x190bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x190be0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190be4: 0x93a30023  lbu         $v1, 0x23($sp)
    ctx->pc = 0x190be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x190be8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x190be8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x190bec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190becu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x190bf0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x190bf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x190bf4: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x190bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x190bf8: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x190bf8u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x190bfc: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x190bfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x190c00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190C00u;
    {
        const bool branch_taken_0x190c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C00u;
        // 0x190c04: 0xa3a30023  sb          $v1, 0x23($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c00) {
            ctx->pc = 0x190C20u;
            goto label_190c20;
        }
    }
    ctx->pc = 0x190C08u;
label_190c08:
    // 0x190c08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x190c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190c0c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x190C0Cu;
    {
        const bool branch_taken_0x190c0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x190C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C0Cu;
        // 0x190c10: 0xc23fc  dsll32      $a0, $t4, 15 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) << (32 + 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c0c) {
            ctx->pc = 0x190C24u;
            goto label_190c24;
        }
    }
    ctx->pc = 0x190C14u;
    // 0x190c14: 0x93a20023  lbu         $v0, 0x23($sp)
    ctx->pc = 0x190c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x190c18: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x190c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x190c1c: 0xa3a20023  sb          $v0, 0x23($sp)
    ctx->pc = 0x190c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 2));
label_190c20:
    // 0x190c20: 0xc23fc  dsll32      $a0, $t4, 15
    ctx->pc = 0x190c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) << (32 + 15));
label_190c24:
    // 0x190c24: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x190c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x190c28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x190c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x190c2c: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x190c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x190c30: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x190c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x190c34: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x190c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c38: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x190c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x190c3c: 0x31ff8  dsll        $v1, $v1, 31
    ctx->pc = 0x190c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 31);
    // 0x190c40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x190c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190c44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x190c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x190c48: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x190c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x190c4c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x190c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x190c50: 0x3463242e  ori         $v1, $v1, 0x242E
    ctx->pc = 0x190c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9262);
    // 0x190c54: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x190c54u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x190c58: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190c58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190c5c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x190c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x190c60: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x190c60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190c68: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190c68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190c6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x190c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190c70: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x190c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c74: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x190c74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x190c78: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x190c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c7c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x190c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x190c80: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190c80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190c84: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x190c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x190c88: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x190c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c8c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190c8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190c90: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x190c94: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x190c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190c98: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x190c98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c9c: 0xc6210064  lwc1        $f1, 0x64($s1)
    ctx->pc = 0x190c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190ca0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190ca0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190ca4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x190ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x190ca8: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x190ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x190cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x190cb0: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190cb4: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x190cb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x190cb8: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x190cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x190cbc: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x190cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x190cc0: 0x7a620250  lq          $v0, 0x250($s3)
    ctx->pc = 0x190cc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 592)));
    // 0x190cc4: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x190cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190cc8: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x190cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ccc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x190cccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x190cd0: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x190cd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x190cd4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x190cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x190cd8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x190cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x190cdc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x190cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x190ce0: 0x7a630260  lq          $v1, 0x260($s3)
    ctx->pc = 0x190ce0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x190ce4: 0x1651023  subu        $v0, $t3, $a1
    ctx->pc = 0x190ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x190ce8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x190ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x190cec: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x190cecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x190cf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x190cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x190cf4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x190cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x190cf8: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x190cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x190cfc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x190cfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x190d00: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x190d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x190d04: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x190d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x190d08: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x190d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x190d0c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x190d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x190d10: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x190d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x190d14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x190d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x190d18: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x190d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x190d1c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x190d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x190d20: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x190d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x190d24: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x190D24u;
    SET_GPR_U32(ctx, 31, 0x190D2Cu);
    ctx->pc = 0x190D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D24u;
    // 0x190d28: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x190D24u, 0x190D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D2Cu;
label_190d2c:
    // 0x190d2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x190d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x190d30: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x190d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x190d34: 0x0  nop
    ctx->pc = 0x190d34u;
    // NOP
label_190d38:
    // 0x190d38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190d3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x190d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x190d40: 0x0  nop
    ctx->pc = 0x190d40u;
    // NOP
    // 0x190d44: 0x0  nop
    ctx->pc = 0x190d44u;
    // NOP
    // 0x190d48: 0x0  nop
    ctx->pc = 0x190d48u;
    // NOP
    // 0x190d4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x190D4Cu;
    {
        const bool branch_taken_0x190d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190d4c) {
            ctx->pc = 0x190D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190d38;
        }
    }
    ctx->pc = 0x190D54u;
    // 0x190d54: 0x0  nop
    ctx->pc = 0x190d54u;
    // NOP
label_190d58:
    // 0x190d58: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x190D58u;
    SET_GPR_U32(ctx, 31, 0x190D60u);
    ctx->pc = 0x190D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D58u;
    // 0x190d5c: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x190D58u, 0x190D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D60u;
label_190d60:
    // 0x190d60: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x190d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x190d64: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x190D64u;
    {
        const bool branch_taken_0x190d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x190D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D64u;
        // 0x190d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d64) {
            ctx->pc = 0x190D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190d58;
        }
    }
    ctx->pc = 0x190D6Cu;
    // 0x190d6c: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x190d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x190d70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x190d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x190d74: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x190D74u;
    {
        const bool branch_taken_0x190d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D74u;
        // 0x190d78: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d74) {
            ctx->pc = 0x190D88u;
            goto label_190d88;
        }
    }
    ctx->pc = 0x190D7Cu;
    // 0x190d7c: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x190d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x190d80: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x190D80u;
    SET_GPR_U32(ctx, 31, 0x190D88u);
    ctx->pc = 0x190D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D80u;
    // 0x190d84: 0xae500090  sw          $s0, 0x90($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x190D80u, 0x190D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D88u;
label_190d88:
    // 0x190d88: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x190d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x190d8c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x190d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x190d90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x190d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x190d94: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x190d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x190d98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x190d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190d9c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x190d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x190da0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x190da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x190da4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x190da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x190da8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x190da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x190dac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x190dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x190db0: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x190db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x190db4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x190db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x190db8: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x190db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x190dbc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x190dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x190dc0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x190dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_190dc4:
    // 0x190dc4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x190dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x190dc8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x190dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x190dcc: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x190dccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x190dd0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x190dd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x190dd4: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x190dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x190dd8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x190dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x190ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x190DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DDCu;
        // 0x190de0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190DE4u;
}
