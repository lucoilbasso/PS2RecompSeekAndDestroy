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

// Function: caseD_0
// Address: 0x16eb64 - 0x16eb88
void caseD_0_0x16eb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x16eb64");
#endif

    ctx->pc = 0x16eb64u;

    // 0x16eb64: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x16EB64u;
    {
        const bool branch_taken_0x16eb64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16eb64) {
            ctx->pc = 0x16EB88u;
            return;
        }
    }
    ctx->pc = 0x16EB6Cu;
    // 0x16eb6c: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x16eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16eb70: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x16eb70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb74: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x16eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x16eb78: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x16eb78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16eb7c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x16eb7cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16eb80: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x16eb80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16eb84: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x16eb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x16eb88u;
}
