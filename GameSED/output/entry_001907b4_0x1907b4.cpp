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

// Function: entry_001907b4
// Address: 0x1907b4 - 0x19086c
void entry_001907b4_0x1907b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001907b4_0x1907b4");
#endif

    switch (ctx->pc) {
        case 0x1907ccu: goto label_1907cc;
        default: break;
    }

    ctx->pc = 0x1907b4u;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x19086Cu;
}
