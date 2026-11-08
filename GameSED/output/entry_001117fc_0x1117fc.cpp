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

// Function: entry_001117fc
// Address: 0x1117fc - 0x111828
void entry_001117fc_0x1117fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001117fc_0x1117fc");
#endif

    ctx->pc = 0x1117fcu;

    // 0x1117fc: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x1117FCu;
    {
        const bool branch_taken_0x1117fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x111800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117FCu;
        // 0x111800: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117fc) {
            ctx->pc = 0x11183Cu;
            return;
        }
    }
    ctx->pc = 0x111804u;
    // 0x111804: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x111804u;
    {
        const bool branch_taken_0x111804 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x111804) {
            ctx->pc = 0x111828u;
            return;
        }
    }
    ctx->pc = 0x11180Cu;
    // 0x11180c: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x11180cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x111810: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x111810u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x111814: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x111814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x111818: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x111818u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11181c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11181Cu;
    {
        const bool branch_taken_0x11181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11181Cu;
        // 0x111820: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11181c) {
            ctx->pc = 0x11183Cu;
            return;
        }
    }
    ctx->pc = 0x111824u;
    // 0x111824: 0x0  nop
    ctx->pc = 0x111824u;
    // NOP
    ctx->pc = 0x111828u;
}
