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

// Function: entry_001410a0
// Address: 0x1410a0 - 0x1410e0
void entry_001410a0_0x1410a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001410a0_0x1410a0");
#endif

    ctx->pc = 0x1410a0u;

    // 0x1410a0: 0x5662000f  bnel        $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1410A0u;
    {
        const bool branch_taken_0x1410a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1410a0) {
            ctx->pc = 0x1410A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1410A0u;
            // 0x1410a4: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1410E0u;
            return;
        }
    }
    ctx->pc = 0x1410A8u;
    // 0x1410a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1410a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1410ac: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1410acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1410b0: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1410b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1410b4: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x1410b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1410b8: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x1410b8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1410bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1410bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1410c0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1410c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1410c4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1410c4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1410c8: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x1410c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1410cc: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x1410ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1410d0: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x1410d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1410d4: 0xf8880000  sqc2        $vf8, 0x0($a0)
    ctx->pc = 0x1410d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1410d8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1410D8u;
    {
        const bool branch_taken_0x1410d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1410DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1410D8u;
        // 0x1410dc: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410d8) {
            ctx->pc = 0x141140u;
            return;
        }
    }
    ctx->pc = 0x1410E0u;
}
