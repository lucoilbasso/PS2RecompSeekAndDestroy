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

// Function: Clear__8WcEntity
// Address: 0x1dce28 - 0x1dcf0c
void Clear__8WcEntity_0x1dce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__8WcEntity_0x1dce28");
#endif

    ctx->pc = 0x1dce28u;

    // 0x1dce28: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1dce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1dce2c: 0x2405e000  addiu       $a1, $zero, -0x2000
    ctx->pc = 0x1dce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
    // 0x1dce30: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1dce30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1dce34: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x1dce34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1dce38: 0xa4450002  sh          $a1, 0x2($v0)
    ctx->pc = 0x1dce38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1dce3c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1dce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1dce40: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1dce40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dce44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1dce44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1dce48: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1dce48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1dce4c: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x1dce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1dce50: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1dce50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dce54: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x1dce54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dce58: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1dce58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dce5c: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x1dce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1dce60: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1dce60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dce64: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x1dce64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dce68: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1dce68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dce6c: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x1dce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1dce70: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1dce70u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1dce74: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1dce74u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1dce78: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1dce78u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1dce7c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1dce7cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1dce80: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1dce80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dce84: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x1dce84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dce88: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1dce88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1dce8c: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x1dce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1dce90: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x1dce90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1dce94: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1dce94u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1dce98: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1dce98u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1dce9c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1dce9cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1dcea0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1dcea0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1dcea4: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x1dcea4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dcea8: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x1dcea8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dceac: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x1dceacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1dceb0: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x1dceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1dceb4: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1dceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1dceb8: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1dceb8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1dcebc: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1dcebcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1dcec0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1dcec0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1dcec4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1dcec4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1dcec8: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1dcec8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1dcecc: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x1dceccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1dced0: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1dced0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1dced4: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x1dced4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1dced8: 0xac800148  sw          $zero, 0x148($a0)
    ctx->pc = 0x1dced8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 0));
    // 0x1dcedc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1dcedcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1dcee0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1dcee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1dcee4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1dcee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1dcee8: 0xac800120  sw          $zero, 0x120($a0)
    ctx->pc = 0x1dcee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
    // 0x1dceec: 0xac800124  sw          $zero, 0x124($a0)
    ctx->pc = 0x1dceecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 0));
    // 0x1dcef0: 0xac800128  sw          $zero, 0x128($a0)
    ctx->pc = 0x1dcef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 0));
    // 0x1dcef4: 0xac80012c  sw          $zero, 0x12C($a0)
    ctx->pc = 0x1dcef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
    // 0x1dcef8: 0xac800130  sw          $zero, 0x130($a0)
    ctx->pc = 0x1dcef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 0));
    // 0x1dcefc: 0xac800134  sw          $zero, 0x134($a0)
    ctx->pc = 0x1dcefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 0));
    // 0x1dcf00: 0xac800140  sw          $zero, 0x140($a0)
    ctx->pc = 0x1dcf00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 0));
    // 0x1dcf04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF04u;
        // 0x1dcf08: 0xac800144  sw          $zero, 0x144($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF0Cu;
}
