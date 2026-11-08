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

// Function: entry_00152230
// Address: 0x152230 - 0x1522e4
void entry_00152230_0x152230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152230_0x152230");
#endif

    ctx->pc = 0x152230u;

    // 0x152230: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x152230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152234: 0x24c30070  addiu       $v1, $a2, 0x70
    ctx->pc = 0x152234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x152238: 0xc4e000e0  lwc1        $f0, 0xE0($a3)
    ctx->pc = 0x152238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15223c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15223cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152240: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x152240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x152244: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x152244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152248: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x152248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15224c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15224cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x152250: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x152250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152254: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x152254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152258: 0xc4e20268  lwc1        $f2, 0x268($a3)
    ctx->pc = 0x152258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15225c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15225cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152260: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x152260u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152264: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x152264u;
    {
        const bool branch_taken_0x152264 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x152268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152264u;
        // 0x152268: 0x24021118  addiu       $v0, $zero, 0x1118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152264) {
            ctx->pc = 0x1522E4u;
            return;
        }
    }
    ctx->pc = 0x15226Cu;
    // 0x15226c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x15226cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152270: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x152270u;
    {
        const bool branch_taken_0x152270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x152274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152270u;
        // 0x152274: 0x24e200b0  addiu       $v0, $a3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152270) {
            ctx->pc = 0x1522E8u;
            return;
        }
    }
    ctx->pc = 0x152278u;
    // 0x152278: 0xc4a00268  lwc1        $f0, 0x268($a1)
    ctx->pc = 0x152278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15227c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x15227cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152280: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x152280u;
    {
        const bool branch_taken_0x152280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x152284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152280u;
        // 0x152284: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152280) {
            ctx->pc = 0x1522E8u;
            return;
        }
    }
    ctx->pc = 0x152288u;
    // 0x152288: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x152288u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15228c: 0x0  nop
    ctx->pc = 0x15228cu;
    // NOP
    // 0x152290: 0x0  nop
    ctx->pc = 0x152290u;
    // NOP
    // 0x152294: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x152294u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x152298: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x152298u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x15229c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15229cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1522a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1522a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1522a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1522a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1522a8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1522a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1522ac: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1522acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1522b0: 0x24a300b0  addiu       $v1, $a1, 0xB0
    ctx->pc = 0x1522b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x1522b4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1522b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1522b8: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x1522b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1522bc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1522bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1522c0: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1522c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1522c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1522c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1522c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1522c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1522cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1522ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1522d0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1522d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1522d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1522d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1522d8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1522d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1522dc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1522dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1522e0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1522e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x1522e4u;
}
