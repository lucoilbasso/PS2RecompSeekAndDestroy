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

// Function: entry_0011f544
// Address: 0x11f544 - 0x11f56c
void entry_0011f544_0x11f544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f544_0x11f544");
#endif

    switch (ctx->pc) {
        case 0x11f554u: goto label_11f554;
        default: break;
    }

    ctx->pc = 0x11f544u;

    // 0x11f544: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F544u;
    {
        const bool branch_taken_0x11f544 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F544u;
        // 0x11f548: 0x213102b  sltu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f544) {
            ctx->pc = 0x11F56Cu;
            return;
        }
    }
    ctx->pc = 0x11F54Cu;
    // 0x11f54c: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F54Cu;
    SET_GPR_U32(ctx, 31, 0x11F554u);
    ctx->pc = 0x11F550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F54Cu;
    // 0x11f550: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F54Cu, 0x11F554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F554u;
label_11f554:
    // 0x11f554: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f554u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f558: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f558u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f55c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f55cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f560: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f560u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f564: 0x4482d000  mtc1        $v0, $f26
    ctx->pc = 0x11f564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x11f568: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x11f568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    ctx->pc = 0x11f56cu;
}
