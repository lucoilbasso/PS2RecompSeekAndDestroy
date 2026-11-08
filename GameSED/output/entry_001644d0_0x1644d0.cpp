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

// Function: entry_001644d0
// Address: 0x1644d0 - 0x164500
void entry_001644d0_0x1644d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001644d0_0x1644d0");
#endif

    ctx->pc = 0x1644d0u;

    // 0x1644d0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1644d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1644d4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1644d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1644d8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1644d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1644dc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1644dcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1644e0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1644e0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1644e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1644e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1644e8: 0x58e00012  blezl       $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1644E8u;
    {
        const bool branch_taken_0x1644e8 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x1644e8) {
            ctx->pc = 0x1644ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1644E8u;
            // 0x1644ec: 0x8d450000  lw          $a1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164534u;
            return;
        }
    }
    ctx->pc = 0x1644F0u;
    // 0x1644f0: 0xc783835c  lwc1        $f3, -0x7CA4($gp)
    ctx->pc = 0x1644f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1644f4: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x1644f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1644f8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1644f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1644fc: 0x0  nop
    ctx->pc = 0x1644fcu;
    // NOP
    ctx->pc = 0x164500u;
}
