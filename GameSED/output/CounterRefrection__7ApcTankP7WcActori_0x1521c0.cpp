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

// Function: CounterRefrection__7ApcTankP7WcActori
// Address: 0x1521c0 - 0x1523b4
void CounterRefrection__7ApcTankP7WcActori_0x1521c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CounterRefrection__7ApcTankP7WcActori_0x1521c0");
#endif

    ctx->pc = 0x1521c0u;

    // 0x1521c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1521c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521c4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1521c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1521c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1521c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1521cc: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1521CCu;
    {
        const bool branch_taken_0x1521cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1521D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521CCu;
        // 0x1521d0: 0x8ce60160  lw          $a2, 0x160($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521cc) {
            ctx->pc = 0x1521F8u;
            goto label_1521f8;
        }
    }
    ctx->pc = 0x1521D4u;
    // 0x1521d4: 0x24e200b0  addiu       $v0, $a3, 0xB0
    ctx->pc = 0x1521d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
    // 0x1521d8: 0x24c30070  addiu       $v1, $a2, 0x70
    ctx->pc = 0x1521d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x1521dc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1521dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1521e0: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1521e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1521e4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1521e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1521e8: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1521e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1521ec: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1521ECu;
    {
        const bool branch_taken_0x1521ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1521ec) {
            ctx->pc = 0x1523ACu;
            goto label_1523ac;
        }
    }
    ctx->pc = 0x1521F4u;
    // 0x1521f4: 0x0  nop
    ctx->pc = 0x1521f4u;
    // NOP
label_1521f8:
    // 0x1521f8: 0x18a0006c  blez        $a1, . + 4 + (0x6C << 2)
    ctx->pc = 0x1521F8u;
    {
        const bool branch_taken_0x1521f8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1521FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521F8u;
        // 0x1521fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521f8) {
            ctx->pc = 0x1523ACu;
            goto label_1523ac;
        }
    }
    ctx->pc = 0x152200u;
    // 0x152200: 0x8ca300d8  lw          $v1, 0xD8($a1)
    ctx->pc = 0x152200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
    // 0x152204: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x152204u;
    {
        const bool branch_taken_0x152204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x152208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152204u;
        // 0x152208: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152204) {
            ctx->pc = 0x152230u;
            goto label_152230;
        }
    }
    ctx->pc = 0x15220Cu;
    // 0x15220c: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x15220Cu;
    {
        const bool branch_taken_0x15220c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15220Cu;
        // 0x152210: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15220c) {
            ctx->pc = 0x1523ACu;
            goto label_1523ac;
        }
    }
    ctx->pc = 0x152214u;
    // 0x152214: 0x5062003a  beql        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x152214u;
    {
        const bool branch_taken_0x152214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152214) {
            ctx->pc = 0x152218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152214u;
            // 0x152218: 0xc4e000e0  lwc1        $f0, 0xE0($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x152300u;
            goto label_152300;
        }
    }
    ctx->pc = 0x15221Cu;
    // 0x15221c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x152220: 0x5062004b  beql        $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x152220u;
    {
        const bool branch_taken_0x152220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152220) {
            ctx->pc = 0x152224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152220u;
            // 0x152224: 0xc4e000e0  lwc1        $f0, 0xE0($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x152350u;
            goto label_152350;
        }
    }
    ctx->pc = 0x152228u;
    // 0x152228: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x152228u;
    {
        const bool branch_taken_0x152228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152228) {
            ctx->pc = 0x1523ACu;
            goto label_1523ac;
        }
    }
    ctx->pc = 0x152230u;
label_152230:
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
            goto label_1522e4;
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
            goto label_1522e8;
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
            goto label_1522e8;
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
label_1522e4:
    // 0x1522e4: 0x24e200b0  addiu       $v0, $a3, 0xB0
    ctx->pc = 0x1522e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
label_1522e8:
    // 0x1522e8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1522e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1522ec: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1522ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1522f0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1522f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1522f4: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1522f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1522f8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1522F8u;
    {
        const bool branch_taken_0x1522f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1522f8) {
            ctx->pc = 0x1523ACu;
            goto label_1523ac;
        }
    }
    ctx->pc = 0x152300u;
label_152300:
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
            goto label_15239c;
        }
    }
    ctx->pc = 0x15234Cu;
    // 0x15234c: 0x0  nop
    ctx->pc = 0x15234cu;
    // NOP
label_152350:
    // 0x152350: 0x24c40070  addiu       $a0, $a2, 0x70
    ctx->pc = 0x152350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x152354: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x152354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152358: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x152358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x15235c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15235cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x152360: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x152360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152364: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x152364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x152368: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x152368u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15236c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x15236cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152370: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x152370u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x152374: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x152374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x152378: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x152378u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15237c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x15237cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152380: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x152380u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x152384: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x152384u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x152388: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x152388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x15238c: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x15238cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x152390: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x152390u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x152394: 0xfba80000  sqc2        $vf8, 0x0($sp)
    ctx->pc = 0x152394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x152398: 0x24e200b0  addiu       $v0, $a3, 0xB0
    ctx->pc = 0x152398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
label_15239c:
    // 0x15239c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x15239cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1523a0: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x1523a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1523a4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1523a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1523a8: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1523a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1523ac:
    // 0x1523ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1523ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1523B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523ACu;
        // 0x1523b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1523ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1523B4u;
}
