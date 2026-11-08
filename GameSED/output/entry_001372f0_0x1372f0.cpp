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

// Function: entry_001372f0
// Address: 0x1372f0 - 0x137334
void entry_001372f0_0x1372f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001372f0_0x1372f0");
#endif

    ctx->pc = 0x1372f0u;

    // 0x1372f0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1372f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1372f4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1372f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1372f8: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1372f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1372fc: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1372fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x137300: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x137300u;
    {
        const bool branch_taken_0x137300 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x137304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137300u;
        // 0x137304: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137300) {
            ctx->pc = 0x137334u;
            return;
        }
    }
    ctx->pc = 0x137308u;
    // 0x137308: 0x8e620264  lw          $v0, 0x264($s3)
    ctx->pc = 0x137308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 612)));
    // 0x13730c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13730cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x137310: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x137310u;
    {
        const bool branch_taken_0x137310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137310) {
            ctx->pc = 0x137334u;
            return;
        }
    }
    ctx->pc = 0x137318u;
    // 0x137318: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x137318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x13731c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13731cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137320: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x137320u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137324: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x137324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x137328: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x137328u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13732c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x13732cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x137330: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x137330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x137334u;
}
