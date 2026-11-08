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

// Function: entry_001483d8
// Address: 0x1483d8 - 0x1485b4
void entry_001483d8_0x1483d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001483d8_0x1483d8");
#endif

    ctx->pc = 0x1483d8u;

label_1483d8:
    // 0x1483d8: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1483d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1483dc: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1483dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1483e0: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x1483e0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1483e4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1483e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1483e8: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x1483e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1483ec: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x1483ecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1483f0: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x1483f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1483f4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1483f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1483f8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1483f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1483fc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1483fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x148400: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x148400u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x148404: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x148404u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x148408: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x148408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14840c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x14840cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x148410: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x148410u;
    {
        const bool branch_taken_0x148410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148410u;
        // 0x148414: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148410) {
            ctx->pc = 0x1483D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1483d8;
        }
    }
    ctx->pc = 0x148418u;
    // 0x148418: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x148418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14841c: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x14841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x148420: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x148420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x148424: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x148424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x148428: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x148428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x14842c: 0x8c630210  lw          $v1, 0x210($v1)
    ctx->pc = 0x14842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x148430: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x148430u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x148434: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x148434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x148438: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x148438u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x14843c: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x14843cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x148440: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x148440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x148444: 0x3c02302e  lui         $v0, 0x302E
    ctx->pc = 0x148444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12334 << 16));
    // 0x148448: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x148448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14844c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14844cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x148450: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x148450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x148454: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x148454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148458: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148458u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x14845c: 0x240704e2  addiu       $a3, $zero, 0x4E2
    ctx->pc = 0x14845cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x148460: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x148460u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x148464: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x148464u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x148468: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x148468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14846c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14846cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148470: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x148470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148474: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x148474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148478: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x148478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14847c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14847cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148480: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x148480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x148484: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x148484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148488: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x148488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x14848c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14848cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148490: 0xe4b40008  swc1        $f20, 0x8($a1)
    ctx->pc = 0x148490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x148494: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148498: 0xfcd60008  sd          $s6, 0x8($a2)
    ctx->pc = 0x148498u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 22));
    // 0x14849c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14849cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1484a0: 0xe4d40004  swc1        $f20, 0x4($a2)
    ctx->pc = 0x1484a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1484a4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1484a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1484a8: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x1484a8u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1484ac: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1484acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1484b0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1484b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1484b4: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x1484b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484b8: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x1484b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x1484bc: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1484bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x1484c0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1484c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484c4: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1484c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x1484c8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1484c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1484cc: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x1484ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484d0: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1484d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1484d4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1484d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1484d8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1484d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1484dc: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x1484dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x1484e0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1484e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1484e4: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x1484e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1484e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1484e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1484ec: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x1484ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x1484f0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1484f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1484f4: 0xe4b40004  swc1        $f20, 0x4($a1)
    ctx->pc = 0x1484f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1484f8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1484f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1484fc: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x1484fcu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x148500: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x148500u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148504: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x148504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x148508: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x148508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14850c: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x14850cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x148510: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148510u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148514: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x148514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148518: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148518u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x14851c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x14851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148520: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x148520u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148524: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x148524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148528: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x148528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14852c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14852cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x148530: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148530u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148534: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x148534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x148538: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x148538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x14853c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148540: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x148540u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x148544: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x148544u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x148548: 0xe4b40004  swc1        $f20, 0x4($a1)
    ctx->pc = 0x148548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x14854c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x14854cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x148550: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x148550u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x148554: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x148554u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x148558: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x148558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x14855c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x14855cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148560: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x148560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x148564: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148564u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148568: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x148568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14856c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14856cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148570: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x148570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148574: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x148574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148578: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x148578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14857c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14857cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x148580: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x148580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x148584: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x148584u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x148588: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x148588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x14858c: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x14858cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x148590: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x148590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148594: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x148594u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x148598: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x148598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x14859c: 0xe4b40004  swc1        $f20, 0x4($a1)
    ctx->pc = 0x14859cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1485a0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1485a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1485a4: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x1485a4u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1485a8: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1485a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1485ac: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1485acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1485b0: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x1485b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    ctx->pc = 0x1485b4u;
}
