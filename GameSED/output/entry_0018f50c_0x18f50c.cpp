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

// Function: entry_0018f50c
// Address: 0x18f50c - 0x18f550
void entry_0018f50c_0x18f50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f50c_0x18f50c");
#endif

    ctx->pc = 0x18f50cu;

    // 0x18f50c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x18f50cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18f510: 0x44036800  mfc1        $v1, $f13
    ctx->pc = 0x18f510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18f514: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x18f514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x18f518: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x18f518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x18f51c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x18f51cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18f520: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x18f520u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x18f524: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x18f524u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x18f528: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x18f528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x18f52c: 0x94e6015a  lhu         $a2, 0x15A($a3)
    ctx->pc = 0x18f52cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 346)));
    // 0x18f530: 0x28c60003  slti        $a2, $a2, 0x3
    ctx->pc = 0x18f530u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x18f534: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F534u;
    {
        const bool branch_taken_0x18f534 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f534) {
            ctx->pc = 0x18F550u;
            return;
        }
    }
    ctx->pc = 0x18F53Cu;
    // 0x18f53c: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x18f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x18f540: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x18f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x18f544: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18f544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f548: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x18f548u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x18f54c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18f54cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    ctx->pc = 0x18f550u;
}
