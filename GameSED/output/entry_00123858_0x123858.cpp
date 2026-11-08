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

// Function: entry_00123858
// Address: 0x123858 - 0x123888
void entry_00123858_0x123858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123858_0x123858");
#endif

    ctx->pc = 0x123858u;

    // 0x123858: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x123858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12385c: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x12385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x123860: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x123860u;
    {
        const bool branch_taken_0x123860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x123864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123860u;
        // 0x123864: 0x26220120  addiu       $v0, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123860) {
            ctx->pc = 0x123888u;
            return;
        }
    }
    ctx->pc = 0x123868u;
    // 0x123868: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x123868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12386c: 0xe62001b0  swc1        $f0, 0x1B0($s1)
    ctx->pc = 0x12386cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 432), bits); }
    // 0x123870: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x123870u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123874: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x123874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x123878: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x123878u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12387c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12387cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123880: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x123880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123884: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x123884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    ctx->pc = 0x123888u;
}
