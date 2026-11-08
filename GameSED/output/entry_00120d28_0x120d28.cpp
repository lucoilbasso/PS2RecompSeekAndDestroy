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

// Function: entry_00120d28
// Address: 0x120d28 - 0x120d64
void entry_00120d28_0x120d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120d28_0x120d28");
#endif

    ctx->pc = 0x120d28u;

    // 0x120d28: 0x26430090  addiu       $v1, $s2, 0x90
    ctx->pc = 0x120d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x120d2c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x120d2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120d30: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x120d30u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120d34: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120d34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120d38: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x120d38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120d3c: 0x26420070  addiu       $v0, $s2, 0x70
    ctx->pc = 0x120d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x120d40: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x120d40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120d44: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x120d44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x120d48: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120d48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120d4c: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x120d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120d50: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x120d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x120d54: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x120d54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x120d58: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x120d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x120d5c: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x120D5Cu;
    {
        const bool branch_taken_0x120d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120D5Cu;
        // 0x120d60: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120d5c) {
            ctx->pc = 0x120BB0u;
            return;
        }
    }
    ctx->pc = 0x120D64u;
}
