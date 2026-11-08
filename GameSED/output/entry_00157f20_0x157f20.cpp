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

// Function: entry_00157f20
// Address: 0x157f20 - 0x157f90
void entry_00157f20_0x157f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157f20_0x157f20");
#endif

    ctx->pc = 0x157f20u;

    // 0x157f20: 0x4bce70aa  vmul.xyz    $vf2, $vf14, $vf14
    ctx->pc = 0x157f20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157f24: 0x4a821082  vaddz.y     $vf2, $vf2, $vf2z
    ctx->pc = 0x157f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157f28: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x157f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157f2c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x157f2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f34: 0xc5200474  lwc1        $f0, 0x474($t1)
    ctx->pc = 0x157f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157f3c: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x157F3Cu;
    {
        const bool branch_taken_0x157f3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F3Cu;
        // 0x157f40: 0xe5210478  swc1        $f1, 0x478($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f3c) {
            ctx->pc = 0x158098u;
            return;
        }
    }
    ctx->pc = 0x157F44u;
    // 0x157f44: 0x252a0120  addiu       $t2, $t1, 0x120
    ctx->pc = 0x157f44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 288));
    // 0x157f48: 0xc5220134  lwc1        $f2, 0x134($t1)
    ctx->pc = 0x157f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157f4c: 0x460100c4  c1          0x100C4
    ctx->pc = 0x157f4cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x157f50: 0xc78082f4  lwc1        $f0, -0x7D0C($gp)
    ctx->pc = 0x157f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f54: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x157f54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157f58: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x157F58u;
    {
        const bool branch_taken_0x157f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157f58) {
            ctx->pc = 0x157F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157F58u;
            // 0x157f5c: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157F90u;
            return;
        }
    }
    ctx->pc = 0x157F60u;
    // 0x157f60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157f64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x157f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x157f68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x157f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f6c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x157f6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x157f70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x157f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x157f74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x157f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x157f78: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x157f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x157f7c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x157f7cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x157f80: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x157f80u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x157f84: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x157f84u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x157f88: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x157f88u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x157f8c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x157f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    ctx->pc = 0x157f90u;
}
