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

// Function: entry_0016de00
// Address: 0x16de00 - 0x16de78
void entry_0016de00_0x16de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016de00_0x16de00");
#endif

    ctx->pc = 0x16de00u;

    // 0x16de00: 0xc78084c4  lwc1        $f0, -0x7B3C($gp)
    ctx->pc = 0x16de00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16de04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16de08: 0x4502004d  bc1fl       . + 4 + (0x4D << 2)
    ctx->pc = 0x16DE08u;
    {
        const bool branch_taken_0x16de08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16de08) {
            ctx->pc = 0x16DE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DE08u;
            // 0x16de0c: 0x8e4202b0  lw          $v0, 0x2B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DF40u;
            return;
        }
    }
    ctx->pc = 0x16DE10u;
    // 0x16de10: 0xc64002e4  lwc1        $f0, 0x2E4($s2)
    ctx->pc = 0x16de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x16de14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16de18: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16de18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16de1c: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
    ctx->pc = 0x16DE1Cu;
    {
        const bool branch_taken_0x16de1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16de1c) {
            ctx->pc = 0x16DE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DE1Cu;
            // 0x16de20: 0xc64002e0  lwc1        $f0, 0x2E0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DE78u;
            return;
        }
    }
    ctx->pc = 0x16DE24u;
    // 0x16de24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16de24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16de28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16de28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16de2c: 0xc64202f0  lwc1        $f2, 0x2F0($s2)
    ctx->pc = 0x16de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16de30: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x16de30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x16de34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16de34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16de38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16de38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16de3c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x16de3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16de40: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x16de40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16de44: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x16de44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16de48: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x16de48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16de4c: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x16de4cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16de50: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x16de50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x16de54: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x16de54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x16de58: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x16de58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x16de5c: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x16de5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x16de60: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x16de60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x16de64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16de64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16de68: 0xe64002e0  swc1        $f0, 0x2E0($s2)
    ctx->pc = 0x16de68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 736), bits); }
    // 0x16de6c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x16DE6Cu;
    {
        const bool branch_taken_0x16de6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE6Cu;
        // 0x16de70: 0xe64002f0  swc1        $f0, 0x2F0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de6c) {
            ctx->pc = 0x16DF3Cu;
            return;
        }
    }
    ctx->pc = 0x16DE74u;
    // 0x16de74: 0x0  nop
    ctx->pc = 0x16de74u;
    // NOP
    ctx->pc = 0x16de78u;
}
