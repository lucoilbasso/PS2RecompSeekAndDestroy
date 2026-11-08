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

// Function: entry_0018f4c8
// Address: 0x18f4c8 - 0x18f50c
void entry_0018f4c8_0x18f4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f4c8_0x18f4c8");
#endif

    ctx->pc = 0x18f4c8u;

    // 0x18f4c8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x18f4c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18f4cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18f4ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18f4d0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18f4d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18f4d4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18f4d8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18f4d8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18f4dc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18f4dcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18f4e0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18f4e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18f4e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18f4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x18f4e8: 0x94e6015a  lhu         $a2, 0x15A($a3)
    ctx->pc = 0x18f4e8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 346)));
    // 0x18f4ec: 0x28c60002  slti        $a2, $a2, 0x2
    ctx->pc = 0x18f4ecu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18f4f0: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F4F0u;
    {
        const bool branch_taken_0x18f4f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f4f0) {
            ctx->pc = 0x18F50Cu;
            return;
        }
    }
    ctx->pc = 0x18F4F8u;
    // 0x18f4f8: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x18f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x18f4fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18f500: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18f500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f504: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x18f504u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18f508: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18f508u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x18f50cu;
}
