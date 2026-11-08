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

// Function: caseD_a
// Address: 0x154de0 - 0x154e08
void caseD_a_0x154de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x154de0");
#endif

    ctx->pc = 0x154de0u;

    // 0x154de0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x154de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x154de4: 0x26030830  addiu       $v1, $s0, 0x830
    ctx->pc = 0x154de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
    // 0x154de8: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x154de8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x154dec: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x154decu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154df0: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x154df0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154df4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x154df4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x154df8: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x154df8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x154dfc: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x154DFCu;
    {
        const bool branch_taken_0x154dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DFCu;
        // 0x154e00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154dfc) {
            ctx->pc = 0x155320u;
            return;
        }
    }
    ctx->pc = 0x154E04u;
    // 0x154e04: 0x0  nop
    ctx->pc = 0x154e04u;
    // NOP
    ctx->pc = 0x154e08u;
}
