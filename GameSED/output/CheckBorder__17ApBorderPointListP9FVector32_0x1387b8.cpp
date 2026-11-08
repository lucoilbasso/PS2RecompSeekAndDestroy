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

// Function: CheckBorder__17ApBorderPointListP9FVector32
// Address: 0x1387b8 - 0x1388e8
void CheckBorder__17ApBorderPointListP9FVector32_0x1387b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckBorder__17ApBorderPointListP9FVector32_0x1387b8");
#endif

    switch (ctx->pc) {
        case 0x1387f0u: goto label_1387f0;
        default: break;
    }

    ctx->pc = 0x1387b8u;

    // 0x1387b8: 0x8c820400  lw          $v0, 0x400($a0)
    ctx->pc = 0x1387b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x1387bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1387bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1387c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1387c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1387c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1387c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1387c8: 0x18400042  blez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1387C8u;
    {
        const bool branch_taken_0x1387c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1387CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387C8u;
        // 0x1387cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387c8) {
            ctx->pc = 0x1388D4u;
            goto label_1388d4;
        }
    }
    ctx->pc = 0x1387D0u;
    // 0x1387d0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1387d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1387d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1387d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1387d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1387d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1387dc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1387dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1387e0: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x1387e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1387e4: 0x24880020  addiu       $t0, $a0, 0x20
    ctx->pc = 0x1387e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1387e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1387e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1387ec: 0x0  nop
    ctx->pc = 0x1387ecu;
    // NOP
label_1387f0:
    // 0x1387f0: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x1387f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1387f4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1387f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1387f8: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1387f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1387fc: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1387fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x138800: 0xf8e20000  sqc2        $vf2, 0x0($a3)
    ctx->pc = 0x138800u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x138804: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x138804u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x138808: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x138808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13880c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x13880cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138810: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x138810u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x138814: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x138814u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138818: 0xf9660000  sqc2        $vf6, 0x0($t3)
    ctx->pc = 0x138818u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x13881c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x13881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138820: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x138820u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x138824: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x138824u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138828: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x138828u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13882c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x13882cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138830: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x138830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138834: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x138834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138838: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x138838u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13883c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13883cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138840: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x138840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138844: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x138844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138848: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x138848u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x13884c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x13884Cu;
    {
        const bool branch_taken_0x13884c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13884Cu;
        // 0x138850: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13884c) {
            ctx->pc = 0x1388B8u;
            goto label_1388b8;
        }
    }
    ctx->pc = 0x138854u;
    // 0x138854: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x138854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138858: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x138858u;
    {
        const bool branch_taken_0x138858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138858) {
            ctx->pc = 0x138880u;
            goto label_138880;
        }
    }
    ctx->pc = 0x138860u;
    // 0x138860: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x138860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138864: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x138864u;
    {
        const bool branch_taken_0x138864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138864u;
        // 0x138868: 0x24c20020  addiu       $v0, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138864) {
            ctx->pc = 0x138880u;
            goto label_138880;
        }
    }
    ctx->pc = 0x13886Cu;
    // 0x13886c: 0xe4820408  swc1        $f2, 0x408($a0)
    ctx->pc = 0x13886cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1032), bits); }
    // 0x138870: 0xac820404  sw          $v0, 0x404($a0)
    ctx->pc = 0x138870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 2));
    // 0x138874: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x138874u;
    {
        const bool branch_taken_0x138874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138874u;
        // 0x138878: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138874) {
            ctx->pc = 0x1388E0u;
            goto label_1388e0;
        }
    }
    ctx->pc = 0x13887Cu;
    // 0x13887c: 0x0  nop
    ctx->pc = 0x13887cu;
    // NOP
label_138880:
    // 0x138880: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x138880u;
    {
        const bool branch_taken_0x138880 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x138880) {
            ctx->pc = 0x1388A0u;
            goto label_1388a0;
        }
    }
    ctx->pc = 0x138888u;
    // 0x138888: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x138888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13888c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13888Cu;
    {
        const bool branch_taken_0x13888c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13888Cu;
        // 0x138890: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13888c) {
            ctx->pc = 0x1388A0u;
            goto label_1388a0;
        }
    }
    ctx->pc = 0x138894u;
    // 0x138894: 0xac880404  sw          $t0, 0x404($a0)
    ctx->pc = 0x138894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 8));
    // 0x138898: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x138898u;
    {
        const bool branch_taken_0x138898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138898u;
        // 0x13889c: 0xe4820408  swc1        $f2, 0x408($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1032), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138898) {
            ctx->pc = 0x1388E0u;
            goto label_1388e0;
        }
    }
    ctx->pc = 0x1388A0u;
label_1388a0:
    // 0x1388a0: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x1388a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1388a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1388A4u;
    {
        const bool branch_taken_0x1388a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1388A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388A4u;
        // 0x1388a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388a4) {
            ctx->pc = 0x1388BCu;
            goto label_1388bc;
        }
    }
    ctx->pc = 0x1388ACu;
    // 0x1388ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1388ACu;
    {
        const bool branch_taken_0x1388ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388ACu;
        // 0x1388b0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388ac) {
            ctx->pc = 0x1388BCu;
            goto label_1388bc;
        }
    }
    ctx->pc = 0x1388B4u;
    // 0x1388b4: 0x0  nop
    ctx->pc = 0x1388b4u;
    // NOP
label_1388b8:
    // 0x1388b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1388b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1388bc:
    // 0x1388bc: 0x8c820400  lw          $v0, 0x400($a0)
    ctx->pc = 0x1388bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x1388c0: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x1388c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x1388c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1388c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1388c8: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x1388c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1388cc: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1388CCu;
    {
        const bool branch_taken_0x1388cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1388D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388CCu;
        // 0x1388d0: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388cc) {
            ctx->pc = 0x1387F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1387f0;
        }
    }
    ctx->pc = 0x1388D4u;
label_1388d4:
    // 0x1388d4: 0xac800408  sw          $zero, 0x408($a0)
    ctx->pc = 0x1388d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1032), GPR_U32(ctx, 0));
    // 0x1388d8: 0xac800404  sw          $zero, 0x404($a0)
    ctx->pc = 0x1388d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 0));
    // 0x1388dc: 0xc4800408  lwc1        $f0, 0x408($a0)
    ctx->pc = 0x1388dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1388e0:
    // 0x1388e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1388E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1388E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388E0u;
        // 0x1388e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1388E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1388E8u;
}
