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

// Function: EffectSendAirExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x1204f8 - 0x120690
void EffectSendAirExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x1204f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendAirExplo__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x1204f8");
#endif

    switch (ctx->pc) {
        case 0x120558u: goto label_120558;
        default: break;
    }

    ctx->pc = 0x1204f8u;

    // 0x1204f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1204f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1204fc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1204fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x120500: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x120500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x120504: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x120504u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x120508: 0x8c8e0008  lw          $t6, 0x8($a0)
    ctx->pc = 0x120508u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12050c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12050cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120510: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x120510u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120514: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x120514u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x120518: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x120518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12051c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x12051cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x120520: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x120520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x120524: 0x248d74f0  addiu       $t5, $a0, 0x74F0
    ctx->pc = 0x120524u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 29936));
    // 0x120528: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x120528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12052c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12052cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x120530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120534: 0x244c0790  addiu       $t4, $v0, 0x790
    ctx->pc = 0x120534u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x120538: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x120538u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12053c: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x12053cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120540: 0x25b00010  addiu       $s0, $t5, 0x10
    ctx->pc = 0x120540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x120544: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x120544u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120548: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x120548u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x12054c: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x12054cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120550: 0x25b8fff0  addiu       $t8, $t5, -0x10
    ctx->pc = 0x120550u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967280));
    // 0x120554: 0x0  nop
    ctx->pc = 0x120554u;
    // NOP
label_120558:
    // 0x120558: 0x8d880000  lw          $t0, 0x0($t4)
    ctx->pc = 0x120558u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x12055c: 0x11000049  beqz        $t0, . + 4 + (0x49 << 2)
    ctx->pc = 0x12055Cu;
    {
        const bool branch_taken_0x12055c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x120560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12055Cu;
        // 0x120560: 0x25070080  addiu       $a3, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12055c) {
            ctx->pc = 0x120684u;
            goto label_120684;
        }
    }
    ctx->pc = 0x120564u;
    // 0x120564: 0x8cc20120  lw          $v0, 0x120($a2)
    ctx->pc = 0x120564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x120568: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x120568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12056c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x120570: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x120570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x120574: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x120574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x120578: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x120578u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12057c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x12057cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x120580: 0x15e00016  bnez        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x120580u;
    {
        const bool branch_taken_0x120580 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x120584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120580u;
        // 0x120584: 0x25050090  addiu       $a1, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120580) {
            ctx->pc = 0x1205DCu;
            goto label_1205dc;
        }
    }
    ctx->pc = 0x120588u;
    // 0x120588: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x120588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12058c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x12058cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x120590: 0x8cc40120  lw          $a0, 0x120($a2)
    ctx->pc = 0x120590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x120594: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x120594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x120598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x120598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12059c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12059cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1205a0: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x1205a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1205a4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1205a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1205a8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1205a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1205ac: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1205acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1205b0: 0xd9430000  lqc2        $vf3, 0x0($t2)
    ctx->pc = 0x1205b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1205b4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1205b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1205b8: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1205b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1205bc: 0x8cc20120  lw          $v0, 0x120($a2)
    ctx->pc = 0x1205bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x1205c0: 0x250400a0  addiu       $a0, $t0, 0xA0
    ctx->pc = 0x1205c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x1205c4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1205c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1205c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1205c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1205cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1205ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1205d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1205d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1205d4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1205d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1205d8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1205d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_1205dc:
    // 0x1205dc: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x1205dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1205e0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1205E0u;
    {
        const bool branch_taken_0x1205e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1205e0) {
            ctx->pc = 0x120610u;
            goto label_120610;
        }
    }
    ctx->pc = 0x1205E8u;
    // 0x1205e8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1205e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1205ec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1205ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1205f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1205f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1205f4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1205f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1205f8: 0xf9210000  sqc2        $vf1, 0x0($t1)
    ctx->pc = 0x1205f8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1205fc: 0x25030070  addiu       $v1, $t0, 0x70
    ctx->pc = 0x1205fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x120600: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x120600u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120604: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x120604u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x120608: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12060c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x12060cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_120610:
    // 0x120610: 0x55d90013  bnel        $t6, $t9, . + 4 + (0x13 << 2)
    ctx->pc = 0x120610u;
    {
        const bool branch_taken_0x120610 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 25));
        if (branch_taken_0x120610) {
            ctx->pc = 0x120614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120610u;
            // 0x120614: 0x8cc20120  lw          $v0, 0x120($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120660u;
            goto label_120660;
        }
    }
    ctx->pc = 0x120618u;
    // 0x120618: 0x250300a0  addiu       $v1, $t0, 0xA0
    ctx->pc = 0x120618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x12061c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12061cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120620: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x120620u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120624: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x120624u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x120628: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x120628u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12062c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12062cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120630: 0x25040090  addiu       $a0, $t0, 0x90
    ctx->pc = 0x120630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
    // 0x120634: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x120634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120638: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x120638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12063c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12063cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x120640: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x120640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120644: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x120644u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120648: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x120648u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12064c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12064cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120650: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x120650u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x120654: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x120654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120658: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x120658u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12065c: 0x8cc20120  lw          $v0, 0x120($a2)
    ctx->pc = 0x12065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
label_120660:
    // 0x120660: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120664: 0x2c43001a  sltiu       $v1, $v0, 0x1A
    ctx->pc = 0x120664u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x120668: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x120668u;
    {
        const bool branch_taken_0x120668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120668u;
        // 0x12066c: 0xacc20120  sw          $v0, 0x120($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120668) {
            ctx->pc = 0x120674u;
            goto label_120674;
        }
    }
    ctx->pc = 0x120670u;
    // 0x120670: 0xacc00120  sw          $zero, 0x120($a2)
    ctx->pc = 0x120670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 0));
label_120674:
    // 0x120674: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x120674u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x120678: 0x2962001a  slti        $v0, $t3, 0x1A
    ctx->pc = 0x120678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x12067c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x12067Cu;
    {
        const bool branch_taken_0x12067c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12067Cu;
        // 0x120680: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12067c) {
            ctx->pc = 0x120558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120558;
        }
    }
    ctx->pc = 0x120684u;
label_120684:
    // 0x120684: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x120684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120688: 0x3e00008  jr          $ra
    ctx->pc = 0x120688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120688u;
        // 0x12068c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120690u;
}
