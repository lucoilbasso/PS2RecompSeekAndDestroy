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

// Function: entry_0014f958
// Address: 0x14f958 - 0x14f970
void entry_0014f958_0x14f958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f958_0x14f958");
#endif

    ctx->pc = 0x14f958u;

    // 0x14f958: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x14f958u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f95c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x14f95cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f960: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x14f960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x14f964: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x14f964u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14f968: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F968u;
    {
        const bool branch_taken_0x14f968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F968u;
        // 0x14f96c: 0x8e620184  lw          $v0, 0x184($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f968) {
            ctx->pc = 0x14F97Cu;
            return;
        }
    }
    ctx->pc = 0x14F970u;
}
