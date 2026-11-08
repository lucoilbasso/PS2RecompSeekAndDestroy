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

// Function: ApRsc3DSoundArrange__FP8ApcRsc3DP9FVector32fi
// Address: 0x145308 - 0x145560
void ApRsc3DSoundArrange__FP8ApcRsc3DP9FVector32fi_0x145308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DSoundArrange__FP8ApcRsc3DP9FVector32fi_0x145308");
#endif

    switch (ctx->pc) {
        case 0x145444u: goto label_145444;
        default: break;
    }

    ctx->pc = 0x145308u;

    // 0x145308: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x145308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14530c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x14530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x145310: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x145310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145314: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x145314u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x145318: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x145318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x14531c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14531cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x145320: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x145320u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x145324: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x145324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x145328: 0x8ce401ec  lw          $a0, 0x1EC($a3)
    ctx->pc = 0x145328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 492)));
    // 0x14532c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x14532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x145330: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145330u;
    {
        const bool branch_taken_0x145330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145330u;
        // 0x145334: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145330) {
            ctx->pc = 0x145348u;
            goto label_145348;
        }
    }
    ctx->pc = 0x145338u;
    // 0x145338: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x145338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14533c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14533Cu;
    {
        const bool branch_taken_0x14533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14533Cu;
        // 0x145340: 0x244300d0  addiu       $v1, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14533c) {
            ctx->pc = 0x14534Cu;
            goto label_14534c;
        }
    }
    ctx->pc = 0x145344u;
    // 0x145344: 0x0  nop
    ctx->pc = 0x145344u;
    // NOP
label_145348:
    // 0x145348: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x145348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_14534c:
    // 0x14534c: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x14534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x145350: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x145350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145354: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x145354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x145358: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x145358u;
    {
        const bool branch_taken_0x145358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145358u;
        // 0x14535c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145358) {
            ctx->pc = 0x1453CCu;
            goto label_1453cc;
        }
    }
    ctx->pc = 0x145360u;
    // 0x145360: 0x8ce301f0  lw          $v1, 0x1F0($a3)
    ctx->pc = 0x145360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
    // 0x145364: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x145364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x145368: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x145368u;
    {
        const bool branch_taken_0x145368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145368) {
            ctx->pc = 0x14536Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145368u;
            // 0x14536c: 0x246300d0  addiu       $v1, $v1, 0xD0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145378u;
            goto label_145378;
        }
    }
    ctx->pc = 0x145370u;
    // 0x145370: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x145370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x145374: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x145374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_145378:
    // 0x145378: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x145378u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14537c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x14537cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145380: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x145380u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x145384: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x145384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x145388: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x145388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x14538c: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x14538cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x145390: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x145390u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x145394: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x145394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145398: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x145398u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14539c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x14539cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1453a0: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x1453a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1453a4: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x1453a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1453a8: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1453a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1453ac: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1453acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1453b0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1453b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1453b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1453b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1453b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1453b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1453bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1453BCu;
    {
        const bool branch_taken_0x1453bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1453bc) {
            ctx->pc = 0x1453CCu;
            goto label_1453cc;
        }
    }
    ctx->pc = 0x1453C4u;
    // 0x1453c4: 0x8ce401f0  lw          $a0, 0x1F0($a3)
    ctx->pc = 0x1453c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
    // 0x1453c8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1453c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1453cc:
    // 0x1453cc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1453ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1453d0: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1453d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1453d4: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1453d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1453d8: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1453d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1453dc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1453dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1453e0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1453e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1453e4: 0x4a852942  vaddz.y     $vf5, $vf5, $vf5z
    ctx->pc = 0x1453e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1453e8: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1453e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1453ec: 0x4a2503bd  .word       0x4A2503BD                   # vsqrt       $Q, $vf5x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1453ecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1453f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1453f0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1453f4: 0x4b000160  vaddq.x     $vf5, $vf0, $Q
    ctx->pc = 0x1453f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1453f8: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x1453f8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1453fc: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1453fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x145400: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x145400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x145404: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x145404u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x145408: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x145408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14540c: 0x4a0003bf  vwaitq
    ctx->pc = 0x14540cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x145410: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x145410u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x145414: 0xfba60000  sqc2        $vf6, 0x0($sp)
    ctx->pc = 0x145414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x145418: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x145418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x14541c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14541Cu;
    {
        const bool branch_taken_0x14541c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14541c) {
            ctx->pc = 0x145420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14541Cu;
            // 0x145420: 0x24820030  addiu       $v0, $a0, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14542Cu;
            goto label_14542c;
        }
    }
    ctx->pc = 0x145424u;
    // 0x145424: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x145424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x145428: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x145428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_14542c:
    // 0x14542c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x14542cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x145430: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x145430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x145434: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x145434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x145438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14543c: 0xc06760e  jal         func_19D838
    ctx->pc = 0x14543Cu;
    SET_GPR_U32(ctx, 31, 0x145444u);
    ctx->pc = 0x145440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14543Cu;
    // 0x145440: 0x24a5c550  addiu       $a1, $a1, -0x3AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D838u, 0x14543Cu, 0x145444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145444u;
label_145444:
    // 0x145444: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x145444u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145448: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x145448u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14544c: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x14544cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x145450: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x145450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x145454: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x145454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x145458: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x145458u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x14545c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14545cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x145460: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145464: 0x460010e9  min.s       $f3, $f2, $f0
    ctx->pc = 0x145464u;
    ctx->f[3] = std::min(ctx->f[2], ctx->f[0]);
    // 0x145468: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x145468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14546c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14546cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145470: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x145470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x145474: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x145478: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x145478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14547c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x14547cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x145480: 0x460208c0  add.s       $f3, $f1, $f2
    ctx->pc = 0x145480u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x145484: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x145484u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x145488: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x145488u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14548c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x14548cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145490: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    ctx->pc = 0x145490u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x145494: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    ctx->pc = 0x145494u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x145498: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x145498u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x14549c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x14549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1454a0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1454A0u;
    {
        const bool branch_taken_0x1454a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1454A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454A0u;
        // 0x1454a4: 0x46020100  add.s       $f4, $f0, $f2 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454a0) {
            ctx->pc = 0x1454C0u;
            goto label_1454c0;
        }
    }
    ctx->pc = 0x1454A8u;
    // 0x1454a8: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1454a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1454ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1454acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1454b0: 0xc781816c  lwc1        $f1, -0x7E94($gp)
    ctx->pc = 0x1454b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1454b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1454B4u;
    {
        const bool branch_taken_0x1454b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1454B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454B4u;
        // 0x1454b8: 0x46140001  sub.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454b4) {
            ctx->pc = 0x1454D0u;
            goto label_1454d0;
        }
    }
    ctx->pc = 0x1454BCu;
    // 0x1454bc: 0x0  nop
    ctx->pc = 0x1454bcu;
    // NOP
label_1454c0:
    // 0x1454c0: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x1454c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x1454c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1454c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1454c8: 0xc7818170  lwc1        $f1, -0x7E90($gp)
    ctx->pc = 0x1454c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1454cc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1454ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1454d0:
    // 0x1454d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1454d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1454d4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1454d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1454d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1454d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1454dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1454dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1454e0: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x1454e0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x1454e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1454e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1454e8: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x1454e8u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x1454ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1454ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1454f0: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x1454f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1454f4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1454F4u;
    {
        const bool branch_taken_0x1454f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1454F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454F4u;
        // 0x1454f8: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454f4) {
            ctx->pc = 0x145504u;
            goto label_145504;
        }
    }
    ctx->pc = 0x1454FCu;
    // 0x1454fc: 0xc7808174  lwc1        $f0, -0x7E8C($gp)
    ctx->pc = 0x1454fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145500: 0x46006328  max.s       $f12, $f12, $f0
    ctx->pc = 0x145500u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[0]);
label_145504:
    // 0x145504: 0x46026329  min.s       $f12, $f12, $f2
    ctx->pc = 0x145504u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[2]);
    // 0x145508: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x145508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x14550c: 0x2463fcb0  addiu       $v1, $v1, -0x350
    ctx->pc = 0x14550cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966448));
    // 0x145510: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x145510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x145514: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x145514u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x145518: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x145518u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14551c: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x14551cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x145520: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x145520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x145524: 0xac640414  sw          $a0, 0x414($v1)
    ctx->pc = 0x145524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1044), GPR_U32(ctx, 4));
    // 0x145528: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x145528u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14552c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x14552cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x145530: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x145530u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x145534: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x145534u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x145538: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x145538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x14553c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x14553cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x145540: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x145540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145544: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x145544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x145548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x145548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14554c: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x14554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x145550: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x145550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x145554: 0xac650418  sw          $a1, 0x418($v1)
    ctx->pc = 0x145554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1048), GPR_U32(ctx, 5));
    // 0x145558: 0x3e00008  jr          $ra
    ctx->pc = 0x145558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145558u;
        // 0x14555c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145560u;
}
