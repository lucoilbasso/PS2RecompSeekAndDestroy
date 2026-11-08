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

// Function: entry_0016cc4c
// Address: 0x16cc4c - 0x16cc80
void entry_0016cc4c_0x16cc4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016cc4c_0x16cc4c");
#endif

    switch (ctx->pc) {
        case 0x16cc7cu: goto label_16cc7c;
        default: break;
    }

    ctx->pc = 0x16cc4cu;

    // 0x16cc4c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x16cc4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cc50: 0x4be2117c  vftoi0.xyzw $vf2, $vf2
    ctx->pc = 0x16cc50u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x16cc54: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x16cc54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x16cc58: 0x8e240154  lw          $a0, 0x154($s1)
    ctx->pc = 0x16cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16cc5c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x16cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16cc60: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x16cc60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16cc64: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x16cc64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16cc68: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x16cc68u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16cc6c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x16cc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x16cc70: 0x8e240154  lw          $a0, 0x154($s1)
    ctx->pc = 0x16cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x16cc74: 0xc0618da  jal         func_186368
    ctx->pc = 0x16CC74u;
    SET_GPR_U32(ctx, 31, 0x16CC7Cu);
    ctx->pc = 0x16CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CC74u;
    // 0x16cc78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x16CC74u, 0x16CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC7Cu;
label_16cc7c:
    // 0x16cc7c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x16cc7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x16cc80u;
}
