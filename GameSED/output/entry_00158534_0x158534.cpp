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

// Function: entry_00158534
// Address: 0x158534 - 0x158548
void entry_00158534_0x158534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158534_0x158534");
#endif

    ctx->pc = 0x158534u;

    // 0x158534: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158534u;
    {
        const bool branch_taken_0x158534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158534u;
        // 0x158538: 0xe5240404  swc1        $f4, 0x404($t1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 1028), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158534) {
            ctx->pc = 0x158548u;
            return;
        }
    }
    ctx->pc = 0x15853Cu;
    // 0x15853c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x15853cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x158540: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x158540u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158544: 0xf8e20000  sqc2        $vf2, 0x0($a3)
    ctx->pc = 0x158544u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x158548u;
}
