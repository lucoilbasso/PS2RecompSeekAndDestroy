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

// Function: entry_001521c8
// Address: 0x1521c8 - 0x1521f8
void entry_001521c8_0x1521c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001521c8_0x1521c8");
#endif

    ctx->pc = 0x1521c8u;

    // 0x1521c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1521c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1521cc: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1521CCu;
    {
        const bool branch_taken_0x1521cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1521D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521CCu;
        // 0x1521d0: 0x8ce60160  lw          $a2, 0x160($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521cc) {
            ctx->pc = 0x1521F8u;
            return;
        }
    }
    ctx->pc = 0x1521D4u;
    // 0x1521d4: 0x24e200b0  addiu       $v0, $a3, 0xB0
    ctx->pc = 0x1521d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
    // 0x1521d8: 0x24c30070  addiu       $v1, $a2, 0x70
    ctx->pc = 0x1521d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x1521dc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1521dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1521e0: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1521e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1521e4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1521e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1521e8: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1521e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1521ec: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1521ECu;
    {
        const bool branch_taken_0x1521ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1521ec) {
            ctx->pc = 0x1523ACu;
            return;
        }
    }
    ctx->pc = 0x1521F4u;
    // 0x1521f4: 0x0  nop
    ctx->pc = 0x1521f4u;
    // NOP
    ctx->pc = 0x1521f8u;
}
