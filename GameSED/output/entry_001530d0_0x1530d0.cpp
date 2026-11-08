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

// Function: entry_001530d0
// Address: 0x1530d0 - 0x153100
void entry_001530d0_0x1530d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001530d0_0x1530d0");
#endif

    ctx->pc = 0x1530d0u;

    // 0x1530d0: 0x705310e8  pminw       $v0, $v0, $s3
    ctx->pc = 0x1530d0u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x1530d4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1530d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1530d8: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x1530d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x1530dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1530dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1530e0: 0xae230370  sw          $v1, 0x370($s1)
    ctx->pc = 0x1530e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 3));
    // 0x1530e4: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x1530e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x1530e8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1530e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1530ec: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1530ecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1530f0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1530f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1530f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1530f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1530f8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1530F8u;
    {
        const bool branch_taken_0x1530f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1530FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530F8u;
        // 0x1530fc: 0xc620034c  lwc1        $f0, 0x34C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530f8) {
            ctx->pc = 0x1531A8u;
            return;
        }
    }
    ctx->pc = 0x153100u;
}
