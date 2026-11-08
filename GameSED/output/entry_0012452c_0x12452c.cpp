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

// Function: entry_0012452c
// Address: 0x12452c - 0x124568
void entry_0012452c_0x12452c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012452c_0x12452c");
#endif

    ctx->pc = 0x12452cu;

    // 0x12452c: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12452Cu;
    {
        const bool branch_taken_0x12452c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12452c) {
            ctx->pc = 0x124530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12452Cu;
            // 0x124530: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124568u;
            return;
        }
    }
    ctx->pc = 0x124534u;
    // 0x124534: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x124534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x124538: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x124538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12453c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12453cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x124540: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x124540u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x124544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x124544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124548: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x124548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x12454c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12454cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x124550: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x124550u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x124554: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x124554u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x124558: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x124558u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12455c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12455cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124560: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x124560u;
    {
        const bool branch_taken_0x124560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124560u;
        // 0x124564: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x124560) {
            ctx->pc = 0x124574u;
            return;
        }
    }
    ctx->pc = 0x124568u;
}
