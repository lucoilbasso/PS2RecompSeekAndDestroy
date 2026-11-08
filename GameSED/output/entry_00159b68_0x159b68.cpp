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

// Function: entry_00159b68
// Address: 0x159b68 - 0x159bf0
void entry_00159b68_0x159b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159b68_0x159b68");
#endif

    ctx->pc = 0x159b68u;

    // 0x159b68: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x159b68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159b6c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x159b6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159b70: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x159b70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x159b74: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x159b74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x159b78: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x159b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159b7c: 0xc4c2001c  lwc1        $f2, 0x1C($a2)
    ctx->pc = 0x159b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159b80: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x159b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159b84: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x159b84u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x159b88: 0xc4e10404  lwc1        $f1, 0x404($a3)
    ctx->pc = 0x159b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159b8c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x159b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x159b90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x159b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159b94: 0x4501007d  bc1t        . + 4 + (0x7D << 2)
    ctx->pc = 0x159B94u;
    {
        const bool branch_taken_0x159b94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x159B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B94u;
        // 0x159b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b94) {
            ctx->pc = 0x159D8Cu;
            return;
        }
    }
    ctx->pc = 0x159B9Cu;
    // 0x159b9c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x159b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159ba0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x159ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x159ba4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159ba8: 0x45010078  bc1t        . + 4 + (0x78 << 2)
    ctx->pc = 0x159BA8u;
    {
        const bool branch_taken_0x159ba8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x159BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BA8u;
        // 0x159bac: 0x24e30400  addiu       $v1, $a3, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ba8) {
            ctx->pc = 0x159D8Cu;
            return;
        }
    }
    ctx->pc = 0x159BB0u;
    // 0x159bb0: 0xace00404  sw          $zero, 0x404($a3)
    ctx->pc = 0x159bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1028), GPR_U32(ctx, 0));
    // 0x159bb4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x159bb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159bb8: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x159bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x159bbc: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x159bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x159bc0: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x159bc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x159bc4: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x159bc4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x159bc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159bcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x159bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159bd0: 0xc780830c  lwc1        $f0, -0x7CF4($gp)
    ctx->pc = 0x159bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159bd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159bd8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x159BD8u;
    {
        const bool branch_taken_0x159bd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BD8u;
        // 0x159bdc: 0xe4e10478  swc1        $f1, 0x478($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 1144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bd8) {
            ctx->pc = 0x159BF0u;
            return;
        }
    }
    ctx->pc = 0x159BE0u;
    // 0x159be0: 0x55220004  bnel        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x159BE0u;
    {
        const bool branch_taken_0x159be0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x159be0) {
            ctx->pc = 0x159BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159BE0u;
            // 0x159be4: 0xc4e10478  lwc1        $f1, 0x478($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x159BF4u;
            return;
        }
    }
    ctx->pc = 0x159BE8u;
    // 0x159be8: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x159BE8u;
    {
        const bool branch_taken_0x159be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159BE8u;
        // 0x159bec: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159be8) {
            ctx->pc = 0x159B48u;
            return;
        }
    }
    ctx->pc = 0x159BF0u;
}
