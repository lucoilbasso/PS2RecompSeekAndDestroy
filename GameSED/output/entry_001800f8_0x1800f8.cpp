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

// Function: entry_001800f8
// Address: 0x1800f8 - 0x180140
void entry_001800f8_0x1800f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001800f8_0x1800f8");
#endif

    ctx->pc = 0x1800f8u;

    // 0x1800f8: 0xa0cc000c  sb          $t4, 0xC($a2)
    ctx->pc = 0x1800f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 12));
    // 0x1800fc: 0x20c8025  or          $s0, $s0, $t4
    ctx->pc = 0x1800fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 12));
    // 0x180100: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x180100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180104: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x180104u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180108: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x180108u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18010c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x18010cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180110: 0xd8c60010  lqc2        $vf6, 0x10($a2)
    ctx->pc = 0x180110u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x180114: 0x4a212b3c  vmove.w     $vf1, $vf5
    ctx->pc = 0x180114u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x180118: 0x4a22333c  vmove.w     $vf2, $vf6
    ctx->pc = 0x180118u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[6], _mm_castsi128_ps(mask)); }
    // 0x18011c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18011cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180124: 0x24d180a  movz        $v1, $s2, $t5
    ctx->pc = 0x180124u;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x180128: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x180128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18012c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18012Cu;
    {
        const bool branch_taken_0x18012c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18012c) {
            ctx->pc = 0x180164u;
            return;
        }
    }
    ctx->pc = 0x180134u;
    // 0x180134: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x180134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x180138: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x180138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x18013c: 0x0  nop
    ctx->pc = 0x18013cu;
    // NOP
    ctx->pc = 0x180140u;
}
