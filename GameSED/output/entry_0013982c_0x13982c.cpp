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

// Function: entry_0013982c
// Address: 0x13982c - 0x139864
void entry_0013982c_0x13982c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013982c_0x13982c");
#endif

    switch (ctx->pc) {
        case 0x139834u: goto label_139834;
        case 0x139860u: goto label_139860;
        default: break;
    }

    ctx->pc = 0x13982cu;

    // 0x13982c: 0xc04e4f2  jal         func_1393C8
    ctx->pc = 0x13982Cu;
    SET_GPR_U32(ctx, 31, 0x139834u);
    ctx->pc = 0x139830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13982Cu;
    // 0x139830: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1393C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1393C8u, 0x13982Cu, 0x139834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139834u;
label_139834:
    // 0x139834: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x139834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x139838: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x139838u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13983c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x13983cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139840: 0xfa420000  sqc2        $vf2, 0x0($s2)
    ctx->pc = 0x139840u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139844: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x139844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x139848: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x139848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13984c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13984cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139850: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x139850u;
    {
        const bool branch_taken_0x139850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139850u;
        // 0x139854: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139850) {
            ctx->pc = 0x139864u;
            return;
        }
    }
    ctx->pc = 0x139858u;
    // 0x139858: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x139858u;
    SET_GPR_U32(ctx, 31, 0x139860u);
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x139858u, 0x139860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139860u;
label_139860:
    // 0x139860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x139864u;
}
