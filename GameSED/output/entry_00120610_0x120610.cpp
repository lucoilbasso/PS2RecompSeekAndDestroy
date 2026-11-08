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

// Function: entry_00120610
// Address: 0x120610 - 0x120660
void entry_00120610_0x120610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120610_0x120610");
#endif

    ctx->pc = 0x120610u;

    // 0x120610: 0x55d90013  bnel        $t6, $t9, . + 4 + (0x13 << 2)
    ctx->pc = 0x120610u;
    {
        const bool branch_taken_0x120610 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 25));
        if (branch_taken_0x120610) {
            ctx->pc = 0x120614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120610u;
            // 0x120614: 0x8cc20120  lw          $v0, 0x120($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120660u;
            return;
        }
    }
    ctx->pc = 0x120618u;
    // 0x120618: 0x250300a0  addiu       $v1, $t0, 0xA0
    ctx->pc = 0x120618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x12061c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12061cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120620: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x120620u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120624: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x120624u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x120628: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x120628u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12062c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12062cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120630: 0x25040090  addiu       $a0, $t0, 0x90
    ctx->pc = 0x120630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
    // 0x120634: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x120634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120638: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x120638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12063c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12063cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x120640: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x120640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120644: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x120644u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x120648: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x120648u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12064c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12064cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x120650: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x120650u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x120654: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x120654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x120658: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x120658u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12065c: 0x8cc20120  lw          $v0, 0x120($a2)
    ctx->pc = 0x12065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
    ctx->pc = 0x120660u;
}
