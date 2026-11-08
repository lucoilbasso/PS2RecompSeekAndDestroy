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

// Function: entry_001478a8
// Address: 0x1478a8 - 0x147978
void entry_001478a8_0x1478a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001478a8_0x1478a8");
#endif

    ctx->pc = 0x1478a8u;

    // 0x1478a8: 0x2402044e  addiu       $v0, $zero, 0x44E
    ctx->pc = 0x1478a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1102));
    // 0x1478ac: 0x3c043003  lui         $a0, 0x3003
    ctx->pc = 0x1478acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12291 << 16));
    // 0x1478b0: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x1478b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1478b4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1478b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1478b8: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x1478b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1478bc: 0xfdc20008  sd          $v0, 0x8($t6)
    ctx->pc = 0x1478bcu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 2));
    // 0x1478c0: 0xfdc40000  sd          $a0, 0x0($t6)
    ctx->pc = 0x1478c0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 4));
    // 0x1478c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1478c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1478c8: 0x262203ac  addiu       $v0, $s1, 0x3AC
    ctx->pc = 0x1478c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 940));
    // 0x1478cc: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x1478ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1478d0: 0x26250370  addiu       $a1, $s1, 0x370
    ctx->pc = 0x1478d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x1478d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1478d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1478d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1478d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1478dc: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1478dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1478e0: 0x25a20070  addiu       $v0, $t5, 0x70
    ctx->pc = 0x1478e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 112));
    // 0x1478e4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1478e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1478e8: 0x25a30080  addiu       $v1, $t5, 0x80
    ctx->pc = 0x1478e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 128));
    // 0x1478ec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1478ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1478f0: 0x25ab0090  addiu       $t3, $t5, 0x90
    ctx->pc = 0x1478f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 144));
    // 0x1478f4: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x1478f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x1478f8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1478f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1478fc: 0x262204b0  addiu       $v0, $s1, 0x4B0
    ctx->pc = 0x1478fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
    // 0x147900: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x147900u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147904: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x147904u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x147908: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x147908u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14790c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x14790cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147910: 0x25ab00a0  addiu       $t3, $t5, 0xA0
    ctx->pc = 0x147910u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 160));
    // 0x147914: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x147914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x147918: 0x262204c0  addiu       $v0, $s1, 0x4C0
    ctx->pc = 0x147918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1216));
    // 0x14791c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x14791cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x147920: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x147920u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147924: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x147924u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x147928: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x147928u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14792c: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x14792cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147930: 0x25ab00b0  addiu       $t3, $t5, 0xB0
    ctx->pc = 0x147930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 176));
    // 0x147934: 0x3c022046  lui         $v0, 0x2046
    ctx->pc = 0x147934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8262 << 16));
    // 0x147938: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x147938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14793c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x147940: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x147940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x147944: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x147944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x147948: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x147948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x14794c: 0x26260270  addiu       $a2, $s1, 0x270
    ctx->pc = 0x14794cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
    // 0x147950: 0xfc700008  sd          $s0, 0x8($v1)
    ctx->pc = 0x147950u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 16));
    // 0x147954: 0x26250370  addiu       $a1, $s1, 0x370
    ctx->pc = 0x147954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x147958: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x147958u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x14795c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14795cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147960: 0x240d0007  addiu       $t5, $zero, 0x7
    ctx->pc = 0x147960u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x147964: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x147964u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147968: 0x340ae100  ori         $t2, $zero, 0xE100
    ctx->pc = 0x147968u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57600);
    // 0x14796c: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x14796cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x147970: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x147970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x147974: 0x0  nop
    ctx->pc = 0x147974u;
    // NOP
    ctx->pc = 0x147978u;
}
