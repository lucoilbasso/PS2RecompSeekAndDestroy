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

// Function: entry_0011e798
// Address: 0x11e798 - 0x11e7d4
void entry_0011e798_0x11e798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e798_0x11e798");
#endif

    switch (ctx->pc) {
        case 0x11e7b4u: goto label_11e7b4;
        default: break;
    }

    ctx->pc = 0x11e798u;

    // 0x11e798: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11e79c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x11e79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11e7a0: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x11e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x11e7a4: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E7A4u;
    {
        const bool branch_taken_0x11e7a4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x11E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E7A4u;
        // 0x11e7a8: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7a4) {
            ctx->pc = 0x11E7D4u;
            return;
        }
    }
    ctx->pc = 0x11E7ACu;
    // 0x11e7ac: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11E7ACu;
    SET_GPR_U32(ctx, 31, 0x11E7B4u);
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11E7ACu, 0x11E7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E7B4u;
label_11e7b4:
    // 0x11e7b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11e7b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7b8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11e7b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11e7bc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11e7bcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11e7c0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11e7c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11e7c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11e7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e7c8: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x11e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e7cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11e7ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11e7d0: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x11e7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    ctx->pc = 0x11e7d4u;
}
