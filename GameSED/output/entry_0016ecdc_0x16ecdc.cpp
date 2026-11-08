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

// Function: entry_0016ecdc
// Address: 0x16ecdc - 0x16ed20
void entry_0016ecdc_0x16ecdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ecdc_0x16ecdc");
#endif

    ctx->pc = 0x16ecdcu;

    // 0x16ecdc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16ece0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16ECE0u;
    {
        const bool branch_taken_0x16ece0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16ECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ECE0u;
        // 0x16ece4: 0x26230280  addiu       $v1, $s1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ece0) {
            ctx->pc = 0x16ED20u;
            return;
        }
    }
    ctx->pc = 0x16ECE8u;
    // 0x16ece8: 0x26c20630  addiu       $v0, $s6, 0x630
    ctx->pc = 0x16ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1584));
    // 0x16ecec: 0xc7808500  lwc1        $f0, -0x7B00($gp)
    ctx->pc = 0x16ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ecf0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16ecf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ecf4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16ecf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ecf8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x16ecf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x16ecfc: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x16ecfcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x16ed00: 0x4a2c233c  vmove.w     $vf12, $vf4
    ctx->pc = 0x16ed00u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], ctx->vu0_vf[4], _mm_castsi128_ps(mask)); }
    // 0x16ed04: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x16ed04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16ed08: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x16ed08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x16ed0c: 0x4bc621bc  vmulax.xyz  $ACC, $vf4, $vf6x
    ctx->pc = 0x16ed0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x16ed10: 0x4bc82b08  vmaddx.xyz  $vf12, $vf5, $vf8x
    ctx->pc = 0x16ed10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16ed14: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x16ed14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16ed18: 0xc6c10414  lwc1        $f1, 0x414($s6)
    ctx->pc = 0x16ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16ed1c: 0xe6c10634  swc1        $f1, 0x634($s6)
    ctx->pc = 0x16ed1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 1588), bits); }
    ctx->pc = 0x16ed20u;
}
