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

// Function: entry_0011ee1c
// Address: 0x11ee1c - 0x11ee88
void entry_0011ee1c_0x11ee1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ee1c_0x11ee1c");
#endif

    ctx->pc = 0x11ee1cu;

    // 0x11ee1c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x11ee1cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x11ee20: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x11ee20u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11ee24: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x11ee24u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x11ee28: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x11ee28u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x11ee2c: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x11ee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11ee30: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x11ee30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11ee34: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x11ee34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11ee38: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x11ee38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x11ee3c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x11ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x11ee40: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x11EE40u;
    {
        const bool branch_taken_0x11ee40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ee40) {
            ctx->pc = 0x11EF84u;
            return;
        }
    }
    ctx->pc = 0x11EE48u;
    // 0x11ee48: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x11ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x11ee4c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x11EE4Cu;
    {
        const bool branch_taken_0x11ee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ee4c) {
            ctx->pc = 0x11EF84u;
            return;
        }
    }
    ctx->pc = 0x11EE54u;
    // 0x11ee54: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11ee54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ee58: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x11ee58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11ee5c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x11ee5cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x11ee60: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x11ee60u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11ee64: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11ee64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11ee68: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x11ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11ee6c: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x11ee6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x11ee70: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x11ee70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x11ee74: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x11EE74u;
    {
        const bool branch_taken_0x11ee74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE74u;
        // 0x11ee78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee74) {
            ctx->pc = 0x11EF84u;
            return;
        }
    }
    ctx->pc = 0x11EE7Cu;
    // 0x11ee7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11ee7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ee80: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x11ee80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11ee84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11ee88u;
}
