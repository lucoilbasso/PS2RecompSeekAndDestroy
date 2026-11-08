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

// Function: entry_0011274c
// Address: 0x11274c - 0x1127f0
void entry_0011274c_0x11274c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011274c_0x11274c");
#endif

    ctx->pc = 0x11274cu;

    // 0x11274c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x11274cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112750: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x112750u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112754: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x112754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x112758: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x112758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11275c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x11275cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x112760: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x112760u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x112764: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x112764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x112768: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x112768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11276c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11276cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112770: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x112770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x112774: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x112774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x112778: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x112778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x11277c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x11277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x112780: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x112780u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x112784: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x112784u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x112788: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x112788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11278c: 0x46020900  add.s       $f4, $f1, $f2
    ctx->pc = 0x11278cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x112790: 0x46062032  c.eq.s      $f4, $f6
    ctx->pc = 0x112790u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112794: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x112794u;
    {
        const bool branch_taken_0x112794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x112794) {
            ctx->pc = 0x112804u;
            return;
        }
    }
    ctx->pc = 0x11279Cu;
    // 0x11279c: 0x0  nop
    ctx->pc = 0x11279cu;
    // NOP
    // 0x1127a0: 0x0  nop
    ctx->pc = 0x1127a0u;
    // NOP
    // 0x1127a4: 0x460429c3  div.s       $f7, $f5, $f4
    ctx->pc = 0x1127a4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x1127a8: 0x46074842  mul.s       $f1, $f9, $f7
    ctx->pc = 0x1127a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x1127ac: 0x46080881  sub.s       $f2, $f1, $f8
    ctx->pc = 0x1127acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x1127b0: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x1127b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1127b4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1127B4u;
    {
        const bool branch_taken_0x1127b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1127b4) {
            ctx->pc = 0x112804u;
            return;
        }
    }
    ctx->pc = 0x1127BCu;
    // 0x1127bc: 0x46006047  neg.s       $f1, $f12
    ctx->pc = 0x1127bcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[12]);
    // 0x1127c0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1127c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1127c4: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1127C4u;
    {
        const bool branch_taken_0x1127c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1127C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127C4u;
        // 0x1127c8: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1127c4) {
            ctx->pc = 0x112804u;
            return;
        }
    }
    ctx->pc = 0x1127CCu;
    // 0x1127cc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1127ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1127d0: 0x460528c2  mul.s       $f3, $f5, $f5
    ctx->pc = 0x1127d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1127d4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1127d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1127d8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1127d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1127dc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1127dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1127e0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1127e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1127e4: 0x0  nop
    ctx->pc = 0x1127e4u;
    // NOP
    // 0x1127e8: 0x0  nop
    ctx->pc = 0x1127e8u;
    // NOP
    // 0x1127ec: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x1127ecu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    ctx->pc = 0x1127f0u;
}
