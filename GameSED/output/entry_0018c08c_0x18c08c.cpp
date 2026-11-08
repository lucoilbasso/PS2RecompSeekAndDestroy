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

// Function: entry_0018c08c
// Address: 0x18c08c - 0x18c158
void entry_0018c08c_0x18c08c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c08c_0x18c08c");
#endif

    ctx->pc = 0x18c08cu;

    // 0x18c08c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c090: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x18c090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x18c094: 0x34a5242e  ori         $a1, $a1, 0x242E
    ctx->pc = 0x18c094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9262);
    // 0x18c098: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x18c098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c09c: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x18c09cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x18c0a0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c0a4: 0xdfa600c8  ld          $a2, 0xC8($sp)
    ctx->pc = 0x18c0a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18c0a8: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x18c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x18c0ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18c0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c0b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18c0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c0b4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c0b8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x18c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18c0bc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x18c0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18c0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c0c4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x18c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x18c0c8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c0cc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x18c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x18c0d0: 0xe4670004  swc1        $f7, 0x4($v1)
    ctx->pc = 0x18c0d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18c0d4: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x18c0d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x18c0d8: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x18c0d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18c0dc: 0xe4470008  swc1        $f7, 0x8($v0)
    ctx->pc = 0x18c0dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18c0e0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18c0e4: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x18c0e4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18c0e8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x18c0e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x18c0ec: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x18c0ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x18c0f0: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x18c0f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18c0f4: 0xdaa70030  lqc2        $vf7, 0x30($s5)
    ctx->pc = 0x18c0f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x18c0f8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18c0f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c0fc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18c0fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c100: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18c100u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c104: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18c104u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18c108: 0x4bec617d  vftoi4.xyzw $vf12, $vf12
    ctx->pc = 0x18c108u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18c10c: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x18c10cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x18c110: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x18c110u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c114: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18c118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c11c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18c11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18c120: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x18c120u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x18c124: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x18c124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x18c128: 0xe4670008  swc1        $f7, 0x8($v1)
    ctx->pc = 0x18c128u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x18c12c: 0xd9c80000  lqc2        $vf8, 0x0($t6)
    ctx->pc = 0x18c12cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x18c130: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x18c130u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x18c134: 0xdaa50010  lqc2        $vf5, 0x10($s5)
    ctx->pc = 0x18c134u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x18c138: 0xdaa60020  lqc2        $vf6, 0x20($s5)
    ctx->pc = 0x18c138u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18c13c: 0xdaa70030  lqc2        $vf7, 0x30($s5)
    ctx->pc = 0x18c13cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x18c140: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18c140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c144: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18c144u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c148: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x18c148u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18c14c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18c14cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18c150: 0x4bec617d  vftoi4.xyzw $vf12, $vf12
    ctx->pc = 0x18c150u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18c154: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x18c154u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    ctx->pc = 0x18c158u;
}
