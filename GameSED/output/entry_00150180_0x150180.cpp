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

// Function: entry_00150180
// Address: 0x150180 - 0x1501b0
void entry_00150180_0x150180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150180_0x150180");
#endif

    ctx->pc = 0x150180u;

    // 0x150180: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x150180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x150184: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150184u;
    {
        const bool branch_taken_0x150184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150184u;
        // 0x150188: 0x3c030021  lui         $v1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150184) {
            ctx->pc = 0x1501E4u;
            return;
        }
    }
    ctx->pc = 0x15018Cu;
    // 0x15018c: 0x26020820  addiu       $v0, $s0, 0x820
    ctx->pc = 0x15018cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x150190: 0x24639b90  addiu       $v1, $v1, -0x6470
    ctx->pc = 0x150190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941584));
    // 0x150194: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x150194u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150198: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x150198u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15019c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15019cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1501a0: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1501a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1501a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1501A4u;
    {
        const bool branch_taken_0x1501a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1501a4) {
            ctx->pc = 0x1501E4u;
            return;
        }
    }
    ctx->pc = 0x1501ACu;
    // 0x1501ac: 0x0  nop
    ctx->pc = 0x1501acu;
    // NOP
    ctx->pc = 0x1501b0u;
}
