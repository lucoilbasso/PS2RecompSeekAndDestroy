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

// Function: S_Point2Cylin_Length__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i
// Address: 0x158448 - 0x158648
void S_Point2Cylin_Length__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i_0x158448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_Point2Cylin_Length__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i_0x158448");
#endif

    ctx->pc = 0x158448u;

    // 0x158448: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x158448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15844c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x15844cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158450: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x158450u;
    {
        const bool branch_taken_0x158450 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x158454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158450u;
        // 0x158454: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158450) {
            ctx->pc = 0x158468u;
            goto label_158468;
        }
    }
    ctx->pc = 0x158458u;
    // 0x158458: 0x25240400  addiu       $a0, $t1, 0x400
    ctx->pc = 0x158458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x15845c: 0x252303d0  addiu       $v1, $t1, 0x3D0
    ctx->pc = 0x15845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 976));
    // 0x158460: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x158460u;
    {
        const bool branch_taken_0x158460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158460u;
        // 0x158464: 0x252203c0  addiu       $v0, $t1, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158460) {
            ctx->pc = 0x158474u;
            goto label_158474;
        }
    }
    ctx->pc = 0x158468u;
label_158468:
    // 0x158468: 0x25240400  addiu       $a0, $t1, 0x400
    ctx->pc = 0x158468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x15846c: 0x252303d0  addiu       $v1, $t1, 0x3D0
    ctx->pc = 0x15846cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 976));
    // 0x158470: 0x252203b0  addiu       $v0, $t1, 0x3B0
    ctx->pc = 0x158470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 944));
label_158474:
    // 0x158474: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x158474u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158478: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x158478u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15847c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15847cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158480: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x158480u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x158484: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x158484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158488: 0xc5240404  lwc1        $f4, 0x404($t1)
    ctx->pc = 0x158488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15848c: 0x46002041  sub.s       $f1, $f4, $f0
    ctx->pc = 0x15848cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x158490: 0xe5210404  swc1        $f1, 0x404($t1)
    ctx->pc = 0x158490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1028), bits); }
    // 0x158494: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x158494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158498: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x158498u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x15849c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15849cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1584a0: 0x45010067  bc1t        . + 4 + (0x67 << 2)
    ctx->pc = 0x1584A0u;
    {
        const bool branch_taken_0x1584a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1584a0) {
            ctx->pc = 0x158640u;
            goto label_158640;
        }
    }
    ctx->pc = 0x1584A8u;
    // 0x1584a8: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x1584a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1584ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1584acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1584b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1584b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1584b4: 0x45010062  bc1t        . + 4 + (0x62 << 2)
    ctx->pc = 0x1584B4u;
    {
        const bool branch_taken_0x1584b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1584B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584B4u;
        // 0x1584b8: 0x25270400  addiu       $a3, $t1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584b4) {
            ctx->pc = 0x158640u;
            goto label_158640;
        }
    }
    ctx->pc = 0x1584BCu;
    // 0x1584bc: 0xad200404  sw          $zero, 0x404($t1)
    ctx->pc = 0x1584bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1028), GPR_U32(ctx, 0));
    // 0x1584c0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1584c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1584c4: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x1584c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1584c8: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1584c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1584cc: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1584ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1584d0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1584d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1584d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1584d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1584d8: 0xc5200474  lwc1        $f0, 0x474($t1)
    ctx->pc = 0x1584d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1584dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1584dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1584e0: 0x45000057  bc1f        . + 4 + (0x57 << 2)
    ctx->pc = 0x1584E0u;
    {
        const bool branch_taken_0x1584e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1584E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584E0u;
        // 0x1584e4: 0xe5210478  swc1        $f1, 0x478($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584e0) {
            ctx->pc = 0x158640u;
            goto label_158640;
        }
    }
    ctx->pc = 0x1584E8u;
    // 0x1584e8: 0x252a0120  addiu       $t2, $t1, 0x120
    ctx->pc = 0x1584e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 288));
    // 0x1584ec: 0xc5220134  lwc1        $f2, 0x134($t1)
    ctx->pc = 0x1584ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1584f0: 0x460100c4  c1          0x100C4
    ctx->pc = 0x1584f0u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x1584f4: 0xc7808300  lwc1        $f0, -0x7D00($gp)
    ctx->pc = 0x1584f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1584f8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1584f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1584fc: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x1584FCu;
    {
        const bool branch_taken_0x1584fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1584fc) {
            ctx->pc = 0x158500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1584FCu;
            // 0x158500: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158534u;
            goto label_158534;
        }
    }
    ctx->pc = 0x158504u;
    // 0x158504: 0xc5200404  lwc1        $f0, 0x404($t1)
    ctx->pc = 0x158504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158508: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15850c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15850cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158510: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x158510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158514: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158518: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x158518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15851c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15851cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x158520: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x158520u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x158524: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x158524u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x158528: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x158528u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15852c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15852cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x158530: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x158530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_158534:
    // 0x158534: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158534u;
    {
        const bool branch_taken_0x158534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158534u;
        // 0x158538: 0xe5240404  swc1        $f4, 0x404($t1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1028), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158534) {
            ctx->pc = 0x158548u;
            goto label_158548;
        }
    }
    ctx->pc = 0x15853Cu;
    // 0x15853c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x15853cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158540: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x158540u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158544: 0xf8e20000  sqc2        $vf2, 0x0($a3)
    ctx->pc = 0x158544u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_158548:
    // 0x158548: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x158548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x15854c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x15854cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158550: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x158550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x158554: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x158554u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x158558: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x158558u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
    // 0x15855c: 0x25240150  addiu       $a0, $t1, 0x150
    ctx->pc = 0x15855cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x158560: 0xa0c30020  sb          $v1, 0x20($a2)
    ctx->pc = 0x158560u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x158564: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x158564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x158568: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x158568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x15856c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x15856cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158570: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x158570u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x158574: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x158574u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x158578: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x158578u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x15857c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15857cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x158580: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x158580u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x158584: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x158584u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x158588: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x158588u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15858c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x15858cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158590: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x158590u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158594: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x158594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x158598: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x158598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15859c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x15859cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1585a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1585a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1585a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1585a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1585a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1585a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1585ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1585acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1585b0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1585b0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1585b4: 0xc7818304  lwc1        $f1, -0x7CFC($gp)
    ctx->pc = 0x1585b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1585b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1585b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1585bc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1585BCu;
    {
        const bool branch_taken_0x1585bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1585C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585BCu;
        // 0x1585c0: 0x24c30070  addiu       $v1, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585bc) {
            ctx->pc = 0x1585F8u;
            goto label_1585f8;
        }
    }
    ctx->pc = 0x1585C4u;
    // 0x1585c4: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x1585c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x1585c8: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1585c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1585cc: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1585ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1585d0: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1585d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1585d4: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1585d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1585d8: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x1585d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1585dc: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1585dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1585e0: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x1585e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1585e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1585e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1585e8: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1585e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1585ec: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1585ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1585f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1585F0u;
    {
        const bool branch_taken_0x1585f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585F0u;
        // 0x1585f4: 0x24c40080  addiu       $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585f0) {
            ctx->pc = 0x158604u;
            goto label_158604;
        }
    }
    ctx->pc = 0x1585F8u;
label_1585f8:
    // 0x1585f8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x1585f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1585fc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1585fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x158600: 0x24c40080  addiu       $a0, $a2, 0x80
    ctx->pc = 0x158600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_158604:
    // 0x158604: 0x24c30070  addiu       $v1, $a2, 0x70
    ctx->pc = 0x158604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x158608: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x158608u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15860c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x15860cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158610: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x158610u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x158614: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x158614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x158618: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x158618u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15861c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15861cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158620: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x158620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x158624: 0xacc5009c  sw          $a1, 0x9C($a2)
    ctx->pc = 0x158624u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 5));
    // 0x158628: 0xacca0094  sw          $t2, 0x94($a2)
    ctx->pc = 0x158628u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 10));
    // 0x15862c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x15862cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158630: 0xe4c20098  swc1        $f2, 0x98($a2)
    ctx->pc = 0x158630u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 152), bits); }
    // 0x158634: 0x3e00008  jr          $ra
    ctx->pc = 0x158634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158634u;
        // 0x158638: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15863Cu;
    // 0x15863c: 0x0  nop
    ctx->pc = 0x15863cu;
    // NOP
label_158640:
    // 0x158640: 0x3e00008  jr          $ra
    ctx->pc = 0x158640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158640u;
        // 0x158644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158648u;
}
