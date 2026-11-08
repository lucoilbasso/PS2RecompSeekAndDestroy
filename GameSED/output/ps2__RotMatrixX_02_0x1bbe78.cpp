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

// Function: _RotMatrixX_02
// Address: 0x1bbe78 - 0x1bbec0
void ps2__RotMatrixX_02_0x1bbe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RotMatrixX_02_0x1bbe78");
#endif

    switch (ctx->pc) {
        case 0x1bbe8cu: goto label_1bbe8c;
        default: break;
    }

    ctx->pc = 0x1bbe78u;

    // 0x1bbe78: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x1bbe78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1bbe7c: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x1bbe7cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1bbe80: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x1bbe80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe84: 0xc06ef4a  jal         func_1BBD28
    ctx->pc = 0x1BBE84u;
    SET_GPR_U32(ctx, 31, 0x1BBE8Cu);
    ctx->pc = 0x1BBD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBD28u, 0x1BBE84u, 0x1BBE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE8Cu;
label_1bbe8c:
    // 0x1bbe8c: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x1bbe8cu;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe90: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x1bbe90u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1bbe94: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x1bbe94u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1bbe98: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x1bbe98u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1bbe9c: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x1bbe9cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x1bbea0: 0x4b002983  vaddw.x     $vf6, $vf5, $vf0w
    ctx->pc = 0x1bbea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1bbea4: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x1bbea4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x1bbea8: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x1bbea8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1bbeac: 0x4a4429c0  vaddx.z     $vf7, $vf5, $vf4x
    ctx->pc = 0x1bbeacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1bbeb0: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x1bbeb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1bbeb4: 0x4a842a04  vsubx.y     $vf8, $vf5, $vf4x
    ctx->pc = 0x1bbeb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1bbeb8: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x1bbeb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1bbebc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1bbebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1bbec0u;
}
