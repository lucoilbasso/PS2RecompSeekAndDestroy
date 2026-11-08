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

// Function: entry_0011f4f8
// Address: 0x11f4f8 - 0x11f520
void entry_0011f4f8_0x11f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f4f8_0x11f4f8");
#endif

    switch (ctx->pc) {
        case 0x11f50cu: goto label_11f50c;
        default: break;
    }

    ctx->pc = 0x11f4f8u;

    // 0x11f4f8: 0x3a220005  xori        $v0, $s1, 0x5
    ctx->pc = 0x11f4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)5);
    // 0x11f4fc: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F4FCu;
    {
        const bool branch_taken_0x11f4fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F4FCu;
        // 0x11f500: 0x2880a  movz        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f4fc) {
            ctx->pc = 0x11F520u;
            return;
        }
    }
    ctx->pc = 0x11F504u;
    // 0x11f504: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x11F504u;
    SET_GPR_U32(ctx, 31, 0x11F50Cu);
    ctx->pc = 0x11F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F504u;
    // 0x11f508: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x11F504u, 0x11F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F50Cu;
label_11f50c:
    // 0x11f50c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11f50cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f510: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f510u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f514: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f514u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f518: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f518u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f51c: 0x4482c800  mtc1        $v0, $f25
    ctx->pc = 0x11f51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    ctx->pc = 0x11f520u;
}
