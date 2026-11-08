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

// Function: entry_00158474
// Address: 0x158474 - 0x158534
void entry_00158474_0x158474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158474_0x158474");
#endif

    ctx->pc = 0x158474u;

    // 0x158474: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x158474u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158478: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x158478u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15847c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15847cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158480: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x158480u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x158484: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x158484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158488: 0xc5240404  lwc1        $f4, 0x404($t1)
    ctx->pc = 0x158488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15848c: 0x46002041  sub.s       $f1, $f4, $f0
    ctx->pc = 0x15848cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x158490: 0xe5210404  swc1        $f1, 0x404($t1)
    ctx->pc = 0x158490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1028), bits); }
    // 0x158494: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x158494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158498: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x158498u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x15849c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15849cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1584a0: 0x45010067  bc1t        . + 4 + (0x67 << 2)
    ctx->pc = 0x1584A0u;
    {
        const bool branch_taken_0x1584a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1584a0) {
            ctx->pc = 0x158640u;
            return;
        }
    }
    ctx->pc = 0x1584A8u;
    // 0x1584a8: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x1584a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1584ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1584acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1584b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1584b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1584b4: 0x45010062  bc1t        . + 4 + (0x62 << 2)
    ctx->pc = 0x1584B4u;
    {
        const bool branch_taken_0x1584b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1584B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584B4u;
        // 0x1584b8: 0x25270400  addiu       $a3, $t1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584b4) {
            ctx->pc = 0x158640u;
            return;
        }
    }
    ctx->pc = 0x1584BCu;
    // 0x1584bc: 0xad200404  sw          $zero, 0x404($t1)
    ctx->pc = 0x1584bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1028), GPR_U32(ctx, 0));
    // 0x1584c0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1584c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1584c4: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x1584c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1584c8: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x1584c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1584cc: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x1584ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1584d0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x1584d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1584d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1584d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1584d8: 0xc5200474  lwc1        $f0, 0x474($t1)
    ctx->pc = 0x1584d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1584dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1584dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1584e0: 0x45000057  bc1f        . + 4 + (0x57 << 2)
    ctx->pc = 0x1584E0u;
    {
        const bool branch_taken_0x1584e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1584E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584E0u;
        // 0x1584e4: 0xe5210478  swc1        $f1, 0x478($t1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584e0) {
            ctx->pc = 0x158640u;
            return;
        }
    }
    ctx->pc = 0x1584E8u;
    // 0x1584e8: 0x252a0120  addiu       $t2, $t1, 0x120
    ctx->pc = 0x1584e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 288));
    // 0x1584ec: 0xc5220134  lwc1        $f2, 0x134($t1)
    ctx->pc = 0x1584ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1584f0: 0x460100c4  c1          0x100C4
    ctx->pc = 0x1584f0u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x1584f4: 0xc7808300  lwc1        $f0, -0x7D00($gp)
    ctx->pc = 0x1584f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1584f8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1584f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1584fc: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x1584FCu;
    {
        const bool branch_taken_0x1584fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1584fc) {
            ctx->pc = 0x158500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1584FCu;
            // 0x158500: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158534u;
            return;
        }
    }
    ctx->pc = 0x158504u;
    // 0x158504: 0xc5200404  lwc1        $f0, 0x404($t1)
    ctx->pc = 0x158504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158508: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15850c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15850cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158510: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x158510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158514: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158518: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x158518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15851c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15851cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x158520: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x158520u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x158524: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x158524u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x158528: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x158528u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15852c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15852cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x158530: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x158530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    ctx->pc = 0x158534u;
}
