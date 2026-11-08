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

// Function: entry_00157bac
// Address: 0x157bac - 0x157bf8
void entry_00157bac_0x157bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157bac_0x157bac");
#endif

    ctx->pc = 0x157bacu;

    // 0x157bac: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x157bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x157bb0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x157bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x157bb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x157bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x157bb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x157bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x157bbc: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x157bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x157bc0: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x157bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x157bc4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x157BC4u;
    {
        const bool branch_taken_0x157bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BC4u;
        // 0x157bc8: 0x26630020  addiu       $v1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bc4) {
            ctx->pc = 0x157C20u;
            return;
        }
    }
    ctx->pc = 0x157BCCu;
    // 0x157bcc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157bccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157bd0: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x157bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x157bd4: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x157bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x157bd8: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x157bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x157bdc: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x157bdcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x157be0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157be4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157be8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x157be8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157bec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x157BECu;
    {
        const bool branch_taken_0x157bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BECu;
        // 0x157bf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bec) {
            ctx->pc = 0x157BF8u;
            return;
        }
    }
    ctx->pc = 0x157BF4u;
    // 0x157bf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x157bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x157bf8u;
}
