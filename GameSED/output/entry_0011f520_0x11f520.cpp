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

// Function: entry_0011f520
// Address: 0x11f520 - 0x11f544
void entry_0011f520_0x11f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f520_0x11f520");
#endif

    switch (ctx->pc) {
        case 0x11f530u: goto label_11f530;
        default: break;
    }

    ctx->pc = 0x11f520u;

    // 0x11f520: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F520u;
    {
        const bool branch_taken_0x11f520 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f520) {
            ctx->pc = 0x11F544u;
            return;
        }
    }
    ctx->pc = 0x11F528u;
    // 0x11f528: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F528u;
    SET_GPR_U32(ctx, 31, 0x11F530u);
    ctx->pc = 0x11F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F528u;
    // 0x11f52c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F528u, 0x11F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F530u;
label_11f530:
    // 0x11f530: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f534: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f534u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f538: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f538u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f53c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f53cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f540: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x11f540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    ctx->pc = 0x11f544u;
}
