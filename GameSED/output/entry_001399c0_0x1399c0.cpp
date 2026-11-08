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

// Function: entry_001399c0
// Address: 0x1399c0 - 0x139a00
void entry_001399c0_0x1399c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001399c0_0x1399c0");
#endif

    switch (ctx->pc) {
        case 0x1399c8u: goto label_1399c8;
        default: break;
    }

    ctx->pc = 0x1399c0u;

    // 0x1399c0: 0xc061422  jal         func_185088
    ctx->pc = 0x1399C0u;
    SET_GPR_U32(ctx, 31, 0x1399C8u);
    ctx->pc = 0x1399C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1399C0u;
    // 0x1399c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1399C0u, 0x1399C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399C8u;
label_1399c8:
    // 0x1399c8: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x1399c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1399cc: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1399ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1399d0: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x1399d0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x1399d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1399d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1399d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1399d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1399dc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1399dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1399e0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1399E0u;
    {
        const bool branch_taken_0x1399e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1399E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1399E0u;
        // 0x1399e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399e0) {
            ctx->pc = 0x139A00u;
            return;
        }
    }
    ctx->pc = 0x1399E8u;
    // 0x1399e8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1399e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1399ec: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1399ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1399f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1399f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1399f4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1399f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1399f8: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1399f8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1399fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1399fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139a00u;
}
