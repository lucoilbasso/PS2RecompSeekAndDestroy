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

// Function: entry_00130f20
// Address: 0x130f20 - 0x130f48
void entry_00130f20_0x130f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130f20_0x130f20");
#endif

    ctx->pc = 0x130f20u;

label_130f20:
    // 0x130f20: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130f20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130f24: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x130f24u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130f28: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130f2c: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130f30: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x130f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x130f34: 0x0  nop
    ctx->pc = 0x130f34u;
    // NOP
    // 0x130f38: 0x0  nop
    ctx->pc = 0x130f38u;
    // NOP
    // 0x130f3c: 0x0  nop
    ctx->pc = 0x130f3cu;
    // NOP
    // 0x130f40: 0x481fff7  bgez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x130F40u;
    {
        const bool branch_taken_0x130f40 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x130F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F40u;
        // 0x130f44: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f40) {
            ctx->pc = 0x130F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130f20;
        }
    }
    ctx->pc = 0x130F48u;
}
