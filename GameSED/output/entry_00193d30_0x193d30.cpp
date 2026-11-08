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

// Function: entry_00193d30
// Address: 0x193d30 - 0x193d64
void entry_00193d30_0x193d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193d30_0x193d30");
#endif

    ctx->pc = 0x193d30u;

label_193d30:
    // 0x193d30: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x193d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x193d34: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x193d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x193d38: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x193d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x193d3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x193d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193d40: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x193d40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193d44: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x193d44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x193d48: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x193d48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x193d4c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x193d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x193d50: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x193d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x193d54: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x193d58: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x193d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x193d5c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x193D5Cu;
    {
        const bool branch_taken_0x193d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193d5c) {
            ctx->pc = 0x193D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193D5Cu;
            // 0x193d60: 0x8e430018  lw          $v1, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193d30;
        }
    }
    ctx->pc = 0x193D64u;
}
