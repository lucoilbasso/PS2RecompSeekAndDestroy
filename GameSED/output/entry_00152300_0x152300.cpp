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

// Function: entry_00152300
// Address: 0x152300 - 0x152350
void entry_00152300_0x152300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152300_0x152300");
#endif

    ctx->pc = 0x152300u;

    // 0x152300: 0x24c40070  addiu       $a0, $a2, 0x70
    ctx->pc = 0x152300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x152304: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x152304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152308: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x152308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15230c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x15230cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152310: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x152310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x152314: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x152314u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x152318: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x152318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15231c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15231cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152320: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x152320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x152324: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x152324u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152328: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x152328u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15232c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x15232cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x152330: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x152330u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x152334: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x152334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x152338: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x152338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x15233c: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x15233cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x152340: 0xfba80000  sqc2        $vf8, 0x0($sp)
    ctx->pc = 0x152340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x152344: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x152344u;
    {
        const bool branch_taken_0x152344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152344u;
        // 0x152348: 0x24e200b0  addiu       $v0, $a3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152344) {
            ctx->pc = 0x15239Cu;
            return;
        }
    }
    ctx->pc = 0x15234Cu;
    // 0x15234c: 0x0  nop
    ctx->pc = 0x15234cu;
    // NOP
    ctx->pc = 0x152350u;
}
