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

// Function: entry_00157f90
// Address: 0x157f90 - 0x157fa8
void entry_00157f90_0x157f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157f90_0x157f90");
#endif

    ctx->pc = 0x157f90u;

    // 0x157f90: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x157F90u;
    {
        const bool branch_taken_0x157f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157f90) {
            ctx->pc = 0x157F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157F90u;
            // 0x157f94: 0x8d420004  lw          $v0, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157FA8u;
            return;
        }
    }
    ctx->pc = 0x157F98u;
    // 0x157f98: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x157f98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x157f9c: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x157f9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157fa0: 0xf8e20000  sqc2        $vf2, 0x0($a3)
    ctx->pc = 0x157fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157fa4: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x157fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    ctx->pc = 0x157fa8u;
}
