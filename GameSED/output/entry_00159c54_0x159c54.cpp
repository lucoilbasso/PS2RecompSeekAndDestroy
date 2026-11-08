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

// Function: entry_00159c54
// Address: 0x159c54 - 0x159c70
void entry_00159c54_0x159c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159c54_0x159c54");
#endif

    ctx->pc = 0x159c54u;

    // 0x159c54: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x159C54u;
    {
        const bool branch_taken_0x159c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159c54) {
            ctx->pc = 0x159C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159C54u;
            // 0x159c58: 0xc500001c  lwc1        $f0, 0x1C($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x159C70u;
            return;
        }
    }
    ctx->pc = 0x159C5Cu;
    // 0x159c5c: 0x24e20400  addiu       $v0, $a3, 0x400
    ctx->pc = 0x159c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x159c60: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x159c60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159c64: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x159c64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x159c68: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x159c68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x159c6c: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x159c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x159c70u;
}
