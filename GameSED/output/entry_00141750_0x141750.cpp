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

// Function: entry_00141750
// Address: 0x141750 - 0x141770
void entry_00141750_0x141750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141750_0x141750");
#endif

    ctx->pc = 0x141750u;

    // 0x141750: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x141750u;
    {
        const bool branch_taken_0x141750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x141754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141750u;
        // 0x141754: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141750) {
            ctx->pc = 0x141770u;
            return;
        }
    }
    ctx->pc = 0x141758u;
    // 0x141758: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x141758u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14175c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x14175cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x141760: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x141760u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x141764: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x141764u;
    {
        const bool branch_taken_0x141764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141764u;
        // 0x141768: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141764) {
            ctx->pc = 0x141778u;
            return;
        }
    }
    ctx->pc = 0x14176Cu;
    // 0x14176c: 0x0  nop
    ctx->pc = 0x14176cu;
    // NOP
    ctx->pc = 0x141770u;
}
