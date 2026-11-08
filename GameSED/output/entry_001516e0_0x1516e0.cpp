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

// Function: entry_001516e0
// Address: 0x1516e0 - 0x151760
void entry_001516e0_0x1516e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001516e0_0x1516e0");
#endif

    ctx->pc = 0x1516e0u;

    // 0x1516e0: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1516e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1516e4: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1516e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1516e8: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1516e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1516ec: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1516ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1516f0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1516f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1516f4: 0x24429ca0  addiu       $v0, $v0, -0x6360
    ctx->pc = 0x1516f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941856));
    // 0x1516f8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1516f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1516fc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1516fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x209CA0u));
    // 0x151700: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x151700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151704: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x151704u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x151708: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x151708u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15170c: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x15170cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151710: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151714: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x151714u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151718: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x151718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15171c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15171cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151720: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x151720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151724: 0xc6010860  lwc1        $f1, 0x860($s0)
    ctx->pc = 0x151724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151728: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x151728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15172c: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x15172Cu;
    {
        const bool branch_taken_0x15172c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x151730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15172Cu;
        // 0x151730: 0x46000881  sub.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15172c) {
            ctx->pc = 0x151764u;
            return;
        }
    }
    ctx->pc = 0x151734u;
    // 0x151734: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x151734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151738: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x151738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15173c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x15173Cu;
    {
        const bool branch_taken_0x15173c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15173c) {
            ctx->pc = 0x151760u;
            return;
        }
    }
    ctx->pc = 0x151744u;
    // 0x151744: 0x8e03037c  lw          $v1, 0x37C($s0)
    ctx->pc = 0x151744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x151748: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x151748u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x15174c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15174cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x151750: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x151750u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x151754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151758: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x151758u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15175c: 0xe6000634  swc1        $f0, 0x634($s0)
    ctx->pc = 0x15175cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
    ctx->pc = 0x151760u;
}
