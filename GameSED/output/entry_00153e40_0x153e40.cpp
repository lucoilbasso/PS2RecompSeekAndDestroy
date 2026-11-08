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

// Function: entry_00153e40
// Address: 0x153e40 - 0x153ea0
void entry_00153e40_0x153e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153e40_0x153e40");
#endif

    ctx->pc = 0x153e40u;

    // 0x153e40: 0x24052666  addiu       $a1, $zero, 0x2666
    ctx->pc = 0x153e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9830));
    // 0x153e44: 0x706528c8  pmaxw       $a1, $v1, $a1
    ctx->pc = 0x153e44u;
    SET_GPR_VEC(ctx, 5, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x153e48: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x153e48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x153e4c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x153e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x153e50: 0x2463a667  addiu       $v1, $v1, -0x5999
    ctx->pc = 0x153e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944359));
    // 0x153e54: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x153e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153e58: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x153e58u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x153e5c: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x153e5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    // 0x153e60: 0x2404028f  addiu       $a0, $zero, 0x28F
    ctx->pc = 0x153e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 655));
    // 0x153e64: 0x24025999  addiu       $v0, $zero, 0x5999
    ctx->pc = 0x153e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22937));
    // 0x153e68: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x153e68u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x153e6c: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x153e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x153e70: 0x706218e8  pminw       $v1, $v1, $v0
    ctx->pc = 0x153e70u;
    SET_GPR_VEC(ctx, 3, PS2_PMINW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x153e74: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x153e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x153e78: 0x34e44000  ori         $a0, $a3, 0x4000
    ctx->pc = 0x153e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x153e7c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x153e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x153e80: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x153e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x153e84: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x153e84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x153e88: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153e88u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153e8c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153e8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x153e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153e94: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x153e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x153e98: 0xc056854  jal         func_15A150
    ctx->pc = 0x153E98u;
    SET_GPR_U32(ctx, 31, 0x153EA0u);
    ctx->pc = 0x153E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153E98u;
    // 0x153e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A150u, 0x153E98u, 0x153EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153EA0u;
}
