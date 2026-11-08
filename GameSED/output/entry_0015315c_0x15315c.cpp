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

// Function: entry_0015315c
// Address: 0x15315c - 0x153190
void entry_0015315c_0x15315c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015315c_0x15315c");
#endif

    ctx->pc = 0x15315cu;

    // 0x15315c: 0x8e2203b0  lw          $v0, 0x3B0($s1)
    ctx->pc = 0x15315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 944)));
    // 0x153160: 0xae340374  sw          $s4, 0x374($s1)
    ctx->pc = 0x153160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 20));
    // 0x153164: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x153164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x153168: 0xae200378  sw          $zero, 0x378($s1)
    ctx->pc = 0x153168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 0));
    // 0x15316c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15316Cu;
    {
        const bool branch_taken_0x15316c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15316Cu;
        // 0x153170: 0xae20037c  sw          $zero, 0x37C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15316c) {
            ctx->pc = 0x153190u;
            return;
        }
    }
    ctx->pc = 0x153174u;
    // 0x153174: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x153174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x153178: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x153178u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x15317c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15317cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153180: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153180u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153184: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153188: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x153188u;
    {
        const bool branch_taken_0x153188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153188u;
        // 0x15318c: 0xc620034c  lwc1        $f0, 0x34C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153188) {
            ctx->pc = 0x1531A8u;
            return;
        }
    }
    ctx->pc = 0x153190u;
}
