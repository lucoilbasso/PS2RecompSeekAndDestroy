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

// Function: entry_0015215c
// Address: 0x15215c - 0x152198
void entry_0015215c_0x15215c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015215c_0x15215c");
#endif

    ctx->pc = 0x15215cu;

    // 0x15215c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x15215Cu;
    {
        const bool branch_taken_0x15215c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x152160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15215Cu;
        // 0x152160: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15215c) {
            ctx->pc = 0x152198u;
            return;
        }
    }
    ctx->pc = 0x152164u;
    // 0x152164: 0xc6200088  lwc1        $f0, 0x88($s1)
    ctx->pc = 0x152164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152168: 0xc78182b4  lwc1        $f1, -0x7D4C($gp)
    ctx->pc = 0x152168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15216c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15216cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x152170: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x152170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x152174: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x152174u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x152178: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x152178u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15217c: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x15217cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x152180: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x152180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x152184: 0x8cc30064  lw          $v1, 0x64($a2)
    ctx->pc = 0x152184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x152188: 0x706418c8  pmaxw       $v1, $v1, $a0
    ctx->pc = 0x152188u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x15218c: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x15218cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x152190: 0xacc30064  sw          $v1, 0x64($a2)
    ctx->pc = 0x152190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 3));
    // 0x152194: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x152194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x152198u;
}
