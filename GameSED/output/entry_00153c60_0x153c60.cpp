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

// Function: entry_00153c60
// Address: 0x153c60 - 0x153ce0
void entry_00153c60_0x153c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153c60_0x153c60");
#endif

    ctx->pc = 0x153c60u;

    // 0x153c60: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x153c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x153c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153c68: 0xc78182dc  lwc1        $f1, -0x7D24($gp)
    ctx->pc = 0x153c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153c6c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x153c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x153c70: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x153c70u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x153c74: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x153c74u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x153c78: 0x8e230848  lw          $v1, 0x848($s1)
    ctx->pc = 0x153c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
    // 0x153c7c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x153c7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x153c80: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x153c80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x153c84: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x153c84u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153c88: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x153c88u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153c8c: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x153c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x153c90: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x153c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x153c94: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x153c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x153c98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x153c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x153c9c: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x153c9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x153ca0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153ca0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153ca4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153ca4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153ca8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x153ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153cac: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x153cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x153cb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153cb4: 0xc78182e0  lwc1        $f1, -0x7D20($gp)
    ctx->pc = 0x153cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153cb8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x153cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x153cbc: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x153cbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x153cc0: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x153cc0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x153cc4: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x153cc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x153cc8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x153cc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x153ccc: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x153cccu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153cd0: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x153cd0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153cd4: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x153cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x153cd8: 0xc056854  jal         func_15A150
    ctx->pc = 0x153CD8u;
    SET_GPR_U32(ctx, 31, 0x153CE0u);
    ctx->pc = 0x153CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153CD8u;
    // 0x153cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A150u, 0x153CD8u, 0x153CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153CE0u;
}
