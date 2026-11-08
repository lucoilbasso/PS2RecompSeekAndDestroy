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

// Function: entry_00149264
// Address: 0x149264 - 0x14927c
void entry_00149264_0x149264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149264_0x149264");
#endif

    ctx->pc = 0x149264u;

    // 0x149264: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x149264u;
    {
        const bool branch_taken_0x149264 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x149268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149264u;
        // 0x149268: 0x24e20030  addiu       $v0, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149264) {
            ctx->pc = 0x14927Cu;
            return;
        }
    }
    ctx->pc = 0x14926Cu;
    // 0x14926c: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x14926cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x149270: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x149270u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149274: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x149274u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x149278: 0xf9020000  sqc2        $vf2, 0x0($t0)
    ctx->pc = 0x149278u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x14927cu;
}
