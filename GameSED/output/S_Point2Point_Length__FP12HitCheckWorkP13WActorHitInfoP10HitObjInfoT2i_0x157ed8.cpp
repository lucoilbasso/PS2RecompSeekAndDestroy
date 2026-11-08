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

// Function: S_Point2Point_Length__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i
// Address: 0x157ed8 - 0x1580a0
void S_Point2Point_Length__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i_0x157ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("S_Point2Point_Length__FP12HitCheckWorkP13WActorHitInfoP10HitObjInfoT2i_0x157ed8");
#endif

    ctx->pc = 0x157ed8u;

    // 0x157ed8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x157ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157edc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x157edcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ee0: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x157EE0u;
    {
        const bool branch_taken_0x157ee0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x157EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EE0u;
        // 0x157ee4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ee0) {
            ctx->pc = 0x157F08u;
            goto label_157f08;
        }
    }
    ctx->pc = 0x157EE8u;
    // 0x157ee8: 0x252303d0  addiu       $v1, $t1, 0x3D0
    ctx->pc = 0x157ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 976));
    // 0x157eec: 0x252203c0  addiu       $v0, $t1, 0x3C0
    ctx->pc = 0x157eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 960));
    // 0x157ef0: 0xd86e0000  lqc2        $vf14, 0x0($v1)
    ctx->pc = 0x157ef0u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157ef4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x157ef4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157ef8: 0x4bc273ac  vsub.xyz    $vf14, $vf14, $vf2
    ctx->pc = 0x157ef8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x157efc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157EFCu;
    {
        const bool branch_taken_0x157efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EFCu;
        // 0x157f00: 0x25270400  addiu       $a3, $t1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157efc) {
            ctx->pc = 0x157F20u;
            goto label_157f20;
        }
    }
    ctx->pc = 0x157F04u;
    // 0x157f04: 0x0  nop
    ctx->pc = 0x157f04u;
    // NOP
label_157f08:
    // 0x157f08: 0x252303d0  addiu       $v1, $t1, 0x3D0
    ctx->pc = 0x157f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 976));
    // 0x157f0c: 0x252203b0  addiu       $v0, $t1, 0x3B0
    ctx->pc = 0x157f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 944));
    // 0x157f10: 0xd86e0000  lqc2        $vf14, 0x0($v1)
    ctx->pc = 0x157f10u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157f14: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x157f14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157f18: 0x4bc273ac  vsub.xyz    $vf14, $vf14, $vf2
    ctx->pc = 0x157f18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x157f1c: 0x25270400  addiu       $a3, $t1, 0x400
    ctx->pc = 0x157f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
label_157f20:
    // 0x157f20: 0x4bce70aa  vmul.xyz    $vf2, $vf14, $vf14
    ctx->pc = 0x157f20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157f24: 0x4a821082  vaddz.y     $vf2, $vf2, $vf2z
    ctx->pc = 0x157f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157f28: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x157f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157f2c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x157f2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f34: 0xc5200474  lwc1        $f0, 0x474($t1)
    ctx->pc = 0x157f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157f3c: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x157F3Cu;
    {
        const bool branch_taken_0x157f3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F3Cu;
        // 0x157f40: 0xe5210478  swc1        $f1, 0x478($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f3c) {
            ctx->pc = 0x158098u;
            goto label_158098;
        }
    }
    ctx->pc = 0x157F44u;
    // 0x157f44: 0x252a0120  addiu       $t2, $t1, 0x120
    ctx->pc = 0x157f44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 288));
    // 0x157f48: 0xc5220134  lwc1        $f2, 0x134($t1)
    ctx->pc = 0x157f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157f4c: 0x460100c4  c1          0x100C4
    ctx->pc = 0x157f4cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x157f50: 0xc78082f4  lwc1        $f0, -0x7D0C($gp)
    ctx->pc = 0x157f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f54: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x157f54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157f58: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x157F58u;
    {
        const bool branch_taken_0x157f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157f58) {
            ctx->pc = 0x157F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157F58u;
            // 0x157f5c: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157F90u;
            goto label_157f90;
        }
    }
    ctx->pc = 0x157F60u;
    // 0x157f60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157f64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x157f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x157f68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x157f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f6c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x157f6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x157f70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x157f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x157f74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x157f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x157f78: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x157f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x157f7c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x157f7cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x157f80: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x157f80u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x157f84: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x157f84u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x157f88: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x157f88u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x157f8c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x157f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_157f90:
    // 0x157f90: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x157F90u;
    {
        const bool branch_taken_0x157f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157f90) {
            ctx->pc = 0x157F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157F90u;
            // 0x157f94: 0x8d420004  lw          $v0, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157FA8u;
            goto label_157fa8;
        }
    }
    ctx->pc = 0x157F98u;
    // 0x157f98: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x157f98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x157f9c: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x157f9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157fa0: 0xf8e20000  sqc2        $vf2, 0x0($a3)
    ctx->pc = 0x157fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157fa4: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x157fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_157fa8:
    // 0x157fa8: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x157fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x157fac: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x157facu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x157fb0: 0x25240150  addiu       $a0, $t1, 0x150
    ctx->pc = 0x157fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 336));
    // 0x157fb4: 0xa0c30020  sb          $v1, 0x20($a2)
    ctx->pc = 0x157fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x157fb8: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x157fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x157fbc: 0xacc20090  sw          $v0, 0x90($a2)
    ctx->pc = 0x157fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 144), GPR_U32(ctx, 2));
    // 0x157fc0: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x157fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x157fc4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x157fc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157fc8: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x157fc8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x157fcc: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x157fccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x157fd0: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x157fd0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x157fd4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157fd8: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x157fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x157fdc: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x157fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x157fe0: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x157fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x157fe4: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x157fe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x157fe8: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x157fe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x157fec: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x157fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x157ff0: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x157ff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x157ff4: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x157ff4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x157ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157ffc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x157ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158000: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158004: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x158004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x158008: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x158008u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x15800c: 0xc78182f8  lwc1        $f1, -0x7D08($gp)
    ctx->pc = 0x15800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158010: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158014: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x158014u;
    {
        const bool branch_taken_0x158014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158014u;
        // 0x158018: 0x24c30070  addiu       $v1, $a2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158014) {
            ctx->pc = 0x158050u;
            goto label_158050;
        }
    }
    ctx->pc = 0x15801Cu;
    // 0x15801c: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x15801cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x158020: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x158020u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158024: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x158024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158028: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x158028u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15802c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x15802cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x158030: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x158030u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x158034: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x158034u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158038: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x158038u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15803c: 0x4a0003bf  vwaitq
    ctx->pc = 0x15803cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x158040: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x158040u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x158044: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x158044u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x158048: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x158048u;
    {
        const bool branch_taken_0x158048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158048u;
        // 0x15804c: 0x24c40080  addiu       $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158048) {
            ctx->pc = 0x15805Cu;
            goto label_15805c;
        }
    }
    ctx->pc = 0x158050u;
label_158050:
    // 0x158050: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x158050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158054: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x158054u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x158058: 0x24c40080  addiu       $a0, $a2, 0x80
    ctx->pc = 0x158058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_15805c:
    // 0x15805c: 0x24c30070  addiu       $v1, $a2, 0x70
    ctx->pc = 0x15805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x158060: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x158060u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158064: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x158064u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158068: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x158068u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15806c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x15806cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x158070: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x158070u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x158074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158078: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x158078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x15807c: 0xacc5009c  sw          $a1, 0x9C($a2)
    ctx->pc = 0x15807cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 5));
    // 0x158080: 0xacca0094  sw          $t2, 0x94($a2)
    ctx->pc = 0x158080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 10));
    // 0x158084: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x158084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158088: 0xe4c20098  swc1        $f2, 0x98($a2)
    ctx->pc = 0x158088u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 152), bits); }
    // 0x15808c: 0x3e00008  jr          $ra
    ctx->pc = 0x15808Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15808Cu;
        // 0x158090: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15808Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158094u;
    // 0x158094: 0x0  nop
    ctx->pc = 0x158094u;
    // NOP
label_158098:
    // 0x158098: 0x3e00008  jr          $ra
    ctx->pc = 0x158098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158098u;
        // 0x15809c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1580A0u;
}
