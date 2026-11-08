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

// Function: entry_00194214
// Address: 0x194214 - 0x194238
void entry_00194214_0x194214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194214_0x194214");
#endif

    ctx->pc = 0x194214u;

    // 0x194214: 0x70851488  pextlw      $v0, $a0, $a1
    ctx->pc = 0x194214u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x194218: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x194218u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19421c: 0x4b84213f  vitof15.xy  $vf4, $vf4
    ctx->pc = 0x19421cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x194220: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x194220u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194224: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x194224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x194228: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x194228u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 2), _MM_SHUFFLE(0,3,2,1)));
    // 0x19422c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x19422cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x194230: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x194230u;
    {
        const bool branch_taken_0x194230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194230u;
        // 0x194234: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194230) {
            ctx->pc = 0x194270u;
            return;
        }
    }
    ctx->pc = 0x194238u;
}
