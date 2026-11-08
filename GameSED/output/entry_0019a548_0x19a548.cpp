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

// Function: entry_0019a548
// Address: 0x19a548 - 0x19a580
void entry_0019a548_0x19a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a548_0x19a548");
#endif

    ctx->pc = 0x19a548u;

    // 0x19a548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a54c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19a54cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a550: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x19A550u;
    {
        const bool branch_taken_0x19a550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A550u;
        // 0x19a554: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a550) {
            ctx->pc = 0x19A580u;
            return;
        }
    }
    ctx->pc = 0x19A558u;
    // 0x19a558: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x19a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19a55c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19a55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19a560: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A560u;
    {
        const bool branch_taken_0x19a560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a560) {
            ctx->pc = 0x19A564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A560u;
            // 0x19a564: 0x8e030160  lw          $v1, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A584u;
            return;
        }
    }
    ctx->pc = 0x19A568u;
    // 0x19a568: 0x260300c0  addiu       $v1, $s0, 0xC0
    ctx->pc = 0x19a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x19a56c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x19a56cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a570: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x19a570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19a574: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19a574u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19a578: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19a578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19a57c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x19a57cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x19a580u;
}
