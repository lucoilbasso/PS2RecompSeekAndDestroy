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

// Function: entry_00169cfc
// Address: 0x169cfc - 0x169d78
void entry_00169cfc_0x169cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169cfc_0x169cfc");
#endif

    ctx->pc = 0x169cfcu;

    // 0x169cfc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169d00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x169d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d04: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x169d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169d08: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169d0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169d10: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169d14: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169d14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169d18: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169d18u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169d1c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169d1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169d24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169d28: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169d2c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x169d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x169d30: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169d30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169d34: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169d34u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169d38: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169d38u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169d40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169d44: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169d48: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x169d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x169d4c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169d4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169d50: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169d50u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169d54: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169d54u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169d5c: 0x8ec301b4  lw          $v1, 0x1B4($s6)
    ctx->pc = 0x169d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x169d60: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x169d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x169d64: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x169d64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x169d68: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x169d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x169d6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x169d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x169d70: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x169D70u;
    {
        const bool branch_taken_0x169d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D70u;
        // 0x169d74: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d70) {
            ctx->pc = 0x169E8Cu;
            return;
        }
    }
    ctx->pc = 0x169D78u;
}
