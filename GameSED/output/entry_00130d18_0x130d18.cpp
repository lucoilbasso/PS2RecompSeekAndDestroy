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

// Function: entry_00130d18
// Address: 0x130d18 - 0x130d48
void entry_00130d18_0x130d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130d18_0x130d18");
#endif

    ctx->pc = 0x130d18u;

label_130d18:
    // 0x130d18: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x130d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x130d1c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130d1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130d20: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x130d20u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130d24: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130d28: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130d28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130d2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x130d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x130d30: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x130d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x130d34: 0x0  nop
    ctx->pc = 0x130d34u;
    // NOP
    // 0x130d38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x130D38u;
    {
        const bool branch_taken_0x130d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D38u;
        // 0x130d3c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d38) {
            ctx->pc = 0x130D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130d18;
        }
    }
    ctx->pc = 0x130D40u;
    // 0x130d40: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x130D40u;
    {
        const bool branch_taken_0x130d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D40u;
        // 0x130d44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d40) {
            ctx->pc = 0x130F64u;
            return;
        }
    }
    ctx->pc = 0x130D48u;
}
