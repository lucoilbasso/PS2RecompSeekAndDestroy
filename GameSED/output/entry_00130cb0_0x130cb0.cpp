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

// Function: entry_00130cb0
// Address: 0x130cb0 - 0x130cf8
void entry_00130cb0_0x130cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130cb0_0x130cb0");
#endif

    ctx->pc = 0x130cb0u;

label_130cb0:
    // 0x130cb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x130cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x130cb4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130cb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130cb8: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x130cb8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130cbc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130cc0: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130cc4: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x130cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x130cc8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130cc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130ccc: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x130cccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130cd0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x130cd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130cd4: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x130cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130cd8: 0x8c830480  lw          $v1, 0x480($a0)
    ctx->pc = 0x130cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1152)));
    // 0x130cdc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x130cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x130ce0: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x130ce0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x130ce4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x130CE4u;
    {
        const bool branch_taken_0x130ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CE4u;
        // 0x130ce8: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ce4) {
            ctx->pc = 0x130CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130cb0;
        }
    }
    ctx->pc = 0x130CECu;
    // 0x130cec: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x130CECu;
    {
        const bool branch_taken_0x130cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CECu;
        // 0x130cf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cec) {
            ctx->pc = 0x130F64u;
            return;
        }
    }
    ctx->pc = 0x130CF4u;
    // 0x130cf4: 0x0  nop
    ctx->pc = 0x130cf4u;
    // NOP
    ctx->pc = 0x130cf8u;
}
