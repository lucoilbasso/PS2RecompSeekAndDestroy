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

// Function: entry_0016e9d4
// Address: 0x16e9d4 - 0x16ea00
void entry_0016e9d4_0x16e9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e9d4_0x16e9d4");
#endif

    ctx->pc = 0x16e9d4u;

    // 0x16e9d4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x16e9d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16e9d8: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x16e9d8u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16e9dc: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x16e9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16e9e0: 0x8e2301e0  lw          $v1, 0x1E0($s1)
    ctx->pc = 0x16e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x16e9e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16e9e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E9E8u;
    {
        const bool branch_taken_0x16e9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E9E8u;
        // 0x16e9ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e9e8) {
            ctx->pc = 0x16EA00u;
            return;
        }
    }
    ctx->pc = 0x16E9F0u;
    // 0x16e9f0: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x16e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x16e9f4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16e9f8: 0xc0618da  jal         func_186368
    ctx->pc = 0x16E9F8u;
    SET_GPR_U32(ctx, 31, 0x16EA00u);
    ctx->pc = 0x16E9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E9F8u;
    // 0x16e9fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x16E9F8u, 0x16EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA00u;
}
