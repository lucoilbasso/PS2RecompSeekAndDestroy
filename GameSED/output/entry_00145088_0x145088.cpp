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

// Function: entry_00145088
// Address: 0x145088 - 0x1450b8
void entry_00145088_0x145088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145088_0x145088");
#endif

    switch (ctx->pc) {
        case 0x145090u: goto label_145090;
        case 0x145098u: goto label_145098;
        default: break;
    }

    ctx->pc = 0x145088u;

    // 0x145088: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x145088u;
    SET_GPR_U32(ctx, 31, 0x145090u);
    ctx->pc = 0x14508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145088u;
    // 0x14508c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x145088u, 0x145090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145090u;
label_145090:
    // 0x145090: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x145090u;
    SET_GPR_U32(ctx, 31, 0x145098u);
    ctx->pc = 0x145094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145090u;
    // 0x145094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x145090u, 0x145098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145098u;
label_145098:
    // 0x145098: 0x8e430328  lw          $v1, 0x328($s2)
    ctx->pc = 0x145098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x14509c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14509cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1450a0: 0xc4604004  lwc1        $f0, 0x4004($v1)
    ctx->pc = 0x1450a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1450a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1450a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1450a8: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1450a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1450ac: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x1450acu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1450b0: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x1450b0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1450b4: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x1450b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    ctx->pc = 0x1450b8u;
}
