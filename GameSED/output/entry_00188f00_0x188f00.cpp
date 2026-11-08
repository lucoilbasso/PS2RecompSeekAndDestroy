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

// Function: entry_00188f00
// Address: 0x188f00 - 0x188f60
void entry_00188f00_0x188f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188f00_0x188f00");
#endif

    ctx->pc = 0x188f00u;

    // 0x188f00: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x188f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x188f04: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x188f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x188f08: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x188f08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f0c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x188f0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x188f10: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x188f10u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x188f14: 0xd8670000  lqc2        $vf7, 0x0($v1)
    ctx->pc = 0x188f14u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188f18: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x188f18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x188f1c: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x188f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x188f20: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x188f20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x188f24: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x188f24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x188f28: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x188f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x188f2c: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x188f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x188f30: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x188f30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x188f34: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x188f34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x188f38: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x188f38u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x188f3c: 0x4a24033c  vmove.w     $vf4, $vf0
    ctx->pc = 0x188f3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x188f40: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x188f40u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x188f44: 0x4a26033c  vmove.w     $vf6, $vf0
    ctx->pc = 0x188f44u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x188f48: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x188f48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x188f4c: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x188f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x188f50: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x188f50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x188f54: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x188f54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188f58: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x188F58u;
    {
        const bool branch_taken_0x188f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F58u;
        // 0x188f5c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f58) {
            ctx->pc = 0x188FA0u;
            return;
        }
    }
    ctx->pc = 0x188F60u;
}
